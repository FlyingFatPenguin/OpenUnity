#include "Color.h"

Color::Color(double r, double g, double b, double a)
{
	 this->r = r;
	 this->g = g;
	 this->b = b;
	 this->a = a;
}

void Color::use()
{
	glColor4f(r, g, b, a);
}

Color::~Color()
{
}
