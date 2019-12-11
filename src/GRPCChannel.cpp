/*************************************************************************
 File Name: GRPCChannel.cpp
 Created Time: Mon 02 Dec 2019 09:35:56 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/


#include "GRPCChannel.h"

GRPCChannel::GRPCChannel(string host){
	if (host.length() <= 0){
		cout << "grpc server is empty!" << endl;
	}
	m_channel = grpc::CreateChannel(host, grpc::InsecureChannelCredentials());
}

shared_ptr<Channel> GRPCChannel::getChannel(){
	return m_channel;
}

// GRPCChannel::GRPCChannel(){};


