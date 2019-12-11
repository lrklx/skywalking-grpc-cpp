/*************************************************************************
 File Name: SW6CarrierItem.h
 Created Time: Fri 06 Dec 2019 09:59:11 AM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#ifndef SW6CARRIERITEM_H__
#define SW6CARRIERITEM_H__
#include<iostream>
#include<string>
#include "ContextCarrier.h"
using namespace std;
class SW6CarrierItem {
	public:
		static const string HEADER_NAME;
		SW6CarrierItem();
		SW6CarrierItem(ContextCarrier& carrier) ;
		void setContextCarrier(ContextCarrier& carrier);
		void setHeadValue(string value) ; //这里的headValue 是base64
		string getHeadValue() ;  
	private:
		ContextCarrier* p_carrier;
		string headKey;
	//	string headValue;
};
#endif //SW6CARRIERITEM_H__
