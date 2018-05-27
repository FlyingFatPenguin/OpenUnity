#pragma once
#include "Object.h"
class Camera :
	public Object
{
public:
	Camera();
	~Camera();
	// ����use
	void use();
	// ����display
	void display();
	virtual Object* clone();
private:
	GLfloat fovy;
	GLfloat aspect;
	GLfloat zNear;
	GLfloat zFar;

};

