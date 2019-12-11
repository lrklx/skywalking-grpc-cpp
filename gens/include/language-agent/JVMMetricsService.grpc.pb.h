// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: language-agent/JVMMetricsService.proto
// Original file comments:
//
// Licensed to the Apache Software Foundation (ASF) under one or more
// contributor license agreements.  See the NOTICE file distributed with
// this work for additional information regarding copyright ownership.
// The ASF licenses this file to You under the Apache License, Version 2.0
// (the "License"); you may not use this file except in compliance with
// the License.  You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
#ifndef GRPC_language_2dagent_2fJVMMetricsService_2eproto__INCLUDED
#define GRPC_language_2dagent_2fJVMMetricsService_2eproto__INCLUDED

#include "language-agent/JVMMetricsService.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

class JVMMetricsService final {
 public:
  static constexpr char const* service_full_name() {
    return "JVMMetricsService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status collect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::Downstream* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>> Asynccollect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>>(AsynccollectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>> PrepareAsynccollect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>>(PrepareAsynccollectRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void collect(::grpc::ClientContext* context, const ::JVMMetrics* request, ::Downstream* response, std::function<void(::grpc::Status)>) = 0;
      virtual void collect(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Downstream* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>* AsynccollectRaw(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>* PrepareAsynccollectRaw(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status collect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::Downstream* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>> Asynccollect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>>(AsynccollectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>> PrepareAsynccollect(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>>(PrepareAsynccollectRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void collect(::grpc::ClientContext* context, const ::JVMMetrics* request, ::Downstream* response, std::function<void(::grpc::Status)>) override;
      void collect(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Downstream* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Downstream>* AsynccollectRaw(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Downstream>* PrepareAsynccollectRaw(::grpc::ClientContext* context, const ::JVMMetrics& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_collect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_collect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_collect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_collect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestcollect(::grpc::ServerContext* context, ::JVMMetrics* request, ::grpc::ServerAsyncResponseWriter< ::Downstream>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_collect<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_collect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_collect() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::JVMMetrics, ::Downstream>(
          [this](::grpc::ServerContext* context,
                 const ::JVMMetrics* request,
                 ::Downstream* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->collect(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_collect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_collect<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_collect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_collect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_collect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_collect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_collect() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_collect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestcollect(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_collect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_collect() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->collect(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_collect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void collect(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_collect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_collect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::JVMMetrics, ::Downstream>(std::bind(&WithStreamedUnaryMethod_collect<BaseClass>::Streamedcollect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_collect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status collect(::grpc::ServerContext* context, const ::JVMMetrics* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedcollect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::JVMMetrics,::Downstream>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_collect<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_collect<Service > StreamedService;
};


#endif  // GRPC_language_2dagent_2fJVMMetricsService_2eproto__INCLUDED
