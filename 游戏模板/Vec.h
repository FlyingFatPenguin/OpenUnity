#pragma once
#include <iostream>
#include <gl/glut.h>
#include <math.h>
using namespace std;
class Vec
{
public:
	//������Ĺ��캯��
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

// ��x=1,y=2,z=3��ʽ���
ostream& operator<<(ostream& os, const Vec& vec);
// �ӣ�����ȡ������
Vec operator+(const Vec& a, const Vec& b);
Vec operator-(const Vec& a);
Vec operator-(const Vec& a, const Vec& b);
// �������
GLfloat operator*(const Vec& a, const Vec& b);
// ��������
Vec operator*(const Vec& a, const GLfloat& b);
Vec operator*(const GLfloat& a, const Vec& b);
// �������
Vec cross(const Vec& a, const Vec& b);
// ģ��
GLfloat length(const Vec& a);


//�����ļ�
int test_vec();