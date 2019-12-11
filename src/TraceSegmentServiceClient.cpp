/*************************************************************************
  File Name: TraceSegmentServiceClient.cpp
  Created Time: Tue 26 Nov 2019 11:09:06 AM CST
Author: LiYanYan
Description: 
 ************************************************************************/

#include "TraceSegmentServiceClient.h"
#include "GlobalIdGenerator.h"
#include "Tools.h"
#define MAX_SENDER_SIZE 0
TraceSegmentServiceClient::TraceSegmentServiceClient(shared_ptr<Channel> channel)
	: stub_(TraceSegmentReportService::NewStub(channel)){
	p_config = &GlobalShareValue::getConfig();

}

UpstreamSegment TraceSegmentServiceClient::makeUpstreamSegment(){
	GlobalShareValue &config = GlobalShareValue::getConfig();
	string traceId = GlobalIdGenerator::generate();
	string segmentId = GlobalIdGenerator::generate();
	int serviceId = config.getServiceId();
	int instanceId = config.getInstanceId();
	UpstreamSegment stream;

	UniqueId* pTraceId = stream.add_globaltraceids();
	ID(traceId).transform(*pTraceId);

	SegmentObject traceSegment;
	UniqueId *pSegmentId = traceSegment.mutable_tracesegmentid();
	ID(segmentId).transform(*pSegmentId);
	
	SpanObjectV2 *pSpan = traceSegment.add_spans();
	pSpan->set_spanid(0);
	pSpan->set_parentspanid(-1);
	pSpan->set_starttime(Tools::currentTimeMillis());
	pSpan->set_endtime(Tools::currentTimeMillis()+20);
	// SegmentReference
	//-------------------------------
	// operationNameId
	pSpan->set_operationname("/test/C++");
	// peerId
	pSpan->set_peer("127.0.0.1:1234");
	pSpan->set_spantype(SpanType::Exit);
	pSpan->set_spanlayer(SpanLayer::Http);
	pSpan->set_componentid(12);
	pSpan->set_component("OKHttp");
	pSpan->set_iserror(true);
	KeyStringValuePair* kv  = pSpan->add_tags();

	kv->set_key("k1");
	kv->set_value("v1");
	kv  = pSpan->add_tags();
	kv->set_key("k2");
	kv->set_value("v2");
    Log* pLog = pSpan->add_logs();
	pLog->set_time(Tools::currentTimeMillis());
	kv = pLog->add_data();
	kv->set_key("event");
	kv->set_value("error");
	kv = pLog->add_data();
	kv->set_key("error.kind");
	kv->set_value("exception");
	kv = pLog->add_data();
	kv->set_key("message");
	kv->set_value("this test error");
	kv = pLog->add_data();
	kv->set_key("stack");
	kv->set_value("test stack");


	traceSegment.set_serviceid(serviceId);
	traceSegment.set_serviceinstanceid(instanceId);
	traceSegment.set_issizelimited(false);
	string segmentStr; 
	traceSegment.SerializeToString(&segmentStr);
	stream.set_segment(segmentStr);
	return stream;
}

bool TraceSegmentServiceClient::collect(std::vector<UpstreamSegment>& segments) {
	Commands res;
	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;
	context.set_deadline(Tools::deadline(30000));
	// The actual RPC.
	std::unique_ptr<grpc::ClientWriter<UpstreamSegment>> writer(stub_->collect(&context, &res));
	for (const auto& segment:segments) {
		if (!writer->Write(segment)) {
			break;
		}
	}
	writer->WritesDone();
	grpc::Status status = writer->Finish();
	// Act upon its status.
	if (status.ok()) {
		cout << "send segment ok." << endl;
		return true;
	} else {
		if(Tools::isNetworkError(status.error_code())) p_config->setConnected(false);
		throw  status.error_message() + ",code:" + std::to_string(status.error_code());
	}
	return false;
}

void TraceSegmentServiceClient::run(){
	cout << "TraceSegmentServiceClient::run=======" << endl;
	try {
		/*vector<UpstreamSegment>& vec = p_config->getSegmentList();
		vec.push_back(TraceSegmentServiceClient::makeUpstreamSegment());*/
		if (p_config->isConnected()){
			cout << "segment list size:" << p_config->getSegmentList().size() << endl;
			if((p_config->getSegmentList().size() > MAX_SENDER_SIZE) && collect(p_config->getSegmentList())){ 
				p_config->getSegmentList().clear();
			}
		} else {
			cout << "Don't send data to collector,the collecttor is not connected." << endl;
		}
	} catch(string s){
		cout << s << endl;
	}
}
/*
   int main(int argc, char** argv) {
// create channel
shared_ptr<Channel>	channel = grpc::CreateChannel("10.9.1.10:11800", grpc::InsecureChannelCredentials());
TraceSegmentServiceClient client(channel);
vector<UpstreamSegment> segmentList;
segmentList.push_back(TraceSegmentServiceClient::makeUpstreamSegment("8.123.15746769501234567","8.123.15746769501234568",2,2));
Commands res = client.collect(segmentList);

return 0;
}
*/
