#include "Control.h"



Control::Control()
{
}


Control::~Control()
{
}

void Control::display()
{
	glDisable(GL_DEPTH_TEST);

	// ���Ʊ���
	glBegin(GL_TRIANGLE_FAN);
	bgColor.use();
	a.use();
	(a + w).use();
	(a + h + w).use();
	(a + h).use();
	glEnd();

	// ��������
	//fontColor.use();
	drawCNString(word.data());

	glEnable(GL_DEPTH_TEST);
}
