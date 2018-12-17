#pragma once
#include "Object.h"
#include <list>
/************
组合体
************/
class Assembly :
	public Object
{
public:
	Assembly();
	// 修改复制构造函数
	Assembly(const Assembly& src);
	~Assembly();
	virtual void display();
	virtual void addObject(Object* obj);
	virtual Object* clone();
	Object* getFirstObject();
protected:
	list<Object*> objectlist;
};

