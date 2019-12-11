/*************************************************************************
 File Name: GRPCChannel.h
 Created Time: Mon 02 Dec 2019 09:35:56 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/


#ifndef GRPCCHANNEL_H__
#define GRPCCHANNEL_H__
#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using namespace std;

class GRPCChannel{
	public:
		GRPCChannel(string host);
		// GRPCChannel();
		shared_ptr<Channel> getChannel();
	private:
		shared_ptr<Channel> m_channel;
};
#endif //GRPCCHANNEL_H__
