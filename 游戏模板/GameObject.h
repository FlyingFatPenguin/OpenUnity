#pragma once
// �����������˲�������
#include "Object.h"
#include "Material.h"
class GameObject :
	public Object
{
public:
	GameObject();
	virtual void display();
	~GameObject();
	// ����һ������һ�µ�ָ��
	virtual Object* clone();
private:
	Material material;
};

