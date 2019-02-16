#pragma once
#include "Color.h"
#include "myfunc.h"

class Light
{
public:
	Light();
	~Light();
	// ʹ�ù��գ������趨���Ӧ�Ĺ�Դ�ı�ţ����û�У����Զ���ѯ��ǰδʹ�õı��
	void use(GLenum lightnum);
private:
	Color light_ambient;     //RGBAģʽ�Ļ�����
	Color light_diffuse;	   //RGBAģʽ���������
	Color light_specular;	   //RGBAģʽ�µľ����
};

