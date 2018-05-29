#pragma once
#include "Object.h"
#include "Light.h"

class LightSource :
	public Object
{
public:
	LightSource();
	~LightSource();
	// สนำรนโีี
	virtual void use();
private:
	Light light;
};

