#pragma once
#include "Object.h"
#include <list>
/************
×éºÏÌå
************/
class Assembly :
	public Object
{
public:
	Assembly();
	~Assembly();
	virtual void display();
	virtual void addObject(Object* obj);
	virtual Object* clone();
protected:
	list<Object*> objectlist;
};

