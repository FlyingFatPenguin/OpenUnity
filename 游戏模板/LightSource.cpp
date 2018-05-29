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
	//// 平行光源
	//p[3] = 1;
	// 点光源
	p[3] = 0;
	glLightfv(GL_LIGHT0, GL_POSITION, p);
	light.use();
}
