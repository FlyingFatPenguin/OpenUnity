#pragma once
#include "Vec.h"
#include <math.h>
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
	// ����λ��
	virtual int setPos(Vec pos);
	virtual int setForward(Vec forward);
	virtual int setUpper(Vec upper);
	Vec getPos();
	// �ƶ�����������Ϊ�ƶ��ķ���
	virtual void move(const Vec& vec);
	// �ƶ�����������Ϊ�ƶ���Ŀ�ĵ�
	virtual void moveto(const Vec& target_pos);
	void set_default_forward(Vec default_forward);
protected:
	void rotation();
	void translation();
	Vec pos;//λ��
	Vec forward;//ǰ��
	Vec upper;//�Ϸ�

	//Ĭ�Ϸ���
	Vec default_forward;
	Vec default_upper;
};

