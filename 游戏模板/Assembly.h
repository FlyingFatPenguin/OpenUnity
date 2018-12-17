#pragma once
#include "Object.h"
#include <list>
/************
�����
************/
class Assembly :
	public Object
{
public:
	Assembly();
	// �޸ĸ��ƹ��캯��
	Assembly(const Assembly& src);
	~Assembly();
	virtual void display();
	virtual void addObject(Object* obj);
	virtual Object* clone();
	Object* getFirstObject();
protected:
	list<Object*> objectlist;
};

