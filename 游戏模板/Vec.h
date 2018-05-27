#pragma once
#include <iostream>
#include <gl/glut.h>
#include <math.h>
using namespace std;
class Vec
{
public:
	//按坐标的构造函数
	explicit Vec(GLfloat x = 0, GLfloat y = 0, GLfloat z = 0);
	GLfloat getX() const;
	GLfloat getY() const;
	GLfloat getZ() const;
	void use();
	//void display();
	~Vec();
private:
	GLfloat x;
	GLfloat y;
	GLfloat z;
};

// 按x=1,y=2,z=3格式输出
ostream& operator<<(ostream& os, const Vec& vec);
// 加，减，取反运算
Vec operator+(const Vec& a, const Vec& b);
Vec operator-(const Vec& a);
Vec operator-(const Vec& a, const Vec& b);
// 点积运算
GLfloat operator*(const Vec& a, const Vec& b);
// 数乘向量
Vec operator*(const Vec& a, const GLfloat& b);
Vec operator*(const GLfloat& a, const Vec& b);
// 叉积运算
Vec cross(const Vec& a, const Vec& b);
// 模长
GLfloat length(const Vec& a);


//测试文件
int test_vec();