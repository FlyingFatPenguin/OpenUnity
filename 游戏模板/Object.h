#pragma once
#include "Vec.h"
class Object
{
public:
	Object();
	~Object();
	void display();
	void idle();
	void changeSize(int width, int height);
	void mouseCB(int button, int state, int x, int y);
	void keyEvent(unsigned char key, int x, int y);
protected:
	Vec pos;//位置
	Vec forward;//前向
	Vec upper;//上方
};

