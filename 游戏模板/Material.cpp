#include "Material.h"



Material::Material()
{
	sun_mat_ambient.setRGBA(0.2, 0.5, 0.2, 1);
	sun_mat_diffuse = sun_mat_ambient;
	sun_mat_specular.setRGBA(0.3, 0.3, 0.3, 1);
	sun_mat_emission = sun_mat_ambient;
	sun_mat_shininess = 30;
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
