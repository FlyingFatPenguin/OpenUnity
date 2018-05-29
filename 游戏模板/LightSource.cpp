#include "LightSource.h"



LightSource::LightSource()
{
}


LightSource::~LightSource()
{
}

void LightSource::use()
{
	GLenum lightnum = getDisableLight();

	GLfloat p[4] = { pos.getX(),pos.getY(),pos.getZ()};
	//// 平行光源
	//p[3] = 1;
	// 点光源
	p[3] = 0;
	glLightfv(lightnum, GL_POSITION, p);
	light.use(lightnum);
	glEnable(lightnum);
	glEnable(GL_LIGHTING);
}

void LightSource::display()
{
}

Object * LightSource::clone()
{
	return new LightSource(*this);
}

GLenum LightSource::getDisableLight()
{
	if (!glIsEnabled(GL_LIGHT0))
		return GL_LIGHT0;
	else if (!glIsEnabled(GL_LIGHT1))
		return GL_LIGHT1;
	else if (!glIsEnabled(GL_LIGHT2))
		return GL_LIGHT2;
	else if (!glIsEnabled(GL_LIGHT3))
		return GL_LIGHT3;
	else if (!glIsEnabled(GL_LIGHT4))
		return GL_LIGHT4;
	else if (!glIsEnabled(GL_LIGHT5))
		return GL_LIGHT5;
	else if (!glIsEnabled(GL_LIGHT6))
		return GL_LIGHT6;
	else if (!glIsEnabled(GL_LIGHT7))
		return GL_LIGHT7;
	else
		return 0;
}
