#pragma once
#include "Object.h"
#include "Light.h"

class LightSource :
	public Object
{
public:
	LightSource();
	~LightSource();
	// 使用光照
	virtual void use();
	// 不绘制任何东西
	void display();
	// 返回一个类型一致的指针
	virtual Object* clone();
private:
	// 获取当前没有使用的光源，都被使用了就返回0
	GLenum getDisableLight();

	Light light;
};

