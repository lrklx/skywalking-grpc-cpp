/*************************************************************************
 File Name: Timer.cpp
 Created Time: Mon 02 Dec 2019 02:38:31 PM CST
 Author: LiYanYan
 Description: 
 ************************************************************************/

#ifndef TIMER_H__
#define TIMER_H__
#include<iostream>
#include<functional>
#include<chrono>
#include<thread>
#include<atomic>
#include<memory>
#include<mutex>
#include<condition_variable>
class Timer {
 public:
  Timer();
  Timer(const Timer& t);
  ~Timer();
  void StartTimer(int interval, std::function<void()> task);
  void Expire();
  template<typename callable, class... arguments>
   void SyncWait(int after, callable&& f, arguments&&... args);

  template<typename callable, class... arguments>
   void AsyncWait(int after, callable&& f, arguments&&... args);

 private:
  std::atomic<bool> expired_;
  std::atomic<bool> try_to_expire_;
  std::mutex mutex_;
  std::condition_variable expired_cond_;
};
#endif
