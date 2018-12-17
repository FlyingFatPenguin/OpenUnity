#pragma once
#include <gl/glut.h>
#include <Windows.h>
#include "全局数据.h"
#include "Scene.h"
#include <time.h>
#include <thread>
int myOpenGLmain(int argc, char * argv[], Scene* scene);

/****************
该文件的作用是提供一个面向过程到面向对象的接口
因为我们无法将类的成员函数指针传递给glut的接口
所以我们使用了普通的函数过渡了一下
****************/