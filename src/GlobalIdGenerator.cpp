/*************************************************************************
 File Name: GlobalIdGenerator.cpp
 Created Time: Thu 05 Dec 2019 11:07:15 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/

#include <unistd.h>
#include <sys/syscall.h>  
#include "GlobalIdGenerator.h"
#define gettid() syscall(SYS_gettid)
thread_local IDContext GlobalIdGenerator::context(Tools::currentTimeMillis(),(short)0); 

GlobalIdGenerator::GlobalIdGenerator() {
}


string GlobalIdGenerator::generate() {
	GlobalShareValue &config = GlobalShareValue::getConfig();
	if (config.getInstanceId() == 0) {
		cout << "instance_id is empty..."<< endl;
		return "";
	}
	ID id(config.getInstanceId(),gettid(),context.nextSeq());
	return id.toString();

}

void GlobalIdGenerator::generate(UniqueId &value) {
	GlobalShareValue &config = GlobalShareValue::getConfig();
	if (config.getInstanceId() == 0) {
		cout << "instance_id is empty..."<< endl;
		//throw "instance_id is empty";
	}
	cout << "instance_id = " << config.getInstanceId() << endl;
	ID id(config.getInstanceId(),gettid(),context.nextSeq());
	id.transform(value);
}

