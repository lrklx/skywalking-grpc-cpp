/*************************************************************************
 File Name: ContextManager.h
 Created Time: Thu 05 Dec 2019 04:44:21 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "ContextManager.h"
thread_local TracingContext ContextManager::context;
Span& ContextManager::createExitSpan(string operationName, ContextCarrier &carrier, string remotePeer) {
	operationName = operationName.substr(0, 500);
	Span &span = context.createExitSpan(operationName, remotePeer);
	context.inject(carrier);
	return span;
}

Span& ContextManager::createExitSpan(string operationName, string remotePeer) {
	operationName =  operationName.substr(0, 500);
	Span &span = context.createExitSpan(operationName, remotePeer);
	return span;
}

Span& ContextManager::createEntrySpan(string operationName, ContextCarrier &carrier) {
	operationName = operationName.substr(0, 500);
	if (carrier.isValid()) {
		cout << "==============in extract." << endl;
		Span& span = context.createEntrySpan(operationName);
		context.extract(carrier);
		return span;
	} else {
		Span& span = context.createEntrySpan(operationName);
	    return span;
	}
}

Span& ContextManager::createLocalSpan(string operationName) {
	operationName = operationName.substr(0, 500);
	return context.createLocalSpan(operationName);
}

string ContextManager::getGlobalTraceId() {
	return context.getGlobalTraceId();
}

void ContextManager::inject(ContextCarrier &carrier) {
	context.inject(carrier);
}

void ContextManager::extract(ContextCarrier &carrier) {
	if (carrier.isValid()) {
		context.extract(carrier);
	}
}

ContextSnapshot ContextManager::capture() {
	return context.capture();
}

void ContextManager::continued(ContextSnapshot &snapshot) {
	if (snapshot.isValid() && !snapshot.isFromCurrent()) {
		context.continued(snapshot);
	}
}

void ContextManager::contextClear(){
	context.contextClear();
}

bool ContextManager::isActive() {
	return context.isActive();
}


void ContextManager::stopSpan() {
	while(!context.stopSpan(*(context.activeSpan())));
	//context.stopSpan(*(context.activeSpan()));
}
/*
Span& ContextManager::getActiveSpan() {
	return *(context.activeSpan());
}*/
/*
void ContextManager::stopSpan(Span &span) {
	//return context.stopSpan(span);
	context.stopSpan(span);
}
*/


