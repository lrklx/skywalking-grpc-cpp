/*************************************************************************
 File Name: Timer.cpp
 Created Time: Mon 02 Dec 2019 02:38:31 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/
#include "Timer.h"

Timer::Timer() :expired_(true), try_to_expire_(false){
}

Timer::Timer(const Timer& t){
	expired_ = t.expired_.load();
	try_to_expire_ = t.try_to_expire_.load();
}

Timer::~Timer(){
	Expire();
	std::cout << "timer destructed!" << std::endl;
}

void Timer::StartTimer(int interval, std::function<void()> task){
	if (expired_ == false){
		std::cout << "timer is currently running, please expire it first..." << std::endl;
		return;
	}
	expired_ = false;
	std::thread([this, interval, task]() {
			// while (!try_to_expire_){
			while (true){ // 启动后永久执行周期调度
			task();
			std::this_thread::sleep_for(std::chrono::milliseconds(interval));
			}
			std::cout << "stop task..." << std::endl;
			{
			std::lock_guard<std::mutex> locker(mutex_);
			expired_ = true;
			expired_cond_.notify_one();
			}
			}).detach();
}

void Timer::Expire(){
	if (expired_){
		return;
	}

	if (try_to_expire_){
		std::cout << "timer is trying to expire, please wait..." << std::endl;
		return;
	}
	try_to_expire_ = true;
	{
		std::unique_lock<std::mutex> locker(mutex_);
		expired_cond_.wait(locker, [this]{return expired_ == true; });
		if (expired_ == true){
			std::cout << "timer expired!" << std::endl;
			try_to_expire_ = false;
		}
	}
}

template<typename callable, class... arguments>
void Timer::SyncWait(int after, callable&& f, arguments&&... args){
	std::function<typename std::result_of<callable(arguments...)>::type()> task
		(std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));
	std::this_thread::sleep_for(std::chrono::milliseconds(after));
	task();
}

template<typename callable, class... arguments>
void Timer::AsyncWait(int after, callable&& f, arguments&&... args){
	std::function<typename std::result_of<callable(arguments...)>::type()> task
		(std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));

	std::thread([after, task](){
			std::this_thread::sleep_for(std::chrono::milliseconds(after));
			task();
			}).detach();
}

/*
void EchoFunc(std::string s,std::string s1){
	std::cout<< "test:" << s << s1 << std::endl;
}

int main(){
	Timer t;
	//周期性执行定时任务
	t.StartTimer(1000, std::bind(EchoFunc,"hello world!","123"));
	// std::this_thread::sleep_for(std::chrono::seconds(4));
	// std::cout << "try to expire timer!" << std::endl;
	// t.Expire();

	//周期性执行定时任务
	Timer t2;
	 t2.StartTimer(1000, std::bind(EchoFunc, "hello c++11!","321"));
	// std::this_thread::sleep_for(std::chrono::seconds(4));
	// std::cout << "try to expire timer!" << std::endl;
	// t.Expire();

	// std::this_thread::sleep_for(std::chrono::seconds(2));

	//只执行一次定时任务
	//同步
	//t.SyncWait(1000, EchoFunc, "hello world!");
	//异步
	// t.AsyncWait(1000, EchoFunc, "hello c++11!");

	//std::this_thread::sleep_for(std::chrono::seconds(30));
	//std::this_thread::sleep_for(std::chrono::years(30));

	return 0;
}
*/
