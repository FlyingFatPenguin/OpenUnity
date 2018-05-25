#include "Camera.h"



Camera::Camera()
{
	fovy = 90;
	aspect = 1;
	zNear = 0.1;
	zFar = 400;
}


Camera::~Camera()
{
}

void Camera::use()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(fovy, aspect, zNear, zFar);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(pos.getX(), pos.getY(), pos.getZ(),
		forward.getX(), forward.getY(), forward.getZ(),
		upper.getX(), upper.getY(), upper.getZ());
}

void Camera::display()
{
}

Object * Camera::clone()
{
	return new Camera(*this);
}

