#include "Scene.h"



Scene::Scene()
{
}


Scene::~Scene()
{
	// �ͷ����е�����
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		delete (*o);
	}
	objectlist.clear();
	// �ͷ����еĿؼ�
	for (list<Control*>::iterator c = controlList.begin(); c != controlList.end(); c++)
	{
		delete (*c);
	}
	controlList.clear();
}

void Scene::init()
{
}

void Scene::display()
{	
	// ʹ�������λ��Ƶķ�����������ܳ��ֵ�͸�����������
	//����������ʹ�÷���ֵ��������Ż�����
	mut.lock();
	// ������Ʒ�����⹦��
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->use();
	}
	// ��һ�λ������е�����
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->display();
	}
	// �ڶ��λ�����������
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->display2();
	}
	// �������еĿؼ�
	for (list<Control*>::iterator c = controlList.begin(); c != controlList.end(); c++)
	{
		(*c)->display();
	}
	mut.unlock();
}

void Scene::idle()
{

}

void Scene::changeSize(int width, int height)
{
}

void Scene::mouseCB(int button, int state, int x, int y)
{
}

void Scene::keyEvent(unsigned char key, int x, int y)
{
}

Object* Scene::addObject(Object* obj)
{
	// ����ָ����Ա�֤���ݵ�Ч�ʣ����ڶ��δ���
	// ��ʹ�ø��ƹ��캯������һ���¶��󣬿��Ա�֤��ȫ
	// ��ֱ��ʹ��ָ����ָ������Ķ�����Ա����������ڲ������ָ��
	mut.lock();
	Object* myobj = obj->clone();
	objectlist.push_back(myobj);
	mut.unlock();
	return myobj;
}
