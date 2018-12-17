#include "Event.h"



Event::Event()
{
	subeventList = list<Event*>();
	// 设置状态为初始化
	eventType = EventType::NEW;
	// 设置场景为空
	//scene = NULL;
}

Event::Event(const Event & event)
{
	this->subeventList = list<Event*>(event.subeventList);
	this->eventType = event.eventType;
	for (list<Event*>::iterator i = subeventList.begin();
		i != subeventList.end(); i++)
	{
		(*i) = (*i)->clone();
	}
}


Event::~Event()
{
}

//void Event::setScene(Scene * scene)
//{
//	this->scene = scene;
//	for (list<Event*>::iterator e = subeventList.begin();
//		e != subeventList.end(); e++)
//	{
//		(*e)->setScene(this->scene);
//	}
//}

// 启动事件
// 包括 第一次启动 和 阻塞后 启动
void Event::start()
{
	if (eventType == EventType::NEW)
	{
		eventType = EventType::RUNNING;
		// 新创建
		firstStart();
		whenStart();
	}
	else if (eventType == EventType::BLOCKED)
	{
		eventType = EventType::RUNNING;
		whenStart();
	}
}

void Event::update()
{
	// 判断该事件是否需要更新
	// 启动 且 没有暂停
	if (!ifUpdate()) {
		return;
	}

	// 更新当前事件
	whenUpdate();

	// 更新子事件
	updateSubevent();
}

void Event::addSubevent(Event * event)
{
	if (event)
	{
		subeventList.push_back(event);
	}
}

void Event::addSubeventClone(Event * event)
{
	if (event)
	{
		//event->setScene(this->scene);
		subeventList.push_back(event->clone());
	}
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
		eventType = EventType::BLOCKED;
		whenBlock();
	}
}

void Event::stop()
{
	eventType = EventType::DEAD;
	whenStop();
}

bool Event::ifUpdate()
{
	if (eventType == EventType::RUNNING)
	{
		return true;
	}
	else {
		return false;
	}
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

Event * Event::clone()
{
	return new Event(*this);
}
