#include "Material.h"



Material::Material()
{
	ambientColor.setRGBA(0.250000, 0.250000, 0.250000, 1.000000);
	diffuseColor.setRGBA(0.400000, 0.400000, 0.400000, 1.000000);
	specularColor.setRGBA(0.774597, 0.774597, 0.774597, 1.000000);
	//sun_mat_emission.setRGBA(0.2,0.2,0.2,1);
	sun_mat_shininess = 76.800003;
}


Material::~Material()
{
}

void Material::use()
{
	ambientColor.material(GL_FRONT_AND_BACK, GL_AMBIENT);
	diffuseColor.material(GL_FRONT_AND_BACK, GL_DIFFUSE);
	specularColor.material(GL_FRONT_AND_BACK, GL_SPECULAR);
	emissionColor.material(GL_FRONT_AND_BACK, GL_EMISSION);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, sun_mat_shininess);
}
