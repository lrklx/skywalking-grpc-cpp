#include "SegmentRef.h"

void SegmentRef::initEnv(){
	traceSegmentId = "";
    spanId = -1;
    peerId = 0;
    peerHost = "";
    entryServiceInstanceId = 0;
    parentServiceInstanceId = 0;
    entryEndpointName = "";
    entryEndpointId = 0;
    parentEndpointName = "";
    parentEndpointId = 0;
}

SegmentRef::SegmentRef(ContextCarrier &carrier) {
	initEnv();
	type = RefType::CrossProcess;
	traceSegmentId = carrier.getTraceSegmentId();
	spanId = carrier.getSpanId();
	parentServiceInstanceId = carrier.getParentServiceInstanceId();
	entryServiceInstanceId = carrier.getEntryServiceInstanceId();
	string host = carrier.getPeerHost();
	if (host.at(0) == '#') {
		peerHost = host.substr(1);
	} else {
		peerId = stoi(host);
	}
	string entryOperationName = carrier.getEntryEndpointName();
	if (entryOperationName != "") {
		if (entryOperationName.at(0) == '#') {
			entryEndpointName = entryOperationName.substr(1);
		} else {
			entryEndpointId = stoi(entryOperationName);
		}
	}
	string parentOperationName = carrier.getParentEndpointName();
	if (parentOperationName != "") {
		if (parentOperationName.at(0) == '#') {
			parentEndpointName = parentOperationName.substr(1);
		} else {
			parentEndpointId = stoi(parentOperationName);
		}
	}
}

SegmentRef::SegmentRef(ContextSnapshot &snapshot) {
	initEnv();
	type = RefType::CrossThread;
	traceSegmentId = snapshot.getTraceSegmentId();
	spanId = snapshot.getSpanId();
	parentServiceInstanceId = GlobalShareValue::getConfig().getInstanceId();
	entryServiceInstanceId = snapshot.getEntryApplicationInstanceId();
	string entryOperationName = snapshot.getEntryOperationName();
	if (entryOperationName != "") {
		if (entryOperationName.at(0) == '#') {
			entryEndpointName = entryOperationName.substr(1);
		} else {
			entryEndpointId = stoi(entryOperationName);
		}
	}
	string parentOperationName = snapshot.getParentOperationName();
	if (parentOperationName != "") {
		if (parentOperationName.at(0) == '#') {
			parentEndpointName = parentOperationName.substr(1);
		} else {
			parentEndpointId = stoi(parentOperationName);
		}
	}
}

string SegmentRef::getEntryEndpointName() {
	return entryEndpointName;
}

int SegmentRef::getEntryEndpointId() {
	return entryEndpointId;
}

int SegmentRef::getEntryServiceInstanceId() {
	return entryServiceInstanceId;
}

void SegmentRef::transform(SegmentReference &ref) {
	if (RefType::CrossProcess == type) {
		ref.set_reftype(RefType::CrossProcess);
		if (peerId == 0) {
			ref.set_networkaddress(peerHost);
		} else {
			ref.set_networkaddressid(peerId);
		}
	} else {
		ref.set_reftype(RefType::CrossThread);
	}

	ref.set_parentserviceinstanceid(parentServiceInstanceId);
	ref.set_entryserviceinstanceid(entryServiceInstanceId);
	UniqueId* p = ref.mutable_parenttracesegmentid();
	ID(traceSegmentId).transform(*p);
	ref.set_parentspanid(spanId);
	
	if (entryEndpointId == 0) {
		if (entryEndpointName != "") {
			ref.set_entryendpoint(entryEndpointName);
		}
	} else {
		ref.set_entryendpointid(entryEndpointId);
	}
	if (parentEndpointId == 0) {
		if (parentEndpointName != "") {
			ref.set_parentendpoint(parentEndpointName);
		}
	} else {
		ref.set_parentendpointid(parentEndpointId);
	}
}

