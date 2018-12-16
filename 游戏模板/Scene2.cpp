#include "Scene2.h"

// obj对象绕 center 以 (0，0，1) 为轴旋转
void rotateEvent(Object* obj, Vec center)
{
	extern clock_t current_time;
	double alfa = 0;
	Vec r = obj->getPos() - center;
	while (TRUE)
	{
		alfa = current_time / 1000.0;
		//cout << current_time;
		obj->setPos(center+rotate(r, Vec(0,0,1), alfa));
		Sleep(30);
	}
}

void myMain(Scene* scene) {
	LightSource ls = LightSource();
	ls.light.light_ambient = Color(0, 0, 0);
	ls.light.light_diffuse = Color(1, 1, 1, 1);
	ls.setPos(Vec(1,1,1));
	scene->addObject(&ls);

	GameObject go = GameObject();
	go.material.ambientColor = Color(1, 1, 1);
	go.material.diffuseColor = Color(1, 0, 0);
	scene->addObject(&go);

	Camera c = Camera();
	c.setPos(Vec(1,1,1));
	Camera* pc = dynamic_cast<Camera*>(scene->addObject(&c));

	thread t(rotateEvent, pc, Vec(0, 0, 0));
	t.detach();
}

Scene2::Scene2()
{
	thread tmain = thread(myMain,this);
	tmain.detach();
}

Scene2::~Scene2()
{
}
