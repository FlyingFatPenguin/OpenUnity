#pragma once
#include <iostream>
#include <gl/glut.h>
#include <math.h>
using namespace std;
class Vec
{
public:
	//������Ĺ��캯��
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

// ��x=1,y=2,z=3��ʽ���
ostream& operator<<(ostream& os, const Vec& vec);
// �ӣ�����ȡ������
Vec operator+(const Vec& a, const Vec& b);
Vec operator-(const Vec& a);
Vec operator-(const Vec& a, const Vec& b);
// �������
double operator*(const Vec& a, const Vec& b);
// ��������
Vec operator*(const Vec& a, const double& b);
Vec operator*(const double& a, const Vec& b);
// �������
Vec cross(const Vec& a, const Vec& b);
// ģ��
double length(const Vec& a);


//�����ļ�
int test_vec();