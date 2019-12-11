#include "Span.h"
#include "Tools.h"
//#include "ContextManager.h"

Span::Span(){
	pLog  = nullptr;
	complete = false;
}
/*
   Span::Span(const Span& another)
   {
   cout << "拷贝构造"<<endl;
   this->spanV2 = another.spanV2;
   this->pLog = another.pLog;
   cout <<"old ref size:" <<another.spanV2.refs_size() << endl;
   cout <<"new ref size:" <<this->spanV2.refs_size() << endl;

   }

   Span& Span::operator=(const Span& another)
   {
   cout << "赋值运算符"<<endl;
   if(this == &another){
   return *this;
   }

   this->spanV2 = another.spanV2;
   this->pLog = another.pLog;
   cout <<"old ref size:" <<another.spanV2.refs_size() << endl;
   cout <<"new ref size:" <<this->spanV2.refs_size() << endl;

   return *this;
   }
   */

SpanObjectV2& Span::getSpanV2(){
	return spanV2;
}

void Span::addTag(string key,string value){
	KeyStringValuePair &kv  = *(spanV2.add_tags());
	kv.set_key(key);
	kv.set_value(value);

}

void Span::addLog(string key,string value){
	if(pLog  == nullptr){
		pLog  = spanV2.add_logs();
		pLog->set_time(Tools::currentTimeMillis());
	}

	KeyStringValuePair &kv  = *(pLog->add_data());
	kv.set_key(key);
	kv.set_value(value);
}

void Span::setError(bool error){
	spanV2.set_iserror(error);
}
/*  Unknown = 0;
	Database = 1;
	RPCFramework = 2;
	Http = 3;
	MQ = 4;
	Cache = 5;
	*/

void Span::setSpanLayer(SpanLayer layer){
	spanV2.set_spanlayer(layer);
}

void Span::setComponent(string component){
	GlobalShareValue &config = GlobalShareValue::getConfig();
	map<string,int> &componentMap = config.getComponentMap();
	map<string,int>::iterator it = componentMap.find(component);
	if(it != componentMap.end()){
		spanV2.set_componentid(it->second);
	} 
	spanV2.set_component(component);
}

void Span::finish(){
	spanV2.set_endtime(Tools::currentTimeMillis());
	complete = true;
//	ContextManager::stopSpan();

}

bool Span::isComplete(){
	return complete ;
}
