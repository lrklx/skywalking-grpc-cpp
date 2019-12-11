/*************************************************************************
 File Name: GlobalShareValue.h
 Created Time: Wed 04 Dec 2019 09:20:07 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef GLOBALSHAREVALUE_H__
#define GLOBALSHAREVALUE_H__
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<atomic>
#include "language-agent-v2/trace.grpc.pb.h"
#include "language-agent-v2/trace.pb.h"
#include "common/common.pb.h"
using namespace std;
class GlobalShareValue{
	public:
		 GlobalShareValue();
		 void setServiceId(int id);
		 void setInstanceId(int id);
		 void setInstanceRegisterTime(long time);
		 int getServiceId();
		 int getInstanceId();
		 long getInstanceRegisterTime();
		 void setConnected(bool flag);
		 void setOsName(string &name);
		 string getOsName();
		 void setLanguage(string &lan);
		 string getLanguage();
		 void setAppName(string &name);
		 string getAppName();
		 void setChannel(string &channel);
		 string getChannel();
		 bool isConnected();
		 map<string, int>& getAddressDictionary();
		 int find(string networkAddress);
		 vector<string>& getUnRegisterAddress();

		 map<string, int>& getEndpointDictionary();
		 int findEndpoint(vector<pair<string, string>> & endpoint);
		 vector<vector<pair<string, string>>>& getUnRegisterEndpoints();
		 vector<UpstreamSegment>& getSegmentList();
		 map<string, int>& getComponentMap();
		 void initComponentMap();
		 void setArgs(char **args,int size);

		 void clear();
		 static string SERVICE_ID_KEY;
		 static string ENDPOINT_NAME_KEY;
		 static string IS_ENTRY_KEY;
		 static string IS_EXIT_KEY;
		 static GlobalShareValue& getConfig();


	private:
		int service_id;
		int instance_id;
		long instance_registerd_time;
		static GlobalShareValue config;
		std::atomic<bool> connected;
		map<string, int> addressDictionary;
		vector<string> unRegisterAddress;
		map<string, int> endpointDictionary;
		vector<vector<pair<string, string>>> unRegisterEndpoints;
		vector<UpstreamSegment> segmentList;
		map<string,int> componentMap;
		string os_name;
		string language;
		string app_name;
		string channel;
};
#endif //GLOBALSHAREVALUE_H__
