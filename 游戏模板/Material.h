#pragma once
/******************
该类为材质类，关联了颜色类
*******************/
#include "Color.h"


class Material
{
public:
	Material();
	~Material();
	void use();

	Color ambientColor;	   //定义材质的环境光颜色，为0  
	Color diffuseColor;	   //定义材质的漫反射光颜色，为0  
	Color specularColor;	   //定义材质的镜面反射光颜色，为0 
	Color emissionColor;	   //定义材质的辐射广颜色，为偏红色
private:
	GLfloat sun_mat_shininess;	// 定义材质的反射角度
};