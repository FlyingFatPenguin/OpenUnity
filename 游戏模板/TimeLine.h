#pragma once

#include <thread>
#include <list>
#include "Event.h"
using namespace std;

class TimeLine:
	public Event
{
public:
	TimeLine();
	~TimeLine();
	// 启动时，创建并启动线程
	virtual void whenStart();
	// 阻塞时终止线程
	//virtual void whenBlock();
protected:
	// 创建线程
	void threadBegin();
	// 线程的运行内容
	void threadRun();
private:
	// 运行线程
	thread timeLineThread;
};

