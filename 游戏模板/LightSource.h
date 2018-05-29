#pragma once
#include "Object.h"
#include "Light.h"

class LightSource :
	public Object
{
public:
	LightSource();
	~LightSource();
	//  π”√π‚’’
	virtual void use();
private:
	Light light;
};

