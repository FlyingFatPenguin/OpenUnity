#include "Light.h"



Light::Light()
{
}


Light::~Light()
{
}

void Light::use(GLenum lightnum)
{
	// 不检查输入值的合法性
	warning();
	// 使用了默认值，就自动为其分配编号
	if (lightnum == 0)
		lightnum = getDisableLight();

	light_ambient.light(lightnum, GL_AMBIENT);
	light_diffuse.light(lightnum, GL_DIFFUSE);
	light_specular.light(lightnum, GL_SPECULAR);
}

GLenum Light::getDisableLight()
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
