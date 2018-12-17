#include "Event.h"



Event::Event()
{
	subeventList = list<Event*>();
	// ����״̬Ϊ��ʼ��
	eventType = EventType::NEW;
	// ���ó���Ϊ��
	//scene = NULL;
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

// �����¼�
// ���� ��һ������ �� ������ ����
void Event::start()
{
	if (eventType == EventType::NEW)
	{
		eventType = EventType::RUNNING;
		// �´���
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
	// �жϸ��¼��Ƿ���Ҫ����
	// ���� �� û����ͣ
	if (!ifUpdate()) {
		return;
	}

	// ���µ�ǰ�¼�
	whenUpdate();

	// �������¼�
	updateSubevent();
}

void Event::addSubevent(Event * event)
{
	if (event)
	{
		//event->setScene(this->scene);
		subeventList.push_back(event);
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
