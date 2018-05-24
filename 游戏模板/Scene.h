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
	// 物品列表
	list<Object*> objectlist;
	// 控件列表
	list<Control*> controlList;
};

