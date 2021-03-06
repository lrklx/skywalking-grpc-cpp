// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: language-agent/JVMMetricsService.proto

#include "language-agent/JVMMetricsService.pb.h"
#include "language-agent/JVMMetricsService.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* JVMMetricsService_method_names[] = {
  "/JVMMetricsService/collect",
};

std::unique_ptr< JVMMetricsService::Stub> JVMMetricsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< JVMMetricsService::Stub> stub(new JVMMetricsService::Stub(channel));
  return stub;
}

JVMMetricsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_collect_(JVMMetricsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status JVMMetricsService::Stub::collect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::Downstream* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_collect_, context, request, response);
}

void JVMMetricsService::Stub::experimental_async::collect(::grpc::ClientContext* context, const ::JVMMetrics* request, ::Downstream* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_collect_, context, request, response, std::move(f));
}

void JVMMetricsService::Stub::experimental_async::collect(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Downstream* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_collect_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::Downstream>* JVMMetricsService::Stub::AsynccollectRaw(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Downstream>::Create(channel_.get(), cq, rpcmethod_collect_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Downstream>* JVMMetricsService::Stub::PrepareAsynccollectRaw(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Downstream>::Create(channel_.get(), cq, rpcmethod_collect_, context, request, false);
}

JVMMetricsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      JVMMetricsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< JVMMetricsService::Service, ::JVMMetrics, ::Downstream>(
          std::mem_fn(&JVMMetricsService::Service::collect), this)));
}

JVMMetricsService::Service::~Service() {
}

::grpc::Status JVMMetricsService::Service::collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


