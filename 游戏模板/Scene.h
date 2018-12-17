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
	// 场景初始化
	virtual void init();
	virtual void display();
	virtual void idle();
	virtual void changeSize(int width, int height);
	virtual void mouseCB(int button, int state, int x, int y);
	virtual void keyEvent(unsigned char key, int x, int y);
	virtual Object* addObject(Object* obj);
protected:
	// 物品列表
	list<Object*> objectlist;
	// 控件列表
	list<Control*> controlList;
	mutex mut;
};

/*************************************************
该文件为场景类，使用场景来管控所有的对象
对象被分为了两类
object和control
obj是游戏世界的各种物体，为三维的
con是一些控件，基本为二维
两者的绘制顺序，方法和响应顺序不同，所以将其区分
**************************************************/