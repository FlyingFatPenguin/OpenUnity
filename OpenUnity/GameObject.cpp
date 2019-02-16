#include "GameObject.h"



GameObject::GameObject()
{
}

void GameObject::display()
{
	material.use();
	Object::display();
}


GameObject::~GameObject()
{
}

Object * GameObject::clone()
{
	return new GameObject(*this);
}
