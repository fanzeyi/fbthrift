/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/py3lite/client/OmniClient.h>

#include <fmt/format.h>
#include <folly/experimental/coro/BlockingWait.h>
#include <folly/futures/Promise.h>
#include <folly/io/IOBuf.h>
#include <thrift/lib/cpp/ContextStack.h>
#include <thrift/lib/cpp/TProcessorEventHandler.h>
#include <thrift/lib/cpp/protocol/TProtocolTypes.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/RequestCallback.h>
#include <thrift/lib/cpp2/async/RequestChannel.h>
#include <thrift/lib/cpp2/async/RpcOptions.h>

namespace thrift {
namespace py3lite {
namespace client {
using namespace apache::thrift;

namespace {

inline std::pair<
    std::unique_ptr<apache::thrift::ContextStack>,
    std::shared_ptr<apache::thrift::transport::THeader>>
makeOmniClientRequestContext(
    uint16_t protocolId,
    apache::thrift::transport::THeader::StringToStringMap headers,
    std::shared_ptr<
        std::vector<std::shared_ptr<apache::thrift::TProcessorEventHandler>>>
        handlers,
    const char* serviceName,
    const char* functionName) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(protocolId);
  header->setHeaders(std::move(headers));
  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers, serviceName, functionName, *header);

  return {std::move(ctx), std::move(header)};
}

} // namespace

OmniClientResponseWithHeaders OmniClient::sync_send(
    const std::string& functionName,
    const std::string& args,
    const std::unordered_map<std::string, std::string>& headers) {
  return folly::coro::blockingWait(
      semifuture_send(functionName, args, headers));
}

folly::SemiFuture<OmniClientResponseWithHeaders> OmniClient::semifuture_send(
    const std::string& functionName,
    const std::string& args,
    const std::unordered_map<std::string, std::string>& headers) {
  // Create a promise and semi-future to transcode the return.
  RpcOptions rpcOpts;
  for (const auto& entry : headers) {
    rpcOpts.setWriteHeader(entry.first, entry.second);
  }

  // ContextStack takes raw pointers to service and method name. The caller
  // must guarantee that the backing strings outlive ContextStack (which is
  // destroyed as part of ClientReceiveState's destructor).
  auto serviceAndFunction =
      std::make_unique<std::pair<std::string, std::string>>(
          serviceName_, fmt::format("{}.{}", serviceName_, functionName));

  folly::Promise<ClientReceiveState> promise;
  auto future = promise.getSemiFuture();
  sendImpl(
      rpcOpts,
      functionName,
      args,
      serviceAndFunction->first.c_str(),
      serviceAndFunction->second.c_str(),
      std::make_unique<SemiFutureCallback>(std::move(promise), channel_));
  return std::move(future).deferValue(
      [serviceAndFunction =
           std::move(serviceAndFunction)](ClientReceiveState&& state) {
        if (state.isException()) {
          state.exception().throw_exception();
        }
        OmniClientResponseWithHeaders resp;
        resp.buf = std::move(state.serializedResponse().buffer);
        resp.headers = state.header()->releaseHeaders();
        state.resetCtx(nullptr);

        return resp;
      });
}

void OmniClient::sendImpl(
    RpcOptions rpcOptions,
    const std::string& functionName,
    const std::string& args,
    const char* serviceNameForContextStack,
    const char* functionNameForContextStack,
    std::unique_ptr<RequestCallback> callback) {
  // Create the request context.
  auto [ctx, header] = makeOmniClientRequestContext(
      channel_->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      handlers_,
      serviceNameForContextStack,
      functionNameForContextStack);
  RequestCallback::Context callbackContext;
  callbackContext.protocolId = channel_->getProtocolId();
  callbackContext.ctx = std::move(ctx);

  SerializedRequest serializedRequest(folly::IOBuf::copyBuffer(args));

  // Send the request!
  channel_->sendRequestAsync<RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(
      std::move(rpcOptions),
      functionName,
      std::move(serializedRequest),
      std::move(header),
      toRequestClientCallbackPtr(
          std::move(callback), std::move(callbackContext)));
}

uint16_t OmniClient::getChannelProtocolId() {
  return channel_->getProtocolId();
}

} // namespace client
} // namespace py3lite
} // namespace thrift