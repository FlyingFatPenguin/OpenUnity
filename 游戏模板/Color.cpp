#include "Color.h"

Color::Color(double r, double g, double b, double a)
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

Color::~Color()
{
}
