#pragma once
#include "Object.h"
#include "Light.h"

class LightSource :
	public Object
{
public:
	LightSource();
	~LightSource();
	// ʹ�ù���
	virtual void use();
	// �������κζ���
	void display();
	// ����һ������һ�µ�ָ��
	virtual Object* clone();
private:
	// ��ȡ��ǰû��ʹ�õĹ�Դ������ʹ���˾ͷ���0
	GLenum getDisableLight();

	Light light;
};

