#include "全局数据.h"
#include "Scene.h"
// 显示窗口的位置坐标
int WIN_POS_X = 200;
int WIN_POS_Y = 0;
// 显示窗口的长宽
int WIN_WIDTH = 1200;
int WIN_HEIGHT = 700;
// 当前绘制的场景
Scene* current_scene = 0;
// 启动时间
clock_t start_time;
// 当前时间
clock_t current_time;

