#include "Object.h"



Object::Object():default_forward(1,0,0),default_upper(0,0,1)
{
	upper = default_upper;

}


Object::~Object()
{
}

void Object::display()
{
	glPushMatrix();
	{
		translation();
		rotation();
		glColor3f(0.2, 0.7, 0.3);
		glutSolidCube(0.5);
		glColor3f(0, 0, 0);
		glutWireCube(0.5);
	}
	glPopMatrix();
}

void Object::display2()
{
}

void Object::idle()
{
}

void Object::changeSize(int width, int height)
{
}

void Object::mouseCB(int button, int state, int x, int y)
{
}

void Object::keyEvent(unsigned char key, int x, int y)
{
}

void Object::use()
{
}

Object * Object::clone()
{
	return new Object(*this);
}

int Object::setPos(Vec pos)
{
	this->pos = pos;
	return 0;
}

int Object::setForward(Vec forward)
{
	this->forward = forward;
	return 0;
}

int Object::setUpper(Vec upper)
{
	this->upper = upper;
	return 0;
}

void Object::move(const Vec& vec)
{
	pos = pos + vec;
	upper = upper + vec;
	forward = forward + vec;
}

void Object::moveto(const Vec& target_pos)
{
	Vec vec = target_pos - pos;
	pos = target_pos;
	forward = forward + vec;
	upper = upper + vec;
}

void Object::set_default_forward(Vec default_forward)
{
	this->default_forward = default_forward;
}

void Object::rotation()
{
	// 旋转
	// 求出方向矢量
	Vec u = upper - pos;
	Vec f = forward - pos;

	if (length(u) < 1e-6)
	{
		u = default_upper;
		upper = u + pos;
	}
	if (length(f) < 1e-6)
	{
		f = default_forward;
		forward = f + pos;
	}

	// 将u和f向量正交化
	// 消除u在f方向上的分量
	u = u - (f * u) / length(f) / length(f) * f;

	// 计算旋转角度，将前向向量转成一致
	Vec ax_f = cross(default_forward,f);
	// 弧度
	GLfloat angle_fr = angle(f, default_forward);
	Vec u2;
	if (length(ax_f) > 1e-6)
	{
		// 度制
		GLfloat angle_fd = angle_fr * 57.29578;
		glRotatef(angle_fd, ax_f.getX(), ax_f.getY(), ax_f.getZ());
		// 将上向向量转为一致
		u2 = rotate(default_upper, ax_f, angle_fr);
		//cout << u2<<' '<<u << endl;
	}
	else
	{
		u2 = u;
	}

	//Vec ax_u = cross(u2,u);
	Vec ax_u = default_forward;
	GLfloat angle_ur = angle(u2, u);
	//cout << ax_u << "  " << angle_ur * 57.29578 << endl;
	glRotatef(angle_ur*57.29578, ax_u.getX(), ax_u.getY(), ax_u.getZ());
}

void Object::translation()
{
	// 平移
	glTranslatef(pos.getX(), pos.getY(), pos.getZ());
}
