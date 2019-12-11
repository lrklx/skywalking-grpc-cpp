/*************************************************************************
 File Name: Tools.cpp
 Created Time: Wed 27 Nov 2019 01:39:36 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "Tools.h"
#include <memory.h>

long Tools::currentTimeMillis(){
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

std::chrono::system_clock::time_point Tools::deadline(long milliseconds){
	return std::chrono::system_clock::now() + std::chrono::milliseconds(milliseconds);
}

vector<string> Tools::split(string s,char delim,int limit){
	vector<string>tokens;
	string token;
	istringstream tokenStream(s);
	while(getline(tokenStream,token,delim)){
		tokens.push_back(token);
		if(tokens.size() >= (unsigned)limit) break;
	}
	return tokens;
}

/*
   OK = 0,
   CANCELLED = 1,
   UNKNOWN = 2,
   INVALID_ARGUMENT = 3,
   DEADLINE_EXCEEDED = 4,
   NOT_FOUND = 5,
   ALREADY_EXISTS = 6,
   PERMISSION_DENIED = 7,
   UNAUTHENTICATED = 16,
   RESOURCE_EXHAUSTED = 8,
   FAILED_PRECONDITION = 9,
   ABORTED = 10,
   OUT_OF_RANGE = 11,
   UNIMPLEMENTED = 12,
   INTERNAL = 13,
   UNAVAILABLE = 14,
   DATA_LOSS = 15,
   */

string Tools::CodeToString(int code) {
	switch (code) {
		case 0:
			return "OK";
		case 1:
			return "CANCELLED";
		case 2:
			return "UNKNOWN";
		case 3:
			return "INVALID_ARGUMENT";
		case 4:
			return "DEADLINE_EXCEEDED";
		case 5:
			return "NOT_FOUND";
		case 6:
			return "ALREADY_EXISTS";
		case 7:
			return "PERMISSION_DENIED";
		case 16:
			return "UNAUTHENTICATED";
		case 8:
			return "RESOURCE_EXHAUSTED";
		case 9:
			return "FAILED_PRECONDITION";
		case 10:
			return "ABORTED";
		case 11:
			return "OUT_OF_RANGE";
		case 12:
			return "UNIMPLEMENTED";
		case 13:
			return "INTERNAL";
		case 14:
			return "UNAVAILABLE";
		case 15:
			return "DATA_LOSS";
	}

	return "UNKNOWN";
}

bool Tools::isNetworkError(int code) {
	if(code == 14 || code == 7 || code == 16 
			|| code == 8 ||  code == 2){
		return true;
	} else {
		return false;
	}
}

string Tools::getUUID(){
	uuid_t uuid;  
	uuid_generate(uuid);  
	char buf[128];
	memset(buf,0,128);
	for(int i=0;i<16;i++)  
	{  
       // sprintf(buf+i*2, "%02X",uuid[i]); //大写
       sprintf(buf+i*2, "%02x",uuid[i]);
	}  
	return buf;
}
 
bool Tools::GetHostInfo(std::string& hostName, std::string& Ip) {

	char name[256];
	gethostname(name, 256);
	hostName = name;

	struct hostent* host = gethostbyname(name);
	if(NULL == host) return false;
	char ipStr[32];
	int list_size = sizeof(host->h_addr_list)/sizeof(host->h_addr_list[0]);
	int index = 0;
	while(list_size-- > 0){
		const char* ret = inet_ntop(host->h_addrtype, host->h_addr_list[index++], ipStr, 32);
		if (NULL==ret) {
			std::cout << "hostname transform to ip failed";
			return false;
		} else{
	      Ip = ret;
		  break;
		}
	}
	return true;
}

std::string Tools::trim(std::string &s)   
{  
	if (s.empty()){  
		return s;  
	}  
	s.erase(0,s.find_first_not_of(" "));  
	s.erase(s.find_last_not_of(" ") + 1);  
	return s;  
}  
