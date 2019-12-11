#ifndef TRACINGCONTEXT_H__
#define TRACINGCONTEXT_H__
#include <iostream>
#include<vector>
#include<string>
#include<atomic>
#include "language-agent-v2/trace.pb.h"
#include "ContextCarrier.h"
#include "ContextSnapshot.h"
#include "SegmentRef.h"
#include "Span.h"
using namespace std;
class SegmentRef;
class ContextSnapshot;
class TracingContext {
	private:
		string relatedGlobalTraceId;
		string segmentId;
		int spanIdGenerator;
		long createTime;
		vector<SegmentRef> refs;
		vector<SegmentObject> segment; // 其实这个只有一个
		vector<Span> activeSpanStack;
	public:
		TracingContext();
		~TracingContext();
		void inject(ContextCarrier& carrier) ;
		void extract(ContextCarrier& carrier) ;
		ContextSnapshot capture() ;
		void continued(ContextSnapshot& snapshot);
		void addRef(SpanObjectV2& span,SegmentRef& ref);
		string getGlobalTraceId() ;
		Span* activeSpan();
		Span* lastSpan();
		Span*  headSpan();
		void contextClear();
		bool isActive() ;
		void finish();
		bool stopSpan(Span& span);
		Span& createExitSpan(string operationName, string remotePeer);
		Span& createEntrySpan(string operationName);
		Span& createLocalSpan(string operationName);
		void createSpan(int spanId,int parentSpanId,SpanType type);
		bool spanCmp(SpanObjectV2 &first,SpanObjectV2 &second);
};
#endif //TRACINGCONTEXT_H__
