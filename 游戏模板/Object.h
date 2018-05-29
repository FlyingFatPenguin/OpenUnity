#pragma once
#include "Vec.h"
class Object
{
public:
	Object();
	~Object();
	// ��һ�λ���
	virtual void display();
	// �ڶ��λ��Ʒ���
	virtual void display2();
	virtual void idle();
	virtual void changeSize(int width, int height);
	virtual void mouseCB(int button, int state, int x, int y);
	virtual void keyEvent(unsigned char key, int x, int y);
	// �������⹦�ܵ������������⹦��
	virtual void use();
	// ����һ������һ�µ�ָ��
	virtual Object* clone();
	virtual int setPos(Vec pos);
	virtual int setForward(Vec forward);
	virtual int setUpper(Vec upper);
protected:
	void translation_rotation();
	Vec pos;//λ��
	Vec forward;//ǰ��
	Vec upper;//�Ϸ�
};

