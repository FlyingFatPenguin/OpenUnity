#pragma once
#include <gl/glut.h>
class Color
{
public:
	Color(double r=0,double g=0,double b=0,double a=1);
	void use();
	~Color();
private:
	double rgba[4];
};

