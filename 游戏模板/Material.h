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

	Color ambientColor;	   //������ʵĻ�������ɫ��Ϊ0  
	Color diffuseColor;	   //������ʵ����������ɫ��Ϊ0  
	Color specularColor;	   //������ʵľ��淴�����ɫ��Ϊ0 
	Color emissionColor;	   //������ʵķ������ɫ��Ϊƫ��ɫ
private:
	GLfloat sun_mat_shininess;	// ������ʵķ���Ƕ�
};