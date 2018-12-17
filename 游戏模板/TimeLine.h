#pragma once

#include <thread>
#include <list>
#include "Event.h"
using namespace std;

class TimeLine
{
public:
	TimeLine();
	~TimeLine();
	// 启动故事
	void begin();
protected:
	// 创建线程
	void threadBegin();
	// 线程的运行内容
	void threadRun();
private:
	// 运行线程
	thread timeLineThread;
};

