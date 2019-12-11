#include "ContextSnapshot.h"
#include "ContextManager.h"
ContextSnapshot::ContextSnapshot(string traceSegmentId, int spanId,
		string distributedTraceId) {
	this->traceSegmentId = traceSegmentId;
	this->spanId = spanId;
	if (distributedTraceId != "") {
		this->primaryDistributedTraceId = distributedTraceId;
	}
}

void ContextSnapshot::setEntryOperationName(string entryOperationName) {
	this->entryOperationName = "#" + entryOperationName;
}

void ContextSnapshot::setEntryOperationId(int entryOperationId) {
	this->entryOperationName = to_string(entryOperationId);
}

void ContextSnapshot::setParentOperationName(string parentOperationName) {
	this->parentOperationName = "#" + parentOperationName;
}

void ContextSnapshot::setParentOperationId(int parentOperationId) {
	this->parentOperationName = to_string(parentOperationId);
}

string ContextSnapshot::getDistributedTraceId() {
	return primaryDistributedTraceId;
}

string ContextSnapshot::getTraceSegmentId() {
	return traceSegmentId;
}

int ContextSnapshot::getSpanId() {
	return spanId;
}

string ContextSnapshot::getParentOperationName() {
	return parentOperationName;
}

bool ContextSnapshot::isValid() {
	return traceSegmentId != ""
		&& spanId > -1
		&& entryApplicationInstanceId != 0
		&& primaryDistributedTraceId != "";
}

string ContextSnapshot::getEntryOperationName() {
	return entryOperationName;
}

void ContextSnapshot::setEntryApplicationInstanceId(int entryApplicationInstanceId) {
	this->entryApplicationInstanceId = entryApplicationInstanceId;
}

int ContextSnapshot::getEntryApplicationInstanceId() {
	return entryApplicationInstanceId;
}

bool ContextSnapshot::isFromCurrent() {
	return traceSegmentId == (ContextManager::capture().getTraceSegmentId());
}
