#pragma once
// 比物体增加了材质属性
#include "Object.h"
#include "Material.h"
class GameObject :
	public Object
{
public:
	GameObject();
	virtual void display();
	~GameObject();
	// 返回一个类型一致的指针
	virtual Object* clone();
private:
	Material material;
};

