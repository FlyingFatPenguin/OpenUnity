#include "Material.h"



Material::Material()
{
	sun_mat_ambient.setRGBA(0.2, 0.5, 0.2, 1);
	sun_mat_diffuse.setRGBA(0.2, 0.5, 0.2, 1);
	sun_mat_specular.setRGBA(0.9, 0.9, 0.9, 1);
	sun_mat_emission = sun_mat_diffuse;
	sun_mat_shininess = 10;
}


Material::~Material()
{
}

void Material::use()
{
	sun_mat_ambient.material(GL_FRONT, GL_AMBIENT);
	sun_mat_diffuse.material(GL_FRONT, GL_DIFFUSE);
	sun_mat_specular.material(GL_FRONT, GL_SPECULAR);
	sun_mat_emission.material(GL_FRONT, GL_EMISSION);
	glMaterialf(GL_FRONT, GL_SHININESS, sun_mat_shininess);
}
