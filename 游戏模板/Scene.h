#pragma once
#include "Control.h"
#include "Object.h"
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
protected:
	// ��Ʒ�б�
	list<Object*> objectlist;
	// �ؼ��б�
	list<Control*> controlList;
};

