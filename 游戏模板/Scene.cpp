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

void Scene::display()
{
	// �������е�����
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->display();
	}
	// �������еĿؼ�
	for (list<Control*>::iterator c = controlList.begin(); c != controlList.end(); c++)
	{
		(*c)->display();
	}
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
