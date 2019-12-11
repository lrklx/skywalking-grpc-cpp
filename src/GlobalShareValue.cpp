/*************************************************************************
  File Name: GlobalShareValue.h
  Created Time: Wed 04 Dec 2019 09:20:07 AM CST
Author: LiYanYan
Description: 
 ************************************************************************/

#include "GlobalShareValue.h"
#include "Tools.h"
#define ADDRESS_CODE_BUFFER_SIZE 100000
#define ENDPOINT_NAME_BUFFER_SIZE 10000000

string GlobalShareValue::SERVICE_ID_KEY = "service_id";
string GlobalShareValue::ENDPOINT_NAME_KEY = "endpoint_name";
string GlobalShareValue::IS_ENTRY_KEY = "is_entry";
string GlobalShareValue::IS_EXIT_KEY = "is_exit";
GlobalShareValue GlobalShareValue::config;

GlobalShareValue::GlobalShareValue(){
	service_id = 0;
	instance_id = 0;
	instance_registerd_time = 0;
	connected = false;
	initComponentMap(); // 此map在服务重连时不需要清理
	os_name = "Linux";
	language = "C++";
	app_name = "";
	channel = "";
}

void GlobalShareValue::initComponentMap(){
	componentMap.insert(pair<string,int>( "Tomcat",1));

	componentMap.insert(pair<string,int>( "HttpClient",2));

	componentMap.insert(pair<string,int>( "Dubbo",3));

	componentMap.insert(pair<string,int>( "Motan",8));

	componentMap.insert(pair<string,int>( "Resin",10));

	componentMap.insert(pair<string,int>( "Feign",11));

	componentMap.insert(pair<string,int>( "OKHttp",12));

	componentMap.insert(pair<string,int>( "SpringRestTemplate",13));

	componentMap.insert(pair<string,int>( "SpringMVC",14));

	componentMap.insert(pair<string,int>( "Struts2",15));

	componentMap.insert(pair<string,int>( "NutzMVC",16));

	componentMap.insert(pair<string,int>( "NutzHttp",17));

	componentMap.insert(pair<string,int>( "JettyClient",18));

	componentMap.insert(pair<string,int>( "JettyServer",19));

	componentMap.insert(pair<string,int>( "ShardingJDBC",21));

	componentMap.insert(pair<string,int>( "GRPC",23));

	componentMap.insert(pair<string,int>( "ElasticJob",24));

	componentMap.insert(pair<string,int>( "httpasyncclient",26));

	componentMap.insert(pair<string,int>( "ServiceComb",28));

	componentMap.insert(pair<string,int>( "Hystrix",29));

	componentMap.insert(pair<string,int>( "Jedis",30));

	componentMap.insert(pair<string,int>( "jdbc-jdbc-driver",32));

	componentMap.insert(pair<string,int>( "mysql-connector-java",33));

	componentMap.insert(pair<string,int>( "ojdbc",34));

	componentMap.insert(pair<string,int>( "Spymemcached",35));

	componentMap.insert(pair<string,int>( "Xmemcached",36));

	componentMap.insert(pair<string,int>( "postgresql-jdbc-driver",37));

	componentMap.insert(pair<string,int>( "rocketMQ-producer",38));

	componentMap.insert(pair<string,int>( "rocketMQ-consumer",39));

	componentMap.insert(pair<string,int>( "kafka-producer",40));

	componentMap.insert(pair<string,int>( "kafka-consumer",41));

	componentMap.insert(pair<string,int>( "mongodb-driver",42));

	componentMap.insert(pair<string,int>( "SOFARPC",43));

	componentMap.insert(pair<string,int>("activemq-producer",45));

	componentMap.insert(pair<string,int>("activemq-consumer",46));

	componentMap.insert(pair<string,int>( "transport-client",48));

	componentMap.insert(pair<string,int>( "Undertow",49));

	componentMap.insert(pair<string,int>("rabbitmq-producer",52));

	componentMap.insert(pair<string,int>("rabbitmq-consumer",53));

	componentMap.insert(pair<string,int>("Canal",54));

	componentMap.insert(pair<string,int>("Gson",55));

	componentMap.insert(pair<string,int>( "Redisson",56));

	componentMap.insert(pair<string,int>( "Lettuce",57));

	componentMap.insert(pair<string,int>( "Zookeeper",58));

	componentMap.insert(pair<string,int>( "Vert.x",59));

	componentMap.insert(pair<string,int>( "ShardingSphere",60));

	componentMap.insert(pair<string,int>( "spring-cloud-gateway",61));

	componentMap.insert(pair<string,int>( "RESTEasy",62));

	componentMap.insert(pair<string,int>( "solrj",63));

	componentMap.insert(pair<string,int>( "SpringAsync",65));

	componentMap.insert(pair<string,int>( "JdkHttp",66));

	componentMap.insert(pair<string,int>( "spring-webflux",67));

	componentMap.insert(pair<string,int>( "Play",68));

	componentMap.insert(pair<string,int>( "ASDK-HTTP",69));

	componentMap.insert(pair<string,int>( "AFA-ABUS",70));

	componentMap.insert(pair<string,int>( "AFA-HTTP",71));

	componentMap.insert(pair<string,int>( "AFA-RPC",72));

	componentMap.insert(pair<string,int>( "AFA-NATP",73));

}

void GlobalShareValue::setServiceId(int id){ service_id = id ;}

void GlobalShareValue::setInstanceId(int id){ instance_id = id ;}

void GlobalShareValue::setInstanceRegisterTime(long time){ instance_registerd_time = time;}

int GlobalShareValue::getServiceId(){ return service_id;}

int GlobalShareValue::getInstanceId(){ return instance_id ;}

long GlobalShareValue::getInstanceRegisterTime(){ return instance_registerd_time;}

void GlobalShareValue::setConnected(bool flag){ connected = flag;}

bool GlobalShareValue::isConnected(){ return connected;}

void GlobalShareValue::clear(){
	service_id = 0;
	instance_id = 0;
	instance_registerd_time = 0;
	connected = false;
	addressDictionary.clear();
	unRegisterAddress.clear();
	endpointDictionary.clear();
	unRegisterEndpoints.clear();
	segmentList.clear();

}

map<string, int> & GlobalShareValue::getAddressDictionary(){
	return addressDictionary;
}

vector<string> & GlobalShareValue::getUnRegisterAddress(){
	return unRegisterAddress;
}

int GlobalShareValue::find(string networkAddress){
	map<string, int>::iterator iter = addressDictionary.find(networkAddress);
	if(iter != addressDictionary.end()){
		return iter->second;
	} else {
		// 此处要加锁，多个线程的时候就会出问题
		if (addressDictionary.size() + unRegisterAddress.size() < ADDRESS_CODE_BUFFER_SIZE) {
			unRegisterAddress.push_back(networkAddress);
		}
		return 0;
	}

}

map<string, int> & GlobalShareValue::getEndpointDictionary(){
	return endpointDictionary;
}

vector<vector<pair<string, string>>> & GlobalShareValue::getUnRegisterEndpoints(){
	return unRegisterEndpoints;
}

int GlobalShareValue::findEndpoint(vector<pair<string, string>> &endpoint){ 

	string key = "";
	// isEntry  isExit /* true-> "1",false = "0"*/
	if(endpoint.size() < 4) return 0;
	for(int i =0; i < (int)endpoint.size(); i++){ 
		// serviceId, endpointName, isEntry, isExit
		if((i == 2 || i == 3) && "0" == endpoint[i].second){
			key += ""; 
		} else{
			key += endpoint[i].second; 
		}
	}

	map<string, int>::iterator iter = endpointDictionary.find(key);
	if(iter != endpointDictionary.end()){
		return iter->second;
	} else {
		// TODO:此处要加锁，多个线程的时候就会出问题
		if (endpointDictionary.size() + unRegisterEndpoints.size() < ENDPOINT_NAME_BUFFER_SIZE) {
			unRegisterEndpoints.push_back(endpoint);
		}
		return -1;
	}

}

vector<UpstreamSegment>& GlobalShareValue::getSegmentList(){
	return segmentList;
}


map<string, int> & GlobalShareValue::getComponentMap(){
	return componentMap;
}

GlobalShareValue& GlobalShareValue::getConfig(){
	return GlobalShareValue::config;
}


void GlobalShareValue::setOsName(string &name){
	os_name = name;
}

string GlobalShareValue::getOsName(){
	return os_name;
}


void GlobalShareValue::setAppName(string &name){
	app_name = name;
}

string GlobalShareValue::getAppName(){
	return app_name;
}


void GlobalShareValue::setLanguage(string &lan){
	language = lan;
}

string GlobalShareValue::getLanguage(){
	return language;
}


void GlobalShareValue::setChannel(string &channel){
	this->channel = channel;
}

string GlobalShareValue::getChannel(){
	return channel;
}

void GlobalShareValue::setArgs(char **args,int size){
	map<string,string> argsMap;
	for(int i = 0;i < size; i++){
		auto vec = Tools::split(*(args+i),'=',2);
		if((vec.size() == 2) && (vec[0].length() > 0)){
			string key = vec[0];
			string value = vec[1];
			key.erase(0,key.find_first_not_of("-"));  
			argsMap.insert(map<string,string>::value_type(key,value));
		}
	}

	if(argsMap.find("channel") != argsMap.end()){
		channel = argsMap.find("channel")->second;
	}

	if(argsMap.find("os_name") != argsMap.end()){
		os_name = argsMap.find("os_name")->second;
	} 
	
	if(argsMap.find("app") != argsMap.end()){
		app_name = argsMap.find("app")->second;
	} 
	
	if(argsMap.find("lan") != argsMap.end()){
		language = argsMap.find("lan")->second;
	}

	cout << "channel:" << channel << ",os_name:" << os_name << ",app_name:" << app_name << ",language:" << language << endl;
}
