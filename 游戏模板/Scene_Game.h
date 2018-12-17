#pragma once
#include "Scene.h"
#include "全局数据.h"
#include "GameObject.h"
#include "LightSource.h"
#include "Assembly.h"
#include <math.h>
#include <thread>
using namespace std;

class Scene_Game :
	public Scene
{
public:
	Scene_Game();
	~Scene_Game();
};

