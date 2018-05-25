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
	double fovy;
	double aspect;
	double zNear;
	double zFar;

};

