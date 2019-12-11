/*************************************************************************
 File Name: ContextCarrier.h
 Created Time: Thu 05 Dec 2019 05:41:57 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "ContextCarrier.h"
#include "ID.h"

ContextCarrier::ContextCarrier() {
	spanId = -1;
	parentServiceInstanceId = 0;
	entryServiceInstanceId = 0;
	peerHost = ""; 
	entryEndpointName = "";
	parentEndpointName = "";
	primaryDistributedTraceId = "";
	traceSegmentId = "";
	headKey = "sw6";
	headValue = "";
}


string ContextCarrier::serialize() {
	if (this->isValid()) {
		string s = "";
		s += "1-";
		s += Base64::base64_encode((unsigned char const*)this->getDistributedTraceId().c_str(),this->getDistributedTraceId().length());
		s += "-";
		s += Base64::base64_encode((unsigned char const*)this->getTraceSegmentId().c_str(),this->getTraceSegmentId().length());
		s += "-";
		s += to_string(this->getSpanId());
		s += "-";
		s += to_string(this->getParentServiceInstanceId());
		s += "-";
		s += to_string(this->getEntryServiceInstanceId());
		s += "-";
		s += Base64::base64_encode((unsigned char const*)this->getPeerHost().c_str(),this->getPeerHost().length());
		s += "-";
		s += Base64::base64_encode((unsigned char const*)this->getEntryEndpointName().c_str(),this->getEntryEndpointName().length());
		s += "-";
		s += Base64::base64_encode((unsigned char const*)this->getParentEndpointName().c_str(),this->getParentEndpointName().length());
		return s;

	} else {
		return "";
	}
}

ContextCarrier* ContextCarrier::deserialize(string text) {
	if (text != "") {
		vector<string> parts = Tools::split(text,'-', 9);
		if (parts.size() == 9) {
			this->primaryDistributedTraceId = Base64::base64_decode(parts[1]);
			this->traceSegmentId = Base64::base64_decode(parts[2]);
			this->spanId = stoi(parts[3]);
			this->parentServiceInstanceId = stoi(parts[4]);
			this->entryServiceInstanceId = stoi(parts[5]);
			this->peerHost = Base64::base64_decode(parts[6]);
			this->entryEndpointName = Base64::base64_decode(parts[7]);
			this->parentEndpointName = Base64::base64_decode(parts[8]);
		}
	} else {
		cout << "input string is empty" << endl;
		return nullptr;
	}
	return this;
}

bool ContextCarrier::isValid() {
	cout << "traceSegmentId:" << traceSegmentId << endl;
	cout << "ID isValid :" << ID(traceSegmentId).isValid() << endl;
	cout << "SpanId:" << getSpanId() << endl;
	cout << "parentServiceInstanceId:" << parentServiceInstanceId << endl;
	cout << "entryServiceInstanceId:" << entryServiceInstanceId << endl;
	cout << "peerHost:" << peerHost<< endl;
	cout << "primaryDistributedTraceId:" << primaryDistributedTraceId << endl;
	return traceSegmentId != ""
		&& ID(traceSegmentId).isValid()
		&& getSpanId() > -1
		&& parentServiceInstanceId != 0
		&& entryServiceInstanceId != 0
		&& peerHost != ""
		&& primaryDistributedTraceId != "";
}

string ContextCarrier::getEntryEndpointName() {
	return entryEndpointName;
}

void ContextCarrier::setEntryEndpointName(string entryEndpointName) {
	this->entryEndpointName = '#' + entryEndpointName;
}

void ContextCarrier::setEntryEndpointId(int entryOperationId) {
	this->entryEndpointName = to_string(entryOperationId);
}

void ContextCarrier::setParentEndpointName(string parentEndpointName) {
	this->parentEndpointName = '#' + parentEndpointName;
}

void ContextCarrier::setParentEndpointId(int parentOperationId) {
	this->parentEndpointName = to_string(parentOperationId);
}

string ContextCarrier::getTraceSegmentId() {
	return traceSegmentId;
}

int ContextCarrier::getSpanId() {
	return spanId;
}

void ContextCarrier::setTraceSegmentId(string traceSegmentId) {
	this->traceSegmentId = traceSegmentId;
}

void ContextCarrier::setSpanId(int spanId) {
	this->spanId = spanId;
}

int ContextCarrier::getParentServiceInstanceId() {
	return parentServiceInstanceId;
}

void ContextCarrier::setParentServiceInstanceId(int parentServiceInstanceId) {
	this->parentServiceInstanceId = parentServiceInstanceId;
}

string ContextCarrier::getPeerHost() {
	return peerHost;
}

void ContextCarrier::setPeerHost(string peerHost) {
	this->peerHost = '#' + peerHost;
}

void ContextCarrier::setPeerId(int peerId) {
	this->peerHost = to_string(peerId);
}

string ContextCarrier::getDistributedTraceId() {
	return primaryDistributedTraceId;
}

void ContextCarrier::setDistributedTraceId(string &traceId){
	this->primaryDistributedTraceId = traceId;
}


string ContextCarrier::getParentEndpointName() {
	return parentEndpointName;
}

int ContextCarrier::getEntryServiceInstanceId() {
	return entryServiceInstanceId;
}

void ContextCarrier::setEntryServiceInstanceId(int entryServiceInstanceId) {
	this->entryServiceInstanceId = entryServiceInstanceId;
}

void ContextCarrier::setHeadValue(string value){
	deserialize(value);
}

string ContextCarrier::getHeadKey(){
	return headKey;
}

string ContextCarrier::getHeadValue(){
	return serialize();
}

string ContextCarrier::toString(){

	string s = "";
	s += this->primaryDistributedTraceId + " ";
	s += this->traceSegmentId + " ";
	s += to_string(this->spanId) + " ";
	s += to_string(this->parentServiceInstanceId) + " ";
	s += to_string(this->entryServiceInstanceId) + " ";
	s += this->peerHost + " ";
	s += this->entryEndpointName + " ";
	s += this->parentEndpointName + " ";
	return s;

}
