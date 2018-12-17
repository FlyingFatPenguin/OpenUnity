#pragma once

#include <list>
using namespace std;

// �¼�״̬
enum class EventType {
	NEW,  // �½�
	//RUNNABLE,  // �������Ѿ����ù�init�ˣ�  // �����ò���
	RUNNING,  // ������
	BLOCKED,  // ����
	DEAD  // ��ֹ
};

// �¼��Ƕ� �����ж��� �Ŀ���
// �� �����˶� ��Ч����ʵ��
// �û���ͨ����� �¼� ���޸ĳ����е� ����
// �����еĶ��� ���Զ��� ���� ������Ⱦ
class Event
{
// ����
public:
	Event();
	~Event();

	// ����
	void start();
	// ����
	void block();
	// ��ֹ
	void stop();

	// ����
	void update();

	// ������¼�
	void addSubevent(Event* event);

private:
	// ��ʼ��������һ������ʱ����
	virtual void firstStart();
	// ����ʱ����
	virtual void whenStart();
	// ����ʱ����
	virtual void whenBlock();
	// ��ֹʱ����
	virtual void whenStop();
	// ����ʱ����
	virtual void whenUpdate();

	// �ж��Ƿ����
	// ���Ը��¾ͷ��� true
	// �����Ը��¾ͷ��� false
	bool ifUpdate();
	// �������¼�
	void updateSubevent();

// ����
protected:
	// ������¼�
	list<Event*> subeventList;
	// ��ǰ�¼���״̬
	EventType eventType;
};

