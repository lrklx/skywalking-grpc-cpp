#include "TracingContext.h"
#include "GlobalIdGenerator.h"
#include "TraceSegmentServiceClient.h"

TracingContext::TracingContext() {
	relatedGlobalTraceId = GlobalIdGenerator::generate();
	segmentId = GlobalIdGenerator::generate();
	segment.push_back(SegmentObject());
	UniqueId &uniqueId = *(this->segment[0].mutable_tracesegmentid());
	ID(segmentId).transform(uniqueId);
	spanIdGenerator = 0;
	createTime = Tools::currentTimeMillis();
}

TracingContext::~TracingContext() {
	relatedGlobalTraceId = "";
	segmentId = "";
	spanIdGenerator = 0;
	createTime = 0;
	refs.clear();
	segment.clear();
	activeSpanStack.clear();
	
}

void TracingContext::contextClear(){
	refs.clear();
	segment.clear();
	activeSpanStack.clear();
	relatedGlobalTraceId = GlobalIdGenerator::generate(); //产生新的一个segment
	segmentId = GlobalIdGenerator::generate();
	segment.push_back(SegmentObject());
	UniqueId &uniqueId = *(this->segment[0].mutable_tracesegmentid());
	ID(segmentId).transform(uniqueId);
	spanIdGenerator = 0;
	createTime = Tools::currentTimeMillis();
}

bool TracingContext::isActive(){
	if(activeSpanStack.size() > 0){
		return true;
	}
	return false;
}
		
Span* TracingContext::activeSpan(){
	Span* p =  lastSpan();
	if(p == nullptr){
		cout<< "No active span." << endl;
	} 
	return p;
}

Span* TracingContext::lastSpan(){
	if(activeSpanStack.size() <= 0){
		cout << "has no span." << endl;
		return nullptr;
	}
	return &activeSpanStack[activeSpanStack.size()-1];
}

Span* TracingContext::headSpan(){
	if(activeSpanStack.size() <= 0){
		cout << "has no span." << endl;
		return nullptr;
	}
	return &activeSpanStack[0];
}

void TracingContext::inject(ContextCarrier &carrier) {
	
	Span *pActiveSpan = activeSpan();
	Span *pFirstSpan = headSpan();
	
	if( nullptr == pActiveSpan || nullptr == pFirstSpan) return ;
	SpanObjectV2 &span = pActiveSpan->getSpanV2();
	SpanObjectV2 &firstSpan = pFirstSpan->getSpanV2();
	
	if (span.spantype() != SpanType::Exit ){
		cout << "Inject can be done only in Exit Span" << endl;
		return ;
	}
	
	string peer = span.peer();
	int peerId = span.peerid();
	carrier.setTraceSegmentId(segmentId);
	carrier.setSpanId(span.spanid());

	GlobalShareValue& config = GlobalShareValue::getConfig();
	carrier.setParentServiceInstanceId(config.getInstanceId());

	if (peerId == 0) {
		carrier.setPeerHost(peer);
	} else {
		carrier.setPeerId(peerId);
	}
	
	int operationId;
	string operationName;
	int entryApplicationInstanceId;
	if (refs.size() > 0) {
		SegmentRef &ref =refs[0];
		operationId = ref.getEntryEndpointId();
		operationName = ref.getEntryEndpointName();
		entryApplicationInstanceId = ref.getEntryServiceInstanceId();
	} else {
		operationId = firstSpan.operationnameid();
		operationName = firstSpan.operationname();
		entryApplicationInstanceId = config.getInstanceId();
	}
	
	carrier.setEntryServiceInstanceId(entryApplicationInstanceId);

	if (operationId == 0 && operationName != "") {
		carrier.setEntryEndpointName(operationName);
	} else {
		carrier.setEntryEndpointId(operationId);
	}

	int parentOperationId = firstSpan.operationnameid();
	if (parentOperationId == 0){
		carrier.setParentEndpointName(firstSpan.operationname());
	} else {
		carrier.setParentEndpointId(parentOperationId);
	}

	cout << "carrier set before :" << relatedGlobalTraceId << endl;
	carrier.setDistributedTraceId(relatedGlobalTraceId);
	cout << "carrier set before :" << carrier.getDistributedTraceId() << endl;
}

void TracingContext::extract(ContextCarrier &carrier) {
	cout << "extract start ..." << endl;
	this->refs.push_back(SegmentRef(carrier));
	SegmentRef &ref = this->refs[0];
	cout << "relatedGlobalTraceId :" << carrier.getDistributedTraceId() << endl;
	relatedGlobalTraceId = carrier.getDistributedTraceId();
	Span *span = this->activeSpan();
	if (span != nullptr && ((span->getSpanV2()).spantype() == SpanType::Entry)){
		this->addRef(span->getSpanV2(),ref);
	}
}

void TracingContext::addRef(SpanObjectV2 &span,SegmentRef &ref){
		SegmentReference *pRef = span.add_refs();
		ref.transform(*pRef);
}


ContextSnapshot TracingContext::capture() {
	GlobalShareValue& config = GlobalShareValue::getConfig();
	Span *pActiveSpan = activeSpan();
	Span *pFirstSpan = headSpan();
	if(pActiveSpan == nullptr || pFirstSpan == nullptr) {
		throw "has no span,Can't get snapshot";
	}				
	ContextSnapshot snapshot(segmentId,pActiveSpan->getSpanV2().spanid(),relatedGlobalTraceId);
	int entryOperationId;
	string entryOperationName;
	int entryApplicationInstanceId;
	SpanObjectV2 &firstSpan =  pFirstSpan->getSpanV2();
	if (refs.size() > 0) {
		SegmentRef &ref = refs[0];
		entryOperationId = ref.getEntryEndpointId();
		entryOperationName = ref.getEntryEndpointName();
		entryApplicationInstanceId = ref.getEntryServiceInstanceId();
	} else {
		entryOperationId = firstSpan.operationnameid();
		entryOperationName =  firstSpan.operationname();
		entryApplicationInstanceId =  config.getInstanceId();
	}
	snapshot.setEntryApplicationInstanceId(entryApplicationInstanceId);

	if (entryOperationId == 0 && entryOperationName != "") {
		snapshot.setEntryOperationName(entryOperationName);	
	} else {
		snapshot.setEntryOperationId(entryOperationId);
	}

	if (firstSpan.operationnameid() == 0) {
		snapshot.setParentOperationName(firstSpan.operationname());
	} else {
		snapshot.setParentOperationId(firstSpan.operationnameid());
	}
	return snapshot;
}

void TracingContext::continued(ContextSnapshot &snapshot) {
	this->refs.push_back(SegmentRef(snapshot));
	if(this->activeSpan() == nullptr) return ;
	this->addRef(this->activeSpan()->getSpanV2(),this->refs[0]);
	this->relatedGlobalTraceId = snapshot.getDistributedTraceId();
}

string TracingContext::getGlobalTraceId() {
	return relatedGlobalTraceId;
}


Span& TracingContext::createEntrySpan(string operationName) {
	GlobalShareValue& config = GlobalShareValue::getConfig();
	Span *pParentSpan = lastSpan();
	int parentSpanId = (pParentSpan == nullptr) ? -1 : pParentSpan->getSpanV2().spanid();
	
	vector<pair<string, string>> endpoint;
	endpoint.push_back(make_pair(GlobalShareValue::SERVICE_ID_KEY,to_string(config.getServiceId())));
	endpoint.push_back(make_pair(GlobalShareValue::ENDPOINT_NAME_KEY,operationName));
	endpoint.push_back(make_pair(GlobalShareValue::IS_ENTRY_KEY,"0"));
	endpoint.push_back(make_pair(GlobalShareValue::IS_EXIT_KEY,"0"));
	int operationId = config.findEndpoint(endpoint);
	
	if (pParentSpan != nullptr && (pParentSpan->getSpanV2().spantype() == SpanType::Entry)) {
		if(operationId == -1){
			pParentSpan->getSpanV2().set_operationname(operationName);
		} else{
			pParentSpan->getSpanV2().set_operationnameid(operationId);
		}
		pParentSpan->getSpanV2().set_starttime(Tools::currentTimeMillis());
		return *pParentSpan;
	} else {
		createSpan(spanIdGenerator++, parentSpanId, SpanType::Entry);
		Span &newSpan = activeSpanStack.back();
		if(operationId == -1){
			newSpan.getSpanV2().set_operationname(operationName);
		} else{
			newSpan.getSpanV2().set_operationnameid(operationId);
		}
		return newSpan;
	}
}

Span& TracingContext::createLocalSpan(string operationName) {
	Span *pParentSpan = lastSpan();
	int parentSpanId = (pParentSpan == nullptr) ? -1 : pParentSpan->getSpanV2().spanid();
	cout <<"parentSpanId :" << parentSpanId << endl;
    createSpan(spanIdGenerator++, parentSpanId, SpanType::Local);
    activeSpanStack.back().getSpanV2().set_operationname(operationName);
	return activeSpanStack.back();
}


void TracingContext::createSpan(int spanId,int parentSpanId,SpanType type){
	activeSpanStack.push_back(Span());
	SpanObjectV2 &span = activeSpanStack.back().getSpanV2();
	cout << "+++++++++++create span 地址:" << &span << endl;
	span.set_spanid(spanId);
	span.set_parentspanid(parentSpanId);
	span.set_starttime(Tools::currentTimeMillis());
	
	// pSpan->set_endtime(Tools::currentTimeMillis()); set when stop
	// ref set after
	// operationNameId set after
	// operationName set after
	// peerId 
	// peer
	
	span.set_spantype(type);
	/*pSpan->set_spanlayer(SpanLayer::Http);
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
	kv->set_value("test stack");*/
	
	
}

Span& TracingContext::createExitSpan(string operationName, string remotePeer) {
	
	GlobalShareValue& config = GlobalShareValue::getConfig();
	Span *pParentSpan = lastSpan();

	if (pParentSpan != nullptr && (pParentSpan->getSpanV2().spantype() == SpanType::Exit)) {
		pParentSpan->getSpanV2().set_starttime(Tools::currentTimeMillis());
		return *pParentSpan;
	} else {
		int parentSpanId = (pParentSpan == nullptr) ? -1 : pParentSpan->getSpanV2().spanid();
		int peerId = config.find(remotePeer);
		
		vector< pair<string, string> > endpoint;
		endpoint.push_back(make_pair(GlobalShareValue::SERVICE_ID_KEY,to_string(config.getServiceId())));
		endpoint.push_back(make_pair(GlobalShareValue::ENDPOINT_NAME_KEY,operationName));
		endpoint.push_back(make_pair(GlobalShareValue::IS_ENTRY_KEY,"0"));
		endpoint.push_back(make_pair(GlobalShareValue::IS_EXIT_KEY,"0"));

		cout << "peerId:"<< peerId<<endl;
		int operationId = config.findEndpoint(endpoint);
		createSpan(spanIdGenerator++, parentSpanId, SpanType::Exit);
		SpanObjectV2 &newSpan = activeSpanStack.back().getSpanV2();
		
		if(peerId != 0 && operationId != -1){
			newSpan.set_operationnameid(operationId);
			newSpan.set_peerid(peerId);
		} else if(peerId != 0 && operationId == -1){
			newSpan.set_operationname(operationName);
			newSpan.set_peerid(peerId);
		} else if(peerId == 0 && operationId != -1){
			newSpan.set_operationnameid(operationId);
			newSpan.set_peer(remotePeer);
		} else if(peerId == 0 && operationId == -1){
			newSpan.set_operationname(operationName);
			newSpan.set_peer(remotePeer);
		}
		return activeSpanStack.back();
	}
	
}

		
bool TracingContext::stopSpan(Span &span) {
	cout << "stop Span start" << endl;
	Span *tailSpan = lastSpan();
	cout << "---------tailSpan 地址:" << &(tailSpan->getSpanV2()) <<endl;
	cout << "---------input span 地址："<< &(span.getSpanV2()) << endl;
	cout << "---------tail span id:" << tailSpan->getSpanV2().spanid() << endl;
	cout << "---------input span id:" << span.getSpanV2().spanid() << endl;
	cout << "---------tail pspan id:" << tailSpan->getSpanV2().parentspanid() << endl;
	cout << "---------input pspan id:" << span.getSpanV2().parentspanid() << endl;
	cout << "---------span type:" << span.getSpanV2().spantype() << endl;
	SpanObjectV2 test;
	test = tailSpan->getSpanV2();
	cout << "---------ref_size:" << test.refs_size() << endl;

	bool eq = spanCmp(tailSpan->getSpanV2(),span.getSpanV2());
	cout << "---------cmp eq:" << eq << endl;
	if ((nullptr != tailSpan) && eq) {
		cout << "stop Span in" << endl;
		//TODO： 将span加入到segment，并移除spanlist中的数据
		SegmentObject &traceSegment = this->segment[0];
		SpanObjectV2 &innderSpan = *(traceSegment.add_spans());
		//span.getSpanV2().set_endtime(Tools::currentTimeMillis());
		cout << "赋值前。。。"<< endl;
		innderSpan = span.getSpanV2(); // 调用重载的赋值运算符
		cout << "赋值后。。。"<< endl;
		activeSpanStack.pop_back();
	} else{
		// 停止的span不合规则。do nothing
	}
	finish();
	return activeSpanStack.empty();

}

bool TracingContext::spanCmp(SpanObjectV2 &first,SpanObjectV2 &second){
	cout << "first:" << first.spanid() << ",secode:" << second.spanid() << endl;
	cout << "first:" << first.parentspanid() << ",secode:" << second.parentspanid() << endl;
	cout << "first:" << first.starttime() << ",secode:" << second.starttime() << endl;
	cout << "first:" << first.spantype() << ",secode:" << second.spantype() << endl;
	cout << "first:" << first.operationname() << ",secode:" << second.operationname() << endl;
	cout << "first:" << first.operationnameid() << ",secode:" << second.operationnameid() << endl;
	cout << "first:" << first.refs_size() << ",secode:" << second.refs_size() << endl;

	if(first.spanid() == second.spanid() && first.parentspanid() == second.parentspanid() 
			&& first.starttime() == second.starttime() && first.spantype() == second.spantype()
			&& first.operationname() == second.operationname() && first.operationnameid() == second.operationnameid()	
			&& first.refs_size() == second.refs_size()){
		return true;
	} else {
		return false;
	}
}


void TracingContext::finish() {

	cout << "finish start" << endl;
	GlobalShareValue &config = GlobalShareValue::getConfig();
	cout <<"TracingContext config:" << &config << endl;
	cout << "activeSpanStack size:" << activeSpanStack.size() << endl;
	if (activeSpanStack.empty() && (this->createTime > config.getInstanceRegisterTime())) {
		cout << "finish in " << endl;
		// put segment into segmentList
		SegmentObject &traceSegment = segment[0];
		vector<UpstreamSegment>& vec = config.getSegmentList();
		UpstreamSegment stream;
		UniqueId* pTraceId = stream.add_globaltraceids();
		ID(relatedGlobalTraceId).transform(*pTraceId);
		traceSegment.set_serviceid(config.getServiceId());
		traceSegment.set_serviceinstanceid(config.getInstanceId());
		traceSegment.set_issizelimited(false);
		string segmentStr; 
		traceSegment.SerializeToString(&segmentStr);
		stream.set_segment(segmentStr);
		vec.push_back(stream);
		//cout << "segmentStr :" << segmentStr << endl;
		contextClear();
		cout <<"clear finish" << endl;
	}
} 

