#pragma once
#include "Object.h"
class Camera :
	public Object
{
public:
	Camera();
	~Camera();
	// ÷ÿ‘ÿuse
	void use();
	// ÷ÿ‘ÿdisplay
	void display();
	virtual Object* clone();
private:
	GLfloat fovy;
	GLfloat aspect;
	GLfloat zNear;
	GLfloat zFar;

};

