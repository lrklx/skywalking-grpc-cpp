// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: language-agent-v2/CLRMetric.proto

#include "language-agent-v2/CLRMetric.pb.h"
#include "language-agent-v2/CLRMetric.grpc.pb.h"

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

static const char* CLRMetricReportService_method_names[] = {
  "/CLRMetricReportService/collect",
};

std::unique_ptr< CLRMetricReportService::Stub> CLRMetricReportService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CLRMetricReportService::Stub> stub(new CLRMetricReportService::Stub(channel));
  return stub;
}

CLRMetricReportService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_collect_(CLRMetricReportService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CLRMetricReportService::Stub::collect(::grpc::ClientContext* context, const ::CLRMetricCollection& request, ::Commands* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_collect_, context, request, response);
}

void CLRMetricReportService::Stub::experimental_async::collect(::grpc::ClientContext* context, const ::CLRMetricCollection* request, ::Commands* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_collect_, context, request, response, std::move(f));
}

void CLRMetricReportService::Stub::experimental_async::collect(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Commands* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_collect_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::Commands>* CLRMetricReportService::Stub::AsynccollectRaw(::grpc::ClientContext* context, const ::CLRMetricCollection& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Commands>::Create(channel_.get(), cq, rpcmethod_collect_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Commands>* CLRMetricReportService::Stub::PrepareAsynccollectRaw(::grpc::ClientContext* context, const ::CLRMetricCollection& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Commands>::Create(channel_.get(), cq, rpcmethod_collect_, context, request, false);
}

CLRMetricReportService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CLRMetricReportService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CLRMetricReportService::Service, ::CLRMetricCollection, ::Commands>(
          std::mem_fn(&CLRMetricReportService::Service::collect), this)));
}

CLRMetricReportService::Service::~Service() {
}

::grpc::Status CLRMetricReportService::Service::collect(::grpc::ServerContext* context, const ::CLRMetricCollection* request, ::Commands* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


