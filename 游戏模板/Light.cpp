#include "Light.h"



Light::Light()
{
	light_ambient = Color(1, 0, 0, 1);
	light_diffuse = Color(1, 0, 0, 1);
	light_specular = Color(1, 0, 0, 1);
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