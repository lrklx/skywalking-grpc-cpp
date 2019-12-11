#ifndef SPAN_H__
#define SPAN_H__
#include <iostream>
#include<string>
#include <map>

#include "language-agent-v2/trace.pb.h"
#include "common/trace-common.pb.h"
#include "common/common.pb.h"
#include "GlobalShareValue.h"
#include "Tools.h"
using namespace std;

class Span {
	private:
		SpanObjectV2 spanV2;
		Log *pLog;
		bool complete;
	public:
	    Span();
	//	Span(const Span& another);
	//	Span& operator=(const Span& another);
	    void addTag(string key,string value);
		void addLog(string key,string value);
		void setError(bool error);
		/*  Unknown = 0;
			Database = 1;
			RPCFramework = 2;
			Http = 3;
			MQ = 4;
			Cache = 5;
		*/
		void setSpanLayer(SpanLayer layer); //
		void setComponent(string component);
		void finish();
		bool isComplete();
		SpanObjectV2& getSpanV2();
		
};
#endif //SPAN_H__
