#include "Event.h"



Event::Event()
{
	subeventList = list<Event*>();
	// ����״̬Ϊ��ʼ��
	eventType = EventType::NEW;
}


Event::~Event()
{
}

// �����¼�
// ���� ��һ������ �� ������ ����
void Event::start()
{
	if (eventType == EventType::NEW)
	{
		// �´���
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
	// �жϸ��¼��Ƿ���Ҫ����
	// ���� �� û����ͣ
	if (!CanUpdate()) {
		return;
	}

	// ���µ�ǰ�¼�
	whenUpdate();

	// �������¼�
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
