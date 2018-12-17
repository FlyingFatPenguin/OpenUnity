#include "Assembly.h"



Assembly::Assembly()
{
}


Assembly::~Assembly()
{
}

void Assembly::display()
{
	glPushMatrix();
	{
		translation();
		rotation();
		for (list<Object*>::iterator o = objectlist.begin(); o != objectlist.end(); o++)
		{
			(*o)->display();
		}
	}
	glPopMatrix();

}

void Assembly::addObject(Object * obj)
{
	objectlist.push_back(obj->clone());
}

Object * Assembly::clone()
{
	return new Assembly(*this);
}

Object* Assembly::getFirstObject()
{
	return *(objectlist.begin());
}
