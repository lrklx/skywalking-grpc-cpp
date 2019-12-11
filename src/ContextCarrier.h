/*************************************************************************
  File Name: ContextCarrier.h
  Created Time: Thu 05 Dec 2019 05:41:57 PM CST
Author: LiYanYan
Description: 
 ************************************************************************/
#ifndef CONTEXTCARRIER_H__
#define CONTEXTCARRIER_H__
#include<iostream>
#include<string>
#include "Base64.h"
using namespace std;
class ContextCarrier {
	private:
		string  traceSegmentId;
		int spanId;
		int parentServiceInstanceId;
		int entryServiceInstanceId;
		string peerHost; // ip:port
		string entryEndpointName;
		string parentEndpointName;
		string primaryDistributedTraceId;
		string headKey;
		string headValue;

	public:
		ContextCarrier();
		string serialize() ;
		ContextCarrier *deserialize(string text) ;
		bool isValid() ;
		string getEntryEndpointName() ;
		void setEntryEndpointName(string entryEndpointName) ;
		void setEntryEndpointId(int entryOperationId) ;
		void setParentEndpointName(string parentEndpointName) ;
		void setParentEndpointId(int parentOperationId) ;
		string getTraceSegmentId() ;
		int getSpanId() ;
		void setTraceSegmentId(string traceSegmentId) ;
		void setSpanId(int spanId) ;
		int getParentServiceInstanceId() ;
		void setParentServiceInstanceId(int parentServiceInstanceId) ;
		string getPeerHost() ;
		void setPeerHost(string peerHost) ;
		void setPeerId(int peerId) ;
		string getDistributedTraceId() ;
		void setDistributedTraceId(string &traceId);
		string getParentEndpointName() ;
		int getEntryServiceInstanceId() ;
		void setEntryServiceInstanceId(int entryServiceInstanceId) ;
		void setHeadValue(string value);
		string getHeadValue();
		string getHeadKey();
		string toString();

};
#endif //CONTEXTCARRIER_H__
