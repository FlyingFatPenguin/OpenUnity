#include "Object.h"



Object::Object()
{
}


Object::~Object()
{
}

void Object::display()
{
	glColor3f(0.2, 0.7, 0.3);
	glutSolidCube(0.5);
	glColor3f(0, 0, 0);
	glutWireCube(0.5);
}

void Object::display2()
{
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

Object * Object::clone()
{
	return new Object(*this);
}

int Object::setPos(Vec pos)
{
	this->pos = pos;
	return 0;
}

int Object::setForward(Vec forward)
{
	this->forward = forward;
	return 0;
}

int Object::setUpper(Vec upper)
{
	this->upper = upper;
	return 0;
}

void Object::translation_rotation()
{
	glTranslatef(pos.getX(),pos.getY(),pos.getZ());
	//// �������ʸ��
	//Vec u = upper - pos;
	//Vec f = forward - pos;

	//// ��u��f����������
	//// ����u��f�����ϵķ���
	//u = u - (f * u) / length(f) / length(f) * f;
	//// ������ת�Ƕ�
}
