/*************************************************************************
 File Name: ServiceAndEndpointRegisterClient.h
 Created Time: Tue 26 Nov 2019 11:09:06 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/

#ifndef SERVICEANDENDPOINTREGISTERCLIENT_H__
#define SERVICEANDENDPOINTREGISTERCLIENT_H__
#include <memory>
#include <iostream>
#include <string>
#include <thread>
#include <grpcpp/grpcpp.h>
#include "register/Register.pb.h"
#include "register/InstancePing.pb.h"
#include "register/Register.grpc.pb.h"
#include "register/InstancePing.grpc.pb.h"
#include "Tools.h"
#include "GlobalShareValue.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using namespace std;

class ServiceAndEndpointRegisterClient{
 public:
  ServiceAndEndpointRegisterClient(shared_ptr<Channel> channel);
  bool doServiceRegister(Services &services);
  bool doServiceInstanceRegister(ServiceInstances &instances); 
  bool doNetworkAddressRegister(); 
  bool doEndpointRegister(); 
  bool doPing(ServiceInstancePingPkg &request); 
  void printServicesReplyInfo(ServiceRegisterMapping &reply);
  void printInstancesReplyInfo(ServiceInstanceRegisterMapping &reply);
  void run();
 private:
  unique_ptr<Register::Stub> stub_;
  unique_ptr<ServiceInstancePing::Stub> pingStub_;
  bool ok;
  GlobalShareValue *p_config;
  string instance_uuid;
};
#endif //SERVICEANDENDPOINTREGISTERCLIENT_H__
