#ifndef CONTEXTSNAPSHOT_H__
#define CONTEXTSNAPSHOT_H__
#include <iostream>
#include<string>
using namespace std;
class ContextSnapshot {
	private:
		string traceSegmentId;
		int spanId;
		string entryOperationName;
		string parentOperationName;
		string primaryDistributedTraceId;
		int entryApplicationInstanceId;

	public:
		ContextSnapshot(string traceSegmentId, int spanId,string distributedTraceId);

		void setEntryOperationName(string entryOperationName) ;

		void setEntryOperationId(int entryOperationId) ;

		void setParentOperationName(string parentOperationName) ;

		void setParentOperationId(int parentOperationId) ;

		string getDistributedTraceId() ;

		string getTraceSegmentId() ;

		int getSpanId() ;

		string getParentOperationName() ;

		bool isValid() ;

		string getEntryOperationName() ;

		void setEntryApplicationInstanceId(int entryApplicationInstanceId) ;

		int getEntryApplicationInstanceId() ;

		bool isFromCurrent() ;
};
#endif //CONTEXTSNAPSHOT_H__
