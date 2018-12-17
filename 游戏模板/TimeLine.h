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
	// ����ʱ�������������߳�
	virtual void whenStart();
	// ����ʱ��ֹ�߳�
	//virtual void whenBlock();
protected:
	// �����߳�
	void threadBegin();
	// �̵߳���������
	void threadRun();
private:
	// �����߳�
	thread timeLineThread;
};

