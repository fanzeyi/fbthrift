/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/MyServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyService_first_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string,  ::cpp2::annotated_inline_string*>> MyService_first_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, int64_t*>> MyService_second_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>> MyService_second_presult;

template <typename Protocol_>
void MyServiceAsyncClient::firstT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyService_first_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), ctx->ctx, std::move(header), channel_.get(), "first", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void MyServiceAsyncClient::secondT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_count) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyService_second_pargs args;
  args.get<0>().value = &p_count;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), ctx->ctx, std::move(header), channel_.get(), "second", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}



void MyServiceAsyncClient::first(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  first(rpcOptions, std::move(callback));
}

void MyServiceAsyncClient::first(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto ctx = firstCtx(rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  firstImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback));
}

void MyServiceAsyncClient::firstImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      firstT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      firstT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> MyServiceAsyncClient::firstCtx(apache::thrift::RpcOptions& rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      handlers_,
      getServiceName(),
      "MyService.first");
}

void MyServiceAsyncClient::sync_first( ::cpp2::annotated_inline_string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_first(rpcOptions, _return);
}

void MyServiceAsyncClient::sync_first(apache::thrift::RpcOptions& rpcOptions,  ::cpp2::annotated_inline_string& _return) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = firstCtx(rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  firstImpl(rpcOptions, ctx, std::move(wrappedCallback));
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      recv_first(_return, _returnState);
  });
}


folly::Future< ::cpp2::annotated_inline_string> MyServiceAsyncClient::future_first() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_first(rpcOptions);
}

folly::SemiFuture< ::cpp2::annotated_inline_string> MyServiceAsyncClient::semifuture_first() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_first(rpcOptions);
}

folly::Future< ::cpp2::annotated_inline_string> MyServiceAsyncClient::future_first(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise< ::cpp2::annotated_inline_string> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback< ::cpp2::annotated_inline_string>>(std::move(promise), recv_wrapped_first, channel_);
  first(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture< ::cpp2::annotated_inline_string> MyServiceAsyncClient::semifuture_first(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_first, channel_);
  auto callback = std::move(callbackAndFuture.first);
  first(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair< ::cpp2::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_first(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair< ::cpp2::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback< ::cpp2::annotated_inline_string>>(std::move(promise), recv_wrapped_first, channel_);
  first(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair< ::cpp2::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_first(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_first, channel_);
  auto callback = std::move(callbackAndFuture.first);
  first(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::first(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  first(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_first( ::cpp2::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_first_presult;
  constexpr auto const fname = "first";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_first( ::cpp2::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_first(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceAsyncClient::recv_instance_first( ::cpp2::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_first(_return, state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_first( ::cpp2::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_first(_return, state);
}

void MyServiceAsyncClient::second(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  second(rpcOptions, std::move(callback), p_count);
}

void MyServiceAsyncClient::second(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_count) {
  auto ctx = secondCtx(rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  secondImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback), p_count);
}

void MyServiceAsyncClient::secondImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_count) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      secondT(&writer, rpcOptions, std::move(ctx), std::move(callback), p_count);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      secondT(&writer, rpcOptions, std::move(ctx), std::move(callback), p_count);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> MyServiceAsyncClient::secondCtx(apache::thrift::RpcOptions& rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      handlers_,
      getServiceName(),
      "MyService.second");
}

bool MyServiceAsyncClient::sync_second(int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_second(rpcOptions, p_count);
}

bool MyServiceAsyncClient::sync_second(apache::thrift::RpcOptions& rpcOptions, int64_t p_count) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = secondCtx(rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  secondImpl(rpcOptions, ctx, std::move(wrappedCallback), p_count);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      return recv_second(_returnState);
  });
}


folly::Future<bool> MyServiceAsyncClient::future_second(int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_second(rpcOptions, p_count);
}

folly::SemiFuture<bool> MyServiceAsyncClient::semifuture_second(int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_second(rpcOptions, p_count);
}

folly::Future<bool> MyServiceAsyncClient::future_second(apache::thrift::RpcOptions& rpcOptions, int64_t p_count) {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<bool>>(std::move(promise), recv_wrapped_second, channel_);
  second(rpcOptions, std::move(callback), p_count);
  return future;
}

folly::SemiFuture<bool> MyServiceAsyncClient::semifuture_second(apache::thrift::RpcOptions& rpcOptions, int64_t p_count) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_second, channel_);
  auto callback = std::move(callbackAndFuture.first);
  second(rpcOptions, std::move(callback), p_count);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_second(apache::thrift::RpcOptions& rpcOptions, int64_t p_count) {
  folly::Promise<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<bool>>(std::move(promise), recv_wrapped_second, channel_);
  second(rpcOptions, std::move(callback), p_count);
  return future;
}

folly::SemiFuture<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_second(apache::thrift::RpcOptions& rpcOptions, int64_t p_count) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_second, channel_);
  auto callback = std::move(callbackAndFuture.first);
  second(rpcOptions, std::move(callback), p_count);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::second(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t p_count) {
  second(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_count);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_second(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_second_presult;
  constexpr auto const fname = "second";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

bool MyServiceAsyncClient::recv_second(::apache::thrift::ClientReceiveState& state) {
  bool _return;
  auto ew = recv_wrapped_second(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

bool MyServiceAsyncClient::recv_instance_second(::apache::thrift::ClientReceiveState& state) {
  return recv_second(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_second(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_second(_return, state);
}


} // cpp2
