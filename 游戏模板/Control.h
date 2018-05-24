#pragma once
#include "Object.h"
#include "Vec.h"
#include <gl/glut.h>
#include "Color.h"
#include "drawCNstring.h"
class Control :
	public Object
{
public:
	Control();
	~Control();
	void display();
private:
	Vec a;
	Vec w;
	Vec h;

	Color bgColor;
	//Color fontColor;
	string word;
};

