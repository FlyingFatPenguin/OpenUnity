#pragma once
/******************
����Ϊ�����࣬��������ɫ��
*******************/
#include "Color.h"


class Material
{
public:
	Material();
	~Material();
	void use();
private:
	Color sun_mat_ambient;	   //������ʵĻ�������ɫ��Ϊ0  
	Color sun_mat_diffuse;	   //������ʵ����������ɫ��Ϊ0  
	Color sun_mat_specular;	   //������ʵľ��淴�����ɫ��Ϊ0 
	Color sun_mat_emission;	   //������ʵķ������ɫ��Ϊƫ��ɫ
	GLfloat sun_mat_shininess;
};