/*************************************************************************
 File Name: SegmentRef.h
 Created Time: Wed 04 Dec 2019 09:20:07 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef SEGMENTREF_H__
#define SEGMENTREF_H__
#include<iostream>
#include<string>
#include "language-agent-v2/trace.pb.h"
#include "common/trace-common.pb.h"
#include "ContextCarrier.h"
#include "ContextSnapshot.h"
#include "ID.h"
#include "GlobalShareValue.h"
using namespace std;
class SegmentRef {
    private:
		RefType type;
		
		string traceSegmentId;
		
		int spanId;
		
		int peerId;
		
		string peerHost;

		int entryServiceInstanceId;

		int parentServiceInstanceId;

		string entryEndpointName;

		int entryEndpointId;

		string parentEndpointName;

		int parentEndpointId;

  
    public:
		SegmentRef(ContextCarrier &carrier);

		SegmentRef(ContextSnapshot &snapshot);

		string getEntryEndpointName();

		int getEntryEndpointId();

		int getEntryServiceInstanceId();

		void transform(SegmentReference& ref);

		void initEnv();

};
#endif //SEGMENTREF_H__
