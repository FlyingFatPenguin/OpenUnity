#include "LightSource.h"



LightSource::LightSource()
{
}


LightSource::~LightSource()
{
}

void LightSource::use()
{
	GLfloat p[4] = { pos.getX(),pos.getY(),pos.getZ()};
	//// ƽ�й�Դ
	//p[3] = 1;
	// ���Դ
	p[3] = 0;
	glLightfv(GL_LIGHT0, GL_POSITION, p);
	light.use();
}
