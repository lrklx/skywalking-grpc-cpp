/*************************************************************************
 File Name: ServiceAndEndpointRegisterClient.cpp
 Created Time: Tue 26 Nov 2019 11:09:06 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "ServiceAndEndpointRegisterClient.h"
#include "Timer.h"
#include <unistd.h>
 
ServiceAndEndpointRegisterClient::ServiceAndEndpointRegisterClient(shared_ptr<Channel> channel)
	: stub_(Register::NewStub(channel)),pingStub_(ServiceInstancePing::NewStub(channel)) {
    p_config = &GlobalShareValue::getConfig();
    ok = false;
	instance_uuid = Tools::getUUID();

//instance_uuid = "cf0873d9cc0f4fbdb4618faa9354df5c";
}

bool ServiceAndEndpointRegisterClient::doServiceRegister(Services &services) {
	ServiceRegisterMapping reply;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;
	context.set_deadline(Tools::deadline(10000));

	// The actual RPC.
	Status status = stub_->doServiceRegister(&context, services, &reply);

	// Act upon its status.
	if (status.ok()) {
	//	cout << "service reply ok." << endl;
		ok = true;
		printServicesReplyInfo(reply);
	} else {
		// cout << m_status.error_code() << ": " << m_status.error_message() << endl;
		//string s = m_status.error_message() + "code:" + std::to_string(m_status.error_code()) ;
		throw  status.error_message() + ",code:" + std::to_string(status.error_code());
	}

	if(reply.services_size() <= 0) {
		 return false;
	} else {
		p_config->setServiceId(reply.services(0).value());
		return true;
	}
	
}

bool ServiceAndEndpointRegisterClient::doServiceInstanceRegister(ServiceInstances &instances) {
	ServiceInstanceRegisterMapping reply;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;
	context.set_deadline(Tools::deadline(10000));

	// The actual RPC.
	Status status = stub_->doServiceInstanceRegister(&context, instances, &reply);

	// Act upon its status.
	if (status.ok()) {
		//cout << "instance reply ok." << endl;
		ok = true;
		printInstancesReplyInfo(reply);
	} else {
		//cout << m_status.error_code() << ": " << m_status.error_message() << endl;
		throw  status.error_message() + ",code:" + std::to_string(status.error_code());
	}
	
	if(reply.serviceinstances_size() <= 0) {
		return false;
	} else {
		p_config->setInstanceId(reply.serviceinstances(0).value());
		p_config->setInstanceRegisterTime(Tools::currentTimeMillis());
	    return true;
	}
}

bool ServiceAndEndpointRegisterClient::doPing(ServiceInstancePingPkg &request) {
	Commands response;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;
	context.set_deadline(Tools::deadline(10000));

	// The actual RPC.
	Status status = pingStub_->doPing(&context, request, &response);

	// Act upon its status.
	if (status.ok()) {
		cout << "doPing reply ok." << endl;
		ok = true;
	} else {
		//cout << m_status.error_code() << ": " << m_status.error_message() << endl;
		throw  status.error_message() + ",code:" + std::to_string(status.error_code());
	}
	/*if(response.commands_size() <= 0) {
		return false;
	} else {
	    return true;
	}*/
	return true;
}

bool ServiceAndEndpointRegisterClient::doNetworkAddressRegister() {

	NetAddressMapping response;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;
	context.set_deadline(Tools::deadline(10000));

	// The actual RPC.
	// address list 不为空刷新
	vector<string> unRegisterAddress = p_config->getUnRegisterAddress();
	if(unRegisterAddress.size() > 0){ // not empty ,segment 时填入全局list中
		NetAddresses address;
		vector<string>::iterator it = unRegisterAddress.begin();
		for(;it!=unRegisterAddress.end();it++){
			//address.add_addresses(*it);	
			string *pS = address.add_addresses();	
			*pS = *it;
			unRegisterAddress.erase(it); //添加完毕之后删除
		}
		Status status = stub_->doNetworkAddressRegister(&context, address, &response);
		// Act upon its status.
		if (status.ok()) {
			//cout << "doNetworkAddressRegister reply ok." << endl;
			map<string,int> addressDictionary = p_config->getAddressDictionary();
			for(int i = 0; i < response.addressids_size(); i++) {
				KeyIntValuePair kv = response.addressids(i);
				addressDictionary.insert(map<string,int>::value_type(kv.key(), kv.value()));
			}
		} else {
			//cout << m_status.error_code() << ": " << m_status.error_message() << endl;
			throw status.error_message() + ",code:" + std::to_string(status.error_code());
		}
	}
	return true;
}

bool ServiceAndEndpointRegisterClient::doEndpointRegister() {

	EndpointMapping response;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;
	context.set_deadline(Tools::deadline(10000));

	// The actual RPC.
	// address list 不为空刷新
	vector<vector<pair<string, string>>> &unRegisterEndpoints = p_config->getUnRegisterEndpoints();
	if(unRegisterEndpoints.size() > 0){ // not empty ,segment 时填入全局list中
	    Endpoints endPoints;
		Endpoint* pEndpoint = nullptr;
		vector<vector<pair<string, string>>>::iterator it = unRegisterEndpoints.begin();
		for(;it!=unRegisterEndpoints.end();it++){
			pEndpoint = endPoints.add_endpoints();
			vector<pair<string, string>> vec = (*it);
			pEndpoint->set_serviceid(stoi(vec[0].second));
			pEndpoint->set_endpointname(vec[1].second);
			if("1" == vec[2].second){
				pEndpoint->set_from(DetectPoint::server);
			} else if("1" == vec[3].second){
				pEndpoint->set_from(DetectPoint::client);
			}
			unRegisterEndpoints.erase(it); //添加完毕之后删除
		}

		Status status = stub_->doEndpointRegister(&context, endPoints, &response);

		// Act upon its status.
		if (status.ok()) {
			//cout << "doEndpointRegister reply ok." << endl;
			map<string,int> endpointDictionary = p_config->getEndpointDictionary();
			for(int i = 0; i < response.elements_size(); i++) {
				EndpointMappingElement element = response.elements(i);
				string key = to_string(element.serviceid()) + element.endpointname() + to_string(element.from());
				endpointDictionary.insert(map<string,int>::value_type(key, element.endpointid()));
			}
		} else {
			//cout << m_status.error_code() << ": " << m_status.error_message() << endl;
			throw  status.error_message() + ",code:" + std::to_string(status.error_code());
		}
	}
	return true;
}

void ServiceAndEndpointRegisterClient::run() {
	try {
		//cout << "ServiceAndEndpointRegisterClient::run..." << endl;
		const int MAX_LOOP = 10;
		int try_count = 0;
		if(!(p_config->isConnected())){
			p_config->clear();
			bool res = false;
			while(try_count <= MAX_LOOP) {
				if(p_config->getServiceId() == 0) {
					Services services;  
					Service *pService = services.add_services();
					pService->set_servicename(p_config->getAppName());
					res = doServiceRegister(services);
					if(!ok ||  !res) {
						try_count++;
						continue;

					}
				}
				// service instances register
				try_count = 0; //给实例重新分配10次
				if (p_config->getInstanceId() == 0) {
					ServiceInstances instances;
					ServiceInstance *pInstance = instances.add_instances();
					pInstance->set_serviceid(p_config->getServiceId());
					pInstance->set_instanceuuid(instance_uuid);
					pInstance->set_time(Tools::currentTimeMillis());
					KeyStringValuePair *pPair = pInstance->add_properties();
					pPair->set_key("os_name");
					pPair->set_value(p_config->getOsName());
					pPair =  pInstance->add_properties();
					pPair->set_key("host_name");
					string hostname;
					string ip;
					if(!Tools::GetHostInfo(hostname,ip)){
						hostname = "unknown";
						ip = "unknown";
					}
					pPair->set_value(hostname);
					pPair =  pInstance->add_properties();
					pPair->set_key("ipv4");
					pPair->set_value(ip);
					pPair =  pInstance->add_properties();
					pPair->set_key("process_no");
					pPair->set_value(std::to_string(getpid()));
					pPair =  pInstance->add_properties();
					pPair->set_key("language");
					pPair->set_value(p_config->getLanguage());
					res = doServiceInstanceRegister(instances); //第一次注册实例，不会返回实例id
					if(!ok ||!res) {
						try_count++;
						std::this_thread::sleep_for(std::chrono::seconds(2));
						continue;
					}
				}

				/*
				   ServiceInstancePingPkg pkg;
				   pkg.set_serviceinstanceuuid(instance_uuid);
				   pkg.set_time(Tools::currentTimeMillis());
				   pkg.set_serviceinstanceid(p_config->getInstanceId());
				   Commands commands = doPing(pkg);*/ 
				if(ok) p_config->setConnected(true);
				break;
			}
		} else {
			//doNetworkAddressRegister();
			//doEndpointRegister();
		}

	} catch(string e){
		cout << e << endl;
	}
	//cout << "ServiceAndEndpointRegisterClient::end..." << endl;
}

/*
   void ServiceAndEndpointRegisterClient::start() {
   Timer t;
   t.StartTimer(3000, std::bind(&ServiceAndEndpointRegisterClient::run,this));	
   }
*/

void ServiceAndEndpointRegisterClient::printServicesReplyInfo(ServiceRegisterMapping &reply){
	int size = reply.services_size();
	for(int i = 0;i < size; i++){
		KeyIntValuePair pKv = reply.services(i);
		cout<<"size:" << size<<","<< pKv.key() << ":" <<  pKv.value() << endl;
	}
}

void ServiceAndEndpointRegisterClient::printInstancesReplyInfo(ServiceInstanceRegisterMapping &reply){
	int size = reply.serviceinstances_size();
	for(int i = 0;i < size; i++){
		KeyIntValuePair pKv = reply.serviceinstances(i);
		cout<<"Instances size:" << size<<","<< pKv.key() << ":" <<  pKv.value() << endl;
	}
}
/*
   int main(int argc, char** argv) {
// create channel
shared_ptr<Channel>	channel = grpc::CreateChannel("10.9.1.10:11800", grpc::InsecureChannelCredentials());
GlobalShareValue value;
ServiceAndEndpointRegisterClient client(channel,value);
// service register
ServiceInstances instances;
ServiceInstance *pInstance = instances.add_instances();
pInstance->set_serviceid(2);
pInstance->set_instanceuuid("df0873d9cc0f4fbdb4215f9a9354df5c");
pInstance->set_time(Tools::currentTimeMillis());
KeyStringValuePair *pPair =  pInstance->add_properties();
pPair->set_key("os_name");
pPair->set_value("Linux");
pPair =  pInstance->add_properties();
pPair->set_key("host_name");
pPair->set_value("apm");
pPair =  pInstance->add_properties();
pPair->set_key("ipv4");
pPair->set_value("10.9.1.33");
pPair =  pInstance->add_properties();
pPair->set_key("process_no");
pPair->set_value("123");
pPair =  pInstance->add_properties();
pPair->set_key("language");
pPair->set_value("C++");
cout<< "properties size:" << pInstance->properties_size() << endl;
ServiceInstanceRegisterMapping response = client.doServiceInstanceRegister(instances);
client.printInstancesReplyInfo(response);

return 0;
}*/
