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
private:
	Light light;
};

