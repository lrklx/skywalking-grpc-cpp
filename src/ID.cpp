/*************************************************************************
 File Name: ID.cpp
 Created Time: Wed 27 Nov 2019 03:54:58 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "ID.h"

ID::ID(long part1, long part2, long part3) {
	this->part1 = part1;
	this->part2 = part2;
	this->part3 = part3;
	this->encoding = "";
	this->valid = true;
}


ID::ID(string encodingString) {
	auto idParts = Tools::split(encodingString,'.', 3);
	this->part1 = 0;
	this->part2 = 0;
	this->part3 = 0;
	if(idParts.size() != 3){
		this->valid = false;
		cout << "ID format is error!" << endl;
	} else {
		this->valid = true;
	}
	
	for (int part = 0; part < (int)idParts.size(); part++) {
		if (part == 0) {
			part1 = stol(idParts[part]);
		} else if (part == 1) {
			part2 = stol(idParts[part]);
		} else {
			part3 = stol(idParts[part]);
		}
	}
}

string ID::encode() {
	if (encoding == "") {
		encoding = toString();
	}
	return encoding;
}

string ID::toString() {
	return to_string(part1) + "." + to_string(part2) + '.' + to_string(part3);
}

int ID::hashCode() {
	int result = (int)(part1 ^ (part1 >> 32));
	result = 31 * result + (int)(part2 ^ (part2 >> 32));
	result = 31 * result + (int)(part3 ^ (part3 >> 32));
	return result;
}

bool ID::isValid() {
	return valid;
}

void ID::transform(UniqueId &id) {
	id.add_idparts(part1);
	id.add_idparts(part2);
	id.add_idparts(part3);
}

/*
int main(int argc,char** argv){
    ID id(12,34,1574676950638)
	cout<< id.toString() <<endl;
	cout<< id.hashCode() << endl;
	cout<< id.hashCode() << endl;
	cout<< id.hashCode() << endl;
	cout<< id.isValid() <<endl;
	cout<< id.encode() <<endl;
    ID id2("12.34.1234567890");
	cout<< id2.toString() <<endl;
	cout<< id2.hashCode() << endl;
	cout<< id2.isValid() <<endl;
	cout<< id2.encode() <<endl;
	return 0;
}
*/
