/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
public class RaiserAsyncClientImpl extends AbstractThriftClient implements Raiser.Async {

    // Method Handlers
    private ThriftMethodHandler doBlandMethodHandler;
    private ThriftMethodHandler doRaiseMethodHandler;
    private ThriftMethodHandler get200MethodHandler;
    private ThriftMethodHandler get500MethodHandler;

    // Method Exceptions
    private static final Class[] doBlandExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] doRaiseExceptions = new Class[] {
        test.fixtures.exceptions.Banal.class, test.fixtures.exceptions.Fiery.class, test.fixtures.exceptions.Serious.class, org.apache.thrift.TException.class};
    private static final Class[] get200Exceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] get500Exceptions = new Class[] {
        test.fixtures.exceptions.Fiery.class, test.fixtures.exceptions.Banal.class, test.fixtures.exceptions.Serious.class, org.apache.thrift.TException.class};

    public RaiserAsyncClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      doBlandMethodHandler = methodHandlerMap.get("doBland");
      doRaiseMethodHandler = methodHandlerMap.get("doRaise");
      get200MethodHandler = methodHandlerMap.get("get200");
      get500MethodHandler = methodHandlerMap.get("get500");
    }

    public RaiserAsyncClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      doBlandMethodHandler = methodHandlerMap.get("doBland");
      doRaiseMethodHandler = methodHandlerMap.get("doRaise");
      get200MethodHandler = methodHandlerMap.get("get200");
      get500MethodHandler = methodHandlerMap.get("get500");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public ListenableFuture<Void> doBland() {
        return doBland(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<Void> doBland(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(doBlandWrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<Void>> doBlandWrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(doBlandMethodHandler, doBlandExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }

    @java.lang.Override
    public ListenableFuture<Void> doRaise() {
        return doRaise(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<Void> doRaise(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(doRaiseWrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<Void>> doRaiseWrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(doRaiseMethodHandler, doRaiseExceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }

    @java.lang.Override
    public ListenableFuture<String> get200() {
        return get200(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<String> get200(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(get200Wrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<String>> get200Wrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(get200MethodHandler, get200Exceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }

    @java.lang.Override
    public ListenableFuture<String> get500() {
        return get500(RpcOptions.EMPTY);
    }

    @java.lang.Override
    public ListenableFuture<String> get500(
        RpcOptions rpcOptions) {
        return FutureUtil.transform(get500Wrapper(rpcOptions));
    }

    @java.lang.Override
    public ListenableFuture<ResponseWrapper<String>> get500Wrapper(
        RpcOptions rpcOptions) {
        try {
          return executeWrapperWithOptions(get500MethodHandler, get500Exceptions, rpcOptions);
        } catch (Throwable t) {
          throw new RuntimeTException(t.getMessage(), t);
        }
    }
}