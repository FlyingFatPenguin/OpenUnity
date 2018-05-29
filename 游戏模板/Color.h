#pragma once
#include <gl/glut.h>
class Color
{
public:
	Color(GLfloat r=0,GLfloat g=0,GLfloat b=0,GLfloat a=1);
	void use();//glColor3f
	void material(GLenum face,GLenum pname);//glMaterialfv
	void light(GLenum face, GLenum pname);// gllightfv
	void setRGBA(GLfloat r, GLfloat g, GLfloat b, GLfloat a);
	~Color();
private:
	GLfloat rgba[4];
};

