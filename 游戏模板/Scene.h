#pragma once
#include "Control.h"
#include "Object.h"
#include "Camera.h"
#include <list>
#include <mutex>
using namespace std;


class Scene
{
public:
	Scene();
	~Scene();
	// ������ʼ��
	virtual void init();
	virtual void display();
	virtual void idle();
	virtual void changeSize(int width, int height);
	virtual void mouseCB(int button, int state, int x, int y);
	virtual void keyEvent(unsigned char key, int x, int y);
	virtual Object* addObject(Object* obj);
protected:
	// ��Ʒ�б�
	list<Object*> objectlist;
	// �ؼ��б�
	list<Control*> controlList;
	mutex mut;
};

/*************************************************
���ļ�Ϊ�����࣬ʹ�ó������ܿ����еĶ���
���󱻷�Ϊ������
object��control
obj����Ϸ����ĸ������壬Ϊ��ά��
con��һЩ�ؼ�������Ϊ��ά
���ߵĻ���˳�򣬷�������Ӧ˳��ͬ�����Խ�������
**************************************************/