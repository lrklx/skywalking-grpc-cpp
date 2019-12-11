/*************************************************************************
 File Name: IDContext.cpp
 Created Time: Thu 05 Dec 2019 11:07:15 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "IDContext.h"

IDContext::IDContext(long lastTimestamp, short threadSeq) {
	this->lastTimestamp = lastTimestamp;
	this->threadSeq = threadSeq;
}

long IDContext::runRandom(){
	default_random_engine e; 
	uniform_int_distribution<unsigned> u(0, 9); //随机数分布对象 
	string s = "";
	for (size_t i = 0; i < 10; ++i) {  //生成范围为0-9的随机数序列 
		s += to_string(u(e)); 
	}
	return stol(s); 

}

long IDContext::nextSeq() {
	return timestamp() * 10000 + nextThreadSeq();
}

long IDContext::timestamp() {
	long currentTimeMillis = Tools::currentTimeMillis();

	if (currentTimeMillis < lastTimestamp) {
		// Just for considering time-shift-back by Ops or OS. @hanahmily 's suggestion.
		if (runRandomTimestamp != currentTimeMillis) {
			lastRandomValue = runRandom();
			runRandomTimestamp = currentTimeMillis;
		}
		return lastRandomValue;
	} else {
		lastTimestamp = currentTimeMillis;
		return lastTimestamp;
	}
}

int IDContext::nextThreadSeq() {
	if (threadSeq == 10000) {
		threadSeq = 0;
	}
	return threadSeq++;
}
