/*************************************************************************
 File Name: Tools.h
 Created Time: Wed 27 Nov 2019 01:39:36 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef TOOLS_H__
#define TOOLS_H__
#include <iostream>
#include <chrono>
#include <vector>
#include<sstream>
#include<stdlib.h>
#include<stdio.h>
#include <uuid/uuid.h> 
#include <unistd.h>/* gethostname */
#include <netdb.h> /* struct hostent */
#include <arpa/inet.h> /* inet_ntop */
using namespace std;
class Tools {
	public:
		static long currentTimeMillis();
		static std::chrono::system_clock::time_point deadline(long milliseconds);
		static std::vector<string> split(string s,char delim,int limit);
		static std::string trim(std::string &s);
		static string CodeToString(int code);
		static bool isNetworkError(int code);
		static string getUUID();
		static bool GetHostInfo(std::string& hostName, std::string& Ip);
};
#endif // TOOLS_H__
