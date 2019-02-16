#include "Material.h"



Material::Material()
{
	sun_mat_ambient.setRGBA(0.2, 0.5, 0.2, 1);
	sun_mat_diffuse.setRGBA(0.2, 0.5, 0.2, 1);
	sun_mat_specular.setRGBA(0.9, 0.9, 0.9, 1);
	sun_mat_emission.setRGBA(0.1,0.1,0.1,1);
	sun_mat_shininess = 30;
}


Material::~Material()
{
}

void Material::use()
{
	sun_mat_ambient.material(GL_FRONT_AND_BACK, GL_AMBIENT);
	sun_mat_diffuse.material(GL_FRONT_AND_BACK, GL_DIFFUSE);
	sun_mat_specular.material(GL_FRONT_AND_BACK, GL_SPECULAR);
	sun_mat_emission.material(GL_FRONT_AND_BACK, GL_EMISSION);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, sun_mat_shininess);
}
