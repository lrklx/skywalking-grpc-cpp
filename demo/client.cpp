#include "client.h"

DemoClient::DemoClient(string ip){
	stub_ = TestRPC::NewStub(grpc::CreateChannel(ip, grpc::InsecureChannelCredentials()));
}

DemoClient::DemoClient(){
}

void DemoClient::setChannel(string ip){
	stub_ = TestRPC::NewStub(grpc::CreateChannel(ip, grpc::InsecureChannelCredentials()));
}

TestMessage DemoClient::collect(TestMessage &msg,Status &status) {
	TestMessage request;
	request.set_key(msg.key());
	request.set_value(msg.value());

	TestMessage reply;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;

	// The actual RPC.
	status = stub_->collect(&context, request, &reply);

	// Act upon its status.
	if (status.ok()) {
		cout << "response:" << reply.key() << ":" << reply.value() << endl;
	} else {
		std::cout << status.error_code() << ": " << status.error_message()
			<< std::endl;
	}
	return reply;
}

