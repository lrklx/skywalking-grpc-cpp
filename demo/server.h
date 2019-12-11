#ifndef DEMOSERVER_H__
#define DEMOSERVER_H__
#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "Demo.pb.h"
#include "Demo.grpc.pb.h"
#include "client.h"
using namespace std;


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

class DemoServer final : public TestRPC::Service {
	public:
		DemoServer();
		~DemoServer();
		Status collect(ServerContext* context, const TestMessage* request, TestMessage* response);
		void setIsClient(bool client);
		void setIsServer(bool server);
		void setChannel(string channel);
	private:
		bool isClient;
		bool isServer;
		string peerIp;
		DemoClient *p_client;
};
#endif //DEMOSERVER_H__
