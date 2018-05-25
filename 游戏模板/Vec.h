#pragma once
#include <iostream>
#include <gl/glut.h>
#include <math.h>
using namespace std;
class Vec
{
public:
	//按坐标的构造函数
	explicit Vec(double x = 0, double y = 0, double z = 0);
	double getX() const;
	double getY() const;
	double getZ() const;
	void use();
	//void display();
	~Vec();
private:
	double x;
	double y;
	double z;

};

// 按x=1,y=2,z=3格式输出
ostream& operator<<(ostream& os, const Vec& vec);
// 加，减，取反运算
Vec operator+(const Vec& a, const Vec& b);
Vec operator-(const Vec& a);
Vec operator-(const Vec& a, const Vec& b);
// 点积运算
double operator*(const Vec& a, const Vec& b);
// 数乘向量
Vec operator*(const Vec& a, const double& b);
Vec operator*(const double& a, const Vec& b);
// 叉积运算
Vec cross(const Vec& a, const Vec& b);
// 模长
double length(const Vec& a);


//测试文件
int test_vec();