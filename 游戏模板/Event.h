#pragma once

#include <list>
using namespace std;

// 事件状态
enum class EventType {
	NEW,  // 新建
	//RUNNABLE,  // 就绪（已经调用过init了）  // 发现用不上
	RUNNING,  // 运行中
	BLOCKED,  // 阻塞
	DEAD  // 终止
};

// 事件是对 场景中对象 的控制
// 是 物体运动 等效果的实现
// 用户在通过设计 事件 来修改场景中的 对象
// 场景中的对象 则自动由 场景 绘制渲染
class Event
{
// 方法
public:
	Event();
	~Event();

	// 启动
	void start();
	// 阻塞
	void block();
	// 终止
	void stop();

	// 更新
	void update();

	// 添加子事件
	void addSubevent(Event* event);

private:
	// 初始化，当第一次启动时调用
	virtual void firstStart();
	// 启动时调用
	virtual void whenStart();
	// 阻塞时调用
	virtual void whenBlock();
	// 终止时调用
	virtual void whenStop();
	// 更新时调用
	virtual void whenUpdate();

	// 判断是否更新
	// 可以更新就返回 true
	// 不可以更新就返回 false
	bool ifUpdate();
	// 更新子事件
	void updateSubevent();

// 数据
protected:
	// 存放子事件
	list<Event*> subeventList;
	// 当前事件的状态
	EventType eventType;
};

