/*************************************************************************
 File Name: IDContext.h
 Created Time: Thu 05 Dec 2019 11:07:15 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef IDCONTEXT_H__
#define IDCONTEXT_H__
#include <iostream>
#include <random>
#include<string>
#include "Tools.h"

using std::cout; using std::endl;
using std::default_random_engine;
using std::uniform_int_distribution;

class IDContext {
	private:
		long lastTimestamp;
		short threadSeq;
		long runRandomTimestamp;
		long lastRandomValue;
	public:
		IDContext(long lastTimestamp, short threadSeq);
		long runRandom();
		long nextSeq() ;
		long timestamp();
		int nextThreadSeq();
};
#endif //IDCONTEXT_H__
