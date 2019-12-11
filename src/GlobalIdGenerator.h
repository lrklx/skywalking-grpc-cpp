/*************************************************************************
 File Name: GlobalIdGenerator.h
 Created Time: Thu 05 Dec 2019 11:07:15 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef GLOBALIDGENERATOR_H__
#define GLOBALIDGENERATOR_H__
#include <iostream>
#include <thread>
#include<string>
#include "ID.h"
#include "GlobalShareValue.h"
#include "IDContext.h"
using namespace std;
class GlobalIdGenerator {
	private:
		GlobalIdGenerator(); 
		static thread_local IDContext context;
	public:
		static void init(GlobalShareValue &value);
		static string generate();
		static void generate(UniqueId &id);
};
#endif //GLOBALIDGENERATOR_H__
