#include "Scene.h"



Scene::Scene()
{
}


Scene::~Scene()
{
	// 释放所有的物体
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		delete (*o);
	}
	objectlist.clear();
	// 释放所有的控件
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
	// 使用了两次绘制的方法来解决可能出现的透明物体的问题
	//将来还可以使用返回值对其进行优化处理
	mut.lock();
	// 启动物品的特殊功能
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->use();
	}
	// 第一次绘制所有的物体
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->display();
	}
	// 第二次绘制所有物体
	for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
	{
		(*o)->display2();
	}
	// 绘制所有的控件
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
	// 传递指针可以保证传递的效率，用于多层次传递
	// 而使用复制构造函数生成一个新对象，可以保证安全
	// 不直接使用指针所指向的外界的对象可以避免外界持有内部对象的指针
	mut.lock();
	Object* myobj = obj->clone();
	objectlist.push_back(myobj);
	mut.unlock();
	return myobj;
}
