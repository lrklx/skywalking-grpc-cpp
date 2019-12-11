#ifndef DEMOCLIENT_H__
#define DEMOCLIENT_H__
#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "Demo.pb.h"
#include "Demo.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using namespace std;

class DemoClient{
	public:
		DemoClient(string ip);
		DemoClient();
		void setChannel(string ip);
		TestMessage collect(TestMessage &msg,Status &staus);
	private:
		std::unique_ptr<TestRPC::Stub> stub_;
};
#endif //DEMOCLIENT_H__
