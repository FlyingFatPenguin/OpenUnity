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
	//// �������ʸ��
	//Vec u = upper - pos;
	//Vec f = forward - pos;

	//// ��u��f����������
	//// ����u��f�����ϵķ���
	//u = u - (f * u) / length(f) / length(f) * f;
	//// ������ת�Ƕ�
}
