#include "Scene_Game.h"



Scene_Game::Scene_Game()
{
	LightSource ls;
	ls.setPos(Vec(10, 10, 10));
	addObject(&ls);

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
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	wallwithwindow.addObject(&go);
	go.moveto(Vec(0, 0, 0.5));
	wallwithwindow.addObject(&go);
	go.moveto(Vec(1, 0, 0.5));
	wallwithwindow.addObject(&go);
	go.moveto(Vec(0, 0, 1));
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	wallwithwindow.addObject(&go);
	go.move(Vec(0.5, 0, 0));
	wallwithwindow.addObject(&go);
	//addObject(&wallwithwindow);

	wall.addObject(&wallwithwindow);
	/*go.moveto(Vec(0.5, 0, 0.5));
	wall.addObject(&go);*/
	wall.set_default_forward(Vec(0.35,1,0));


	for (int i = 0; i < 8; i++)
	{
		double r = 1.5;
		double pi = 3.14159;
		cout << cos(pi) << endl;
		wall.setForward(Vec(0, 0, 0));
		wall.setPos(Vec(r*cos(i*pi/4), r*sin(i / 4.0 * pi), 0));
		floor.addObject(&wall);
	}
	for (int i = 0; i < 5; i++)
	{
		floor.move(Vec(0,0,1.5));
		building.addObject(&floor);
	}
		
	addObject(&building);

	Camera c;
	c.setPos(Vec(0, 10, 8));
	c.setUpper(Vec(0, 0, 1e6));
	addObject(&c);
}


Scene_Game::~Scene_Game()
{
}
