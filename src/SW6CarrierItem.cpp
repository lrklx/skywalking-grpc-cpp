/*************************************************************************
 File Name: SW6CarrierItem.cpp
 Created Time: Fri 06 Dec 2019 09:59:11 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "SW6CarrierItem.h"
const string SW6CarrierItem::HEADER_NAME = "sw6";

SW6CarrierItem::SW6CarrierItem(){
	p_carrier = nullptr;
	this->headKey = HEADER_NAME;
};

SW6CarrierItem::SW6CarrierItem(ContextCarrier &carrier) {
	this->p_carrier = &carrier;
	this->headKey = HEADER_NAME;
}

void SW6CarrierItem::setContextCarrier(ContextCarrier &carrier){
	this->p_carrier = &carrier;
	this->headKey = HEADER_NAME;
}

void SW6CarrierItem::setHeadValue(string value) { //这里的headValue 是base64
	if(nullptr != p_carrier){
		p_carrier->deserialize(value);
	}
}

string SW6CarrierItem::getHeadValue() {  
	if(nullptr != p_carrier){
		return this->p_carrier->serialize(); //编码成base64
	} else{
		return "";
	}
}

