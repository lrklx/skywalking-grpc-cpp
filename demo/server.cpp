#include "server.h"
#include "ServiceAndEndpointRegisterClient.h"
#include "TraceSegmentServiceClient.h"
#include "GRPCChannel.h"
#include "Timer.h"
#include "GlobalShareValue.h"
#include "Tools.h"
#include "GlobalIdGenerator.h"
#include "ContextManager.h"
Status DemoServer::collect(ServerContext* context, const TestMessage* request, TestMessage* response) {
	std::cout << "client string:" <<  request->key() << std::endl;
	std::cout << "client string:" <<  request->value() << std::endl;
	ContextCarrier carrier;
	carrier.setHeadValue(request->value());
	ContextManager::contextClear();
	string enpoint = "/projectC/entry";
	if(isClient) enpoint = "/projectB/entry" ;
	Span &span = ContextManager::createEntrySpan(enpoint,carrier);
	span.setSpanLayer(SpanLayer::RPCFramework);
	span.setComponent("GRPC");
	span.addTag("k1","v1");
	span.addTag("k2","v2");
	span.addLog("lk1","this is test");
	span.addLog("lk2","this is test");
	if(isServer && !isClient){
		response->set_key(request->key());
		response->set_value(request->value());
	    span.setError(false);
	    span.finish();
	    ContextManager::stopSpan();
		return Status::OK;
	} else if(isServer && isClient){
		TestMessage midreq;
		Status status;
	    ContextSnapshot snapshot = ContextManager::capture();
		span.setError(false);
	    //span.finish();
	    //ContextManager::stopSpan();

		ContextCarrier carrier1;
		//ContextManager::contextClear();
		Span &span1 = ContextManager::createExitSpan("/projectB/exit",peerIp);
		ContextManager::continued(snapshot);
		ContextManager::inject(carrier1);
		span1.setSpanLayer(SpanLayer::RPCFramework);
		span1.setComponent("GRPC");
		span1.addTag("k1","v1");
		span1.addTag("k2","v2");
		span1.addLog("lk1","this is test");
		span1.addLog("lk2","this is test");
		midreq.set_key(carrier1.getHeadKey());
		midreq.set_value(carrier1.getHeadValue());
		TestMessage midres = p_client->collect(midreq,status);
		span1.setError(false);
		if(!status.ok()) {
			span1.setError(true);
			span.setError(true);
			span1.addLog("error","respons status is error.");
			span.addLog("error","respons status is error.");
		}
		response->set_key(midres.key());
		response->set_value(midres.value());
		span1.finish();
		span.finish();
		ContextManager::stopSpan();
		return status;
	}
	return Status::OK;
}

DemoServer::DemoServer(){
	isClient = false; 
	isServer = true;
	peerIp = "";
	p_client = nullptr;
}


void DemoServer::setIsClient(bool client){
	isClient = client;
}

void DemoServer::setIsServer(bool server){
	isServer = server;
}

void DemoServer::setChannel(string channel){
	peerIp = channel;
	p_client = new DemoClient(channel);
}

DemoServer::~ DemoServer(){
	if(p_client != nullptr){
		delete p_client;
	}
}
