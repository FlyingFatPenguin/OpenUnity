#pragma once
#include "Vec.h"
#include <math.h>
class Object
{
public:
	Object();
	~Object();
	// 第一次绘制
	virtual void display();
	// 第二次绘制方法，主要是为了绘制半透明体
	virtual void display2();
	//// 第一次绘制渲染器
	//virtual void displayRenderer();
	//// 第二次绘制渲染器
	//virtual void displayRenderer2();

	// 对于特殊功能的物体启动特殊功能，如相机设置视角等
	virtual void use();

	// 对特殊事件的响应，暂时没有什么用途
	virtual void idle();
	virtual void changeSize(int width, int height);
	virtual void mouseCB(int button, int state, int x, int y);
	virtual void keyEvent(unsigned char key, int x, int y);

	// 返回一个类型一致的指针
	virtual Object* clone();

	// 设置位置
	virtual int setPos(Vec pos);
	virtual int setForward(Vec forward);
	virtual int setUpper(Vec upper);
	//获取位置
	Vec getPos();

	// 移动函数，参数为移动的方向
	virtual void move(const Vec& vec);
	// 移动函数，参数为移动的目的地
	virtual void moveto(const Vec& target_pos);

	// 设置默认的前向
	void set_default_forward(Vec default_forward);
protected:
	void rotation();
	void translation();
	Vec pos;//位置
	Vec forward;//前向
	Vec upper;//上方

	//默认方向
	Vec default_forward;
	Vec default_upper;
};

