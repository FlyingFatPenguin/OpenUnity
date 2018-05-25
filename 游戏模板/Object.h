#pragma once
#include "Vec.h"
class Object
{
public:
	Object();
	~Object();
	virtual void display();
	virtual void idle();
	virtual void changeSize(int width, int height);
	virtual void mouseCB(int button, int state, int x, int y);
	virtual void keyEvent(unsigned char key, int x, int y);
	// 对于特殊功能的物体启动特殊功能
	virtual void use();
	// 返回一个类型一致的指针
	virtual Object* clone();
	virtual int setPos(Vec pos);
	virtual int setForward(Vec forward);
	virtual int setUpper(Vec upper);
protected:
	void translation_rotation();
	Vec pos;//位置
	Vec forward;//前向
	Vec upper;//上方
};

