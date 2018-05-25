#pragma once
#include "Control.h"
#include "Object.h"
#include "Camera.h"
#include <list>
using namespace std;


class Scene
{
public:
	Scene();
	~Scene();
	void display();
	void idle();
	void changeSize(int width, int height);
	void mouseCB(int button, int state, int x, int y);
	void keyEvent(unsigned char key, int x, int y);
	void addObject(Object obj);
protected:
	// ��Ʒ�б�
	list<Object*> objectlist;
	// �ؼ��б�
	list<Control*> controlList;
};

/*************************************************
���ļ�Ϊ�����࣬ʹ�ó������ܿ����еĶ���
���󱻷�Ϊ������
object��control
obj����Ϸ����ĸ������壬Ϊ��ά��
con��һЩ�ؼ�������Ϊ��ά
���ߵĻ���˳�򣬷�������Ӧ˳��ͬ�����Խ�������
**************************************************/