#include "Event.h"



Event::Event()
{
	subeventList = list<Event*>();
	// 设置状态为初始化
	eventType = EventType::NEW;
}


Event::~Event()
{
}

// 启动事件
// 包括 第一次启动 和 阻塞后 启动
void Event::start()
{
	if (eventType == EventType::NEW)
	{
		// 新创建
		firstStart();
		whenStart();
		eventType = EventType::RUNNING;
	}
	else if (eventType == EventType::BLOCKED)
	{
		whenStart();
		eventType = EventType::RUNNING;
	}
}

void Event::update()
{
	// 判断该事件是否需要更新
	// 启动 且 没有暂停
	if (!CanUpdate()) {
		return;
	}

	// 更新当前事件
	whenUpdate();

	// 更新子事件
	updateSubevent();
}

void Event::addSubevent(Event * event)
{
}

void Event::firstStart()
{
}

void Event::whenStart()
{
}

void Event::whenBlock()
{
}

void Event::whenStop()
{
}

void Event::block()
{
	if (eventType == EventType::RUNNING)
	{
		whenBlock();
		eventType = EventType::BLOCKED;
	}
}

void Event::stop()
{
	whenStop();
	eventType = EventType::DEAD;
}

bool Event::CanUpdate()
{

	return false;
}

void Event::whenUpdate()
{
}

void Event::updateSubevent()
{
	for (list<Event*>::iterator e = subeventList.begin();
		e != subeventList.end(); e++)
	{
		(*e)->update();
	}
}
