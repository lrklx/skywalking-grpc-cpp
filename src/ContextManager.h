/*************************************************************************
 File Name: ContextManager.h
 Created Time: Thu 05 Dec 2019 04:44:21 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef CONTEXTMANAGER_H__
#define CONTEXTMANAGER_H__
#include<iostream>
#include<thread>
#include<string>
#include "language-agent-v2/trace.pb.h"
#include "TracingContext.h"
#include "SegmentRef.h"
#include "ContextCarrier.h"
#include "ContextSnapshot.h"
#include "Span.h"
using namespace std;
class ContextManager {
	private:
		static thread_local TracingContext context;
	public:
		static Span& createExitSpan(string operationName, ContextCarrier &carrier, string remotePeer);
		static Span& createExitSpan(string operationName, string remotePeer);
		static Span& createEntrySpan(string operationName, ContextCarrier &carrier);
		static Span& createLocalSpan(string operationName);
		//static Span& getActiveSpan();
		static string getGlobalTraceId() ;
		static void inject(ContextCarrier &carrier) ;
		static void extract(ContextCarrier &carrier) ;
		static ContextSnapshot capture() ;
		static void continued(ContextSnapshot &snapshot) ;
		static void contextClear();
		static bool isActive() ;
		static void stopSpan();
		static void stopSpan(Span &span);
};
#endif //CONTEXTMANAGER_H__
