/*************************************************************************
 File Name: ID.cpp
 Created Time: Wed 27 Nov 2019 03:54:58 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef ID_H__
#define ID_H__
#include<iostream>
// #include<sstream>
#include<string>
#include<vector>
#include "common/trace-common.pb.h"
#include "Tools.h"
using namespace std;
class ID {
	private:
		long part1;
		long part2;
		long part3;
		string encoding;
		bool valid;
	public:
		ID(long part1, long part2, long part3);
		ID(string encodingString); 
	//	vector<string> split(string s,char delim,int limit);
		string encode(); 
		string toString();
		int hashCode();
		bool isValid();
		void transform(UniqueId &id);
};
#endif //ID_H__
