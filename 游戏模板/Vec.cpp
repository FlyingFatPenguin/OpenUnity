#include "Vec.h"



//Vec::Vec():Vec(0,0,0)
//{
//}

Vec::Vec(GLfloat x, GLfloat y, GLfloat z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


GLfloat Vec::getX() const
{
	return x;
}


GLfloat Vec::getY() const
{
	return y;
}

GLfloat Vec::getZ() const
{
	return z;
}

void Vec::use()
{
	glVertex3f(x,y,z);
}

//void Vec::display()
//{
//	return;
//}

Vec::~Vec()
{
}

ostream & operator<<(ostream & os, const Vec & vec)
{
	os << "x=" << vec.getX();
	os << ",y=" << vec.getY();
	os << ",z=" << vec.getZ();
	return os;
}

Vec operator+(const Vec & a, const Vec & b)
{
	return Vec(a.getX()+b.getX(),
			   a.getY()+b.getY(),
			   a.getZ()+b.getZ());
}

Vec operator-(const Vec & a)
{
	return Vec(-a.getX(),-a.getY(),-a.getZ());
}

Vec operator-(const Vec & a, const Vec & b)
{
	return Vec(a+(-b));
}

GLfloat operator*(const Vec & a, const Vec & b)
{
	return a.getX()*b.getX()
		+ a.getY()*b.getY()
		+ a.getZ()*b.getZ();
}

Vec operator*(const Vec & a, const GLfloat & b)
{
	return Vec(a.getX()*b, a.getY()*b, a.getZ()*b);
}

Vec operator*(const GLfloat & a, const Vec & b)
{
	return b*a;
}


Vec cross(const Vec & a, const Vec & b)
{
	return Vec(a.getY()*b.getZ() - a.getZ()*b.getY(),
			   a.getZ()*b.getX() - a.getX()*b.getZ(),
			   a.getX()*b.getY() - a.getY()*b.getX());
}

GLfloat length(const Vec & a)
{
	return sqrt(a*a);
}


int test_vec()
{
	// 测试Vec类
	Vec a(1, 2, 3);
	Vec b(3, 2, 1);
	Vec c = a + b;
	Vec d = a - b;
	cout << a << endl << b << endl << c << endl << d << endl;
	cout << a * b << endl;
	// 使用matlab验证过
	cout << cross(a, b) << endl;
	return 0;
}