// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: language-agent/DiscoveryService.proto
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
#ifndef GRPC_language_2dagent_2fDiscoveryService_2eproto__INCLUDED
#define GRPC_language_2dagent_2fDiscoveryService_2eproto__INCLUDED

#include "language-agent/DiscoveryService.pb.h"

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

class InstanceDiscoveryService final {
 public:
  static constexpr char const* service_full_name() {
    return "InstanceDiscoveryService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status registerInstance(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::ApplicationInstanceMapping* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ApplicationInstanceMapping>> AsyncregisterInstance(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ApplicationInstanceMapping>>(AsyncregisterInstanceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ApplicationInstanceMapping>> PrepareAsyncregisterInstance(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ApplicationInstanceMapping>>(PrepareAsyncregisterInstanceRaw(context, request, cq));
    }
    virtual ::grpc::Status heartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::Downstream* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>> Asyncheartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>>(AsyncheartbeatRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>> PrepareAsyncheartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>>(PrepareAsyncheartbeatRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void registerInstance(::grpc::ClientContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response, std::function<void(::grpc::Status)>) = 0;
      virtual void registerInstance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ApplicationInstanceMapping* response, std::function<void(::grpc::Status)>) = 0;
      virtual void heartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response, std::function<void(::grpc::Status)>) = 0;
      virtual void heartbeat(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Downstream* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ApplicationInstanceMapping>* AsyncregisterInstanceRaw(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ApplicationInstanceMapping>* PrepareAsyncregisterInstanceRaw(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>* AsyncheartbeatRaw(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Downstream>* PrepareAsyncheartbeatRaw(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status registerInstance(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::ApplicationInstanceMapping* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ApplicationInstanceMapping>> AsyncregisterInstance(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ApplicationInstanceMapping>>(AsyncregisterInstanceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ApplicationInstanceMapping>> PrepareAsyncregisterInstance(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ApplicationInstanceMapping>>(PrepareAsyncregisterInstanceRaw(context, request, cq));
    }
    ::grpc::Status heartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::Downstream* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>> Asyncheartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>>(AsyncheartbeatRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>> PrepareAsyncheartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Downstream>>(PrepareAsyncheartbeatRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void registerInstance(::grpc::ClientContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response, std::function<void(::grpc::Status)>) override;
      void registerInstance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ApplicationInstanceMapping* response, std::function<void(::grpc::Status)>) override;
      void heartbeat(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response, std::function<void(::grpc::Status)>) override;
      void heartbeat(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Downstream* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::ApplicationInstanceMapping>* AsyncregisterInstanceRaw(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ApplicationInstanceMapping>* PrepareAsyncregisterInstanceRaw(::grpc::ClientContext* context, const ::ApplicationInstance& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Downstream>* AsyncheartbeatRaw(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Downstream>* PrepareAsyncheartbeatRaw(::grpc::ClientContext* context, const ::ApplicationInstanceHeartbeat& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_registerInstance_;
    const ::grpc::internal::RpcMethod rpcmethod_heartbeat_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response);
    virtual ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_registerInstance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_registerInstance() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_registerInstance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestregisterInstance(::grpc::ServerContext* context, ::ApplicationInstance* request, ::grpc::ServerAsyncResponseWriter< ::ApplicationInstanceMapping>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_heartbeat() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestheartbeat(::grpc::ServerContext* context, ::ApplicationInstanceHeartbeat* request, ::grpc::ServerAsyncResponseWriter< ::Downstream>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_registerInstance<WithAsyncMethod_heartbeat<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_registerInstance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_registerInstance() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::ApplicationInstance, ::ApplicationInstanceMapping>(
          [this](::grpc::ServerContext* context,
                 const ::ApplicationInstance* request,
                 ::ApplicationInstanceMapping* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->registerInstance(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_registerInstance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_heartbeat() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::ApplicationInstanceHeartbeat, ::Downstream>(
          [this](::grpc::ServerContext* context,
                 const ::ApplicationInstanceHeartbeat* request,
                 ::Downstream* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->heartbeat(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_registerInstance<ExperimentalWithCallbackMethod_heartbeat<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_registerInstance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_registerInstance() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_registerInstance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_heartbeat() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_registerInstance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_registerInstance() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_registerInstance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestregisterInstance(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_heartbeat() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestheartbeat(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_registerInstance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_registerInstance() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->registerInstance(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_registerInstance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void registerInstance(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_heartbeat() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->heartbeat(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void heartbeat(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_registerInstance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_registerInstance() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ApplicationInstance, ::ApplicationInstanceMapping>(std::bind(&WithStreamedUnaryMethod_registerInstance<BaseClass>::StreamedregisterInstance, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_registerInstance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status registerInstance(::grpc::ServerContext* context, const ::ApplicationInstance* request, ::ApplicationInstanceMapping* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedregisterInstance(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ApplicationInstance,::ApplicationInstanceMapping>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_heartbeat() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ApplicationInstanceHeartbeat, ::Downstream>(std::bind(&WithStreamedUnaryMethod_heartbeat<BaseClass>::Streamedheartbeat, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status heartbeat(::grpc::ServerContext* context, const ::ApplicationInstanceHeartbeat* request, ::Downstream* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedheartbeat(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ApplicationInstanceHeartbeat,::Downstream>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_registerInstance<WithStreamedUnaryMethod_heartbeat<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_registerInstance<WithStreamedUnaryMethod_heartbeat<Service > > StreamedService;
};

// discovery service for ServiceName by Network address or application code
class ServiceNameDiscoveryService final {
 public:
  static constexpr char const* service_full_name() {
    return "ServiceNameDiscoveryService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status discovery(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::ServiceNameMappingCollection* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ServiceNameMappingCollection>> Asyncdiscovery(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ServiceNameMappingCollection>>(AsyncdiscoveryRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ServiceNameMappingCollection>> PrepareAsyncdiscovery(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ServiceNameMappingCollection>>(PrepareAsyncdiscoveryRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void discovery(::grpc::ClientContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response, std::function<void(::grpc::Status)>) = 0;
      virtual void discovery(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ServiceNameMappingCollection* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ServiceNameMappingCollection>* AsyncdiscoveryRaw(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ServiceNameMappingCollection>* PrepareAsyncdiscoveryRaw(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status discovery(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::ServiceNameMappingCollection* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ServiceNameMappingCollection>> Asyncdiscovery(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ServiceNameMappingCollection>>(AsyncdiscoveryRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ServiceNameMappingCollection>> PrepareAsyncdiscovery(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ServiceNameMappingCollection>>(PrepareAsyncdiscoveryRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void discovery(::grpc::ClientContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response, std::function<void(::grpc::Status)>) override;
      void discovery(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ServiceNameMappingCollection* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::ServiceNameMappingCollection>* AsyncdiscoveryRaw(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ServiceNameMappingCollection>* PrepareAsyncdiscoveryRaw(::grpc::ClientContext* context, const ::ServiceNameCollection& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_discovery_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_discovery : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_discovery() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_discovery() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdiscovery(::grpc::ServerContext* context, ::ServiceNameCollection* request, ::grpc::ServerAsyncResponseWriter< ::ServiceNameMappingCollection>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_discovery<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_discovery : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_discovery() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::ServiceNameCollection, ::ServiceNameMappingCollection>(
          [this](::grpc::ServerContext* context,
                 const ::ServiceNameCollection* request,
                 ::ServiceNameMappingCollection* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->discovery(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_discovery() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_discovery<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_discovery : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_discovery() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_discovery() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_discovery : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_discovery() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_discovery() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestdiscovery(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_discovery : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_discovery() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->discovery(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_discovery() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void discovery(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_discovery : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_discovery() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ServiceNameCollection, ::ServiceNameMappingCollection>(std::bind(&WithStreamedUnaryMethod_discovery<BaseClass>::Streameddiscovery, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_discovery() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status discovery(::grpc::ServerContext* context, const ::ServiceNameCollection* request, ::ServiceNameMappingCollection* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streameddiscovery(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ServiceNameCollection,::ServiceNameMappingCollection>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_discovery<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_discovery<Service > StreamedService;
};


#endif  // GRPC_language_2dagent_2fDiscoveryService_2eproto__INCLUDED
