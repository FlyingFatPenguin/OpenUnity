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
	// ��������
	void begin();
protected:
	// �����߳�
	void threadBegin();
	// �̵߳���������
	void threadRun();
private:
	// �����߳�
	thread timeLineThread;
};

