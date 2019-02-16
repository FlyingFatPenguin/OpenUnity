#pragma once
#include "Color.h"
#include "myfunc.h"

class Light
{
public:
	Light();
	~Light();
	// 使用光照，允许设定其对应的光源的编号，如果没有，就自动查询当前未使用的编号
	void use(GLenum lightnum);
private:
	Color light_ambient;     //RGBA模式的环境光
	Color light_diffuse;	   //RGBA模式的漫反射光
	Color light_specular;	   //RGBA模式下的镜面光
};

