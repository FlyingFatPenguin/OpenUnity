#pragma once
#include <gl/glut.h>
class Color
{
public:
	Color(GLfloat r=0,GLfloat g=0,GLfloat b=0,GLfloat a=1);
	void use();//glColor3f
	void Material(GLenum face,GLenum pname);//glMaterial3f
	~Color();
private:
	GLfloat rgba[4];
};

