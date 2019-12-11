#include <iostream>
#include<chrono>
#include<thread>
#include<string>
#include<vector>
#include<stdlib.h>
#include "server.h"
#include "client.h"
#include "ServiceAndEndpointRegisterClient.h"
#include "TraceSegmentServiceClient.h"
#include "GRPCChannel.h"
#include "Timer.h"
#include "GlobalShareValue.h"
#include "Tools.h"
#include "GlobalIdGenerator.h"
#include "ContextManager.h"
using namespace std;
using namespace std;


void RunServer(std::string &server_address,string peerIp,int flag) { //flag :0 server;1 server&client; 2 client
	DemoServer service;
	if(flag == 1){
		service.setChannel(peerIp);
		service.setIsClient(true);
	}

	ServerBuilder builder;
	// Listen on the given address without any authentication mechanism.
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	// Register "service" as the instance through which we'll communicate with
	// clients. In this case it corresponds to an *synchronous* service.
	builder.RegisterService(&service);
	// Finally assemble the server.
	std::unique_ptr<Server> server(builder.BuildAndStart());
	std::cout << "Server listening on " << server_address << std::endl;

	// Wait for the server to shutdown. Note that some other thread must be
	// responsible for shutting down the server for this call to ever return.
	server->Wait();
}


int main(int argc, char** argv) {
	cout << "参数个数:"<< argc << endl;
	if(argc < 3){
		cout << "启动参数不对..."<<endl;
		exit(-1);
	}
	GlobalShareValue &config = GlobalShareValue::getConfig();
	config.setArgs(argv,argc);


	GRPCChannel *grpcChannel = new GRPCChannel(config.getChannel());
	shared_ptr<Channel> channel = grpcChannel->getChannel(); 
	ServiceAndEndpointRegisterClient client(channel);

	Timer t;

	// 设置15秒，第一次注册实例时会出现不返回实例id的情况 
	t.StartTimer(3000, std::bind(&ServiceAndEndpointRegisterClient::run,&client));

	TraceSegmentServiceClient client1(channel);
	Timer t1;
	t1.StartTimer(3000, std::bind(&TraceSegmentServiceClient::run,&client1)); 

	std::this_thread::sleep_for(std::chrono::seconds(10));


	string appType = *(argv+1);
	string serverAddress = *(argv+2);
	//	int appFlag = -1; //flag :0 server;1 server&client; 2 client

	cout << argc << "," << appType << "," <<serverAddress<<endl;
	if(appType == "0"){
		RunServer(serverAddress,"",0);
	} else if( appType == "1"){
		string peerIp =  *(argv+3);
		RunServer(serverAddress,peerIp,1);
	} else if( appType == "2"){
		Status staus;
		DemoClient client(serverAddress);
		while(true){
			if(ContextManager::isActive()){
				ContextManager::contextClear();
			}
			ContextCarrier carrier;
			Span &span = ContextManager::createExitSpan("/projecA/exit",carrier,serverAddress);
			span.setSpanLayer(SpanLayer::RPCFramework);
			span.setComponent("GRPC");
			span.addTag("k1","v1");
			span.addTag("k2","v2");
			span.addLog("lk1","this is test");
			span.addLog("lk2","this is test");
			TestMessage msg;
			msg.set_key(carrier.getHeadKey());
			msg.set_value(carrier.getHeadValue());
			client.collect(msg,staus);
			span.setError(false);
			if(!staus.ok()) {
				span.setError(true);
				span.addLog("error","respons status is error.");
			}
			span.finish();
			ContextManager::stopSpan();
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
	}

	return 0;
}

