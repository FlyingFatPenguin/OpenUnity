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
private:
	Color sun_mat_ambient;	   //定义材质的环境光颜色，为0  
	Color sun_mat_diffuse;	   //定义材质的漫反射光颜色，为0  
	Color sun_mat_specular;	   //定义材质的镜面反射光颜色，为0 
	Color sun_mat_emission;	   //定义材质的辐射广颜色，为偏红色
	GLfloat sun_mat_shininess;
};