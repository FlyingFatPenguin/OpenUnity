#include "Color.h"

Color::Color(GLfloat r, GLfloat g, GLfloat b, GLfloat a)
{
	 rgba[0] = r;
	 rgba[1] = g;
	 rgba[2] = b;
	 rgba[3] = a;
}

void Color::use()
{
	glColor4f(rgba[0],
			  rgba[1],
	          rgba[2],
	          rgba[3]);
}

void Color::material(GLenum face, GLenum pname)
{
	glMaterialfv(face, pname, rgba);
}

void Color::light(GLenum face, GLenum pname)
{
	glLightfv(face, pname, rgba);
}

void Color::setRGBA(GLfloat r, GLfloat g, GLfloat b, GLfloat a)
{
	rgba[0] = r;
	rgba[1] = g;
	rgba[2] = b;
	rgba[3] = a;
}



Color::~Color()
{
}
