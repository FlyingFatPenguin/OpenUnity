#include "Light.h"



Light::Light()
{
}


Light::~Light()
{
}

void Light::use(GLenum lightnum)
{
	light_ambient.light(lightnum, GL_AMBIENT);
	light_diffuse.light(lightnum, GL_DIFFUSE);
	light_specular.light(lightnum, GL_SPECULAR);
}