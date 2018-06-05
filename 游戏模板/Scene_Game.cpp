#include "Scene_Game.h"

void rotateEvent(Object* obj)
{
	extern clock_t current_time;
	double alfa=0;
	double r = 10;
	while (TRUE)
	{
		alfa = current_time/1000.0;
		//cout << current_time;
		obj->setPos(Vec(r*cos(alfa),r*sin(alfa),7));
		Sleep(30);
	}
}
void create_building(Scene* scene)
{
	LightSource ls;
	ls.setPos(Vec(10, 10, 10));
	LightSource* pls = dynamic_cast<LightSource*>(scene->addObject(&ls));
	thread t1(rotateEvent, pls);
	t1.detach();
	
	Camera c;
	c.setPos(Vec(0, 5, 5));
	c.setUpper(Vec(0, 0, 1e6));
	Camera* pc = dynamic_cast<Camera*>(scene->addObject(&c));
	/*thread t2(rotateEvent,pc);
	t2.detach();*/

	
	//GameObject go;
	//go.setPos(Vec(0, 0, 0));
	//go.setForward(Vec(0, 0, 0));
	////addObject(&go);
	//GameObject go2;
	//go2.setPos(Vec(0, 0, 0.5));
	//go2.setForward(Vec(1, 1, 0.5));
	////addObject(&go2);
	//Assembly assembly;
	//assembly.setPos(Vec(0,0,0));
	//assembly.setForward(Vec(0,1,0));
	//assembly.setUpper(Vec(0, 0, 1e6));
	//assembly.addObject(&go);
	//assembly.addObject(&go2);
	//addObject(&assembly);
	////assembly.setPos(Vec(-1,0,0));
	//assembly.move(Vec(-1,0,0));
	//addObject(&assembly);

	GameObject go;
	Assembly wall;
	Assembly wallwithwindow;
	Assembly floor;
	Assembly building;
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	Sleep(500);
	wallwithwindow.addObject(&go);
	scene->addObject(&go);
	go.move(Vec(0.5, 0, 0));
	Sleep(500);
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	go.moveto(Vec(0, 0, 0.5));
	Sleep(500);
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	go.moveto(Vec(1, 0, 0.5));
	Sleep(500);
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	go.moveto(Vec(0, 0, 1));
	Sleep(500);
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	Sleep(500);
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	Sleep(500);
	scene->addObject(&go);
	wallwithwindow.addObject(&go);
	//addObject(&wallwithwindow);

	wall.addObject(&wallwithwindow);
	/*go.moveto(Vec(0.5, 0, 0.5));
	wall.addObject(&go);*/
	wall.set_default_forward(Vec(0.35, 1, 0));


	for (int i = 0; i < 8; i++)
	{
		double r = 1.5;
		double pi = 3.14159;
		wall.setForward(Vec(0, 0, 0));
		wall.setPos(Vec(r*cos(i*pi / 4), r*sin(i / 4.0 * pi), 0));
		floor.addObject(&wall);
		scene->addObject(&wall);
		Sleep(500);
	}
	for (int i = 0; i < 2; i++)
	{
		floor.move(Vec(0, 0, 1.5));
		building.addObject(&floor);
		scene->addObject(&floor);
		Sleep(500);
	}

	scene->addObject(&building);

}
Scene_Game::Scene_Game()
{
	thread t(create_building,this);
	t.detach();

	//Camera camera;
	//camera.setPos(Vec(2,2,2));
	///*camera.setForward(Vec(0,0,1));
	//camera.setUpper(Vec(3,0,10));*/
	//addObject(&camera);

	//GameObject go;
	//Assembly as;
	//addObject(&go);
	//for (int i = 0; i < 3; i++)
	//{
	//	go.move(Vec(1, 0, 0));
	//	as.addObject(&go);
	//}
	//addObject(&as);
	//as.move(Vec(0,0,1));
	//addObject(&as);

	//LightSource ls;
	//ls.setPos(Vec(0,3,3));
	//addObject(&ls);

}


Scene_Game::~Scene_Game()
{
}
