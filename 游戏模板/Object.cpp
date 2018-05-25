#include "Object.h"



Object::Object()
{
}


Object::~Object()
{
}

void Object::display()
{
	glColor3f(1, 0, 0);
	glutWireCube(0.5);
}

void Object::idle()
{
}

void Object::changeSize(int width, int height)
{
}

void Object::mouseCB(int button, int state, int x, int y)
{
}

void Object::keyEvent(unsigned char key, int x, int y)
{
}

void Object::use()
{
}

void Object::translation_rotation()
{
	glTranslatef(pos.getX(),pos.getY(),pos.getZ());
	//// 求出方向矢量
	//Vec u = upper - pos;
	//Vec f = forward - pos;

	//// 将u和f向量正交化
	//// 消除u在f方向上的分量
	//u = u - (f * u) / length(f) / length(f) * f;
	//// 计算旋转角度
}
