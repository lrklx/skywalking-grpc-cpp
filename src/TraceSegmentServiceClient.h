/*************************************************************************
  File Name: TraceSegmentServiceClient.cpp
  Created Time: Tue 26 Nov 2019 11:09:06 AM CST
Author: LiYanYan
Description: 
 ************************************************************************/

#ifndef TRACESEGMENTSERVICECLIENT_H__
#define TRACESEGMENTSERVICECLIENT_H__
#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <grpcpp/grpcpp.h>
#include "language-agent-v2/trace.grpc.pb.h"
#include "language-agent-v2/trace.pb.h"
#include "common/common.pb.h"
#include "Tools.h"
#include "ID.h"
#include "GlobalShareValue.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using namespace std;

class TraceSegmentServiceClient{
	public:
		TraceSegmentServiceClient(shared_ptr<Channel> channel);
		bool collect(std::vector<UpstreamSegment>& segment);
		static UpstreamSegment makeUpstreamSegment();
		void run();
	private:
		unique_ptr<TraceSegmentReportService::Stub> stub_;
		GlobalShareValue *p_config;
};

#endif //TRACESEGMENTSERVICECLIENT_H__
