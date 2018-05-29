#include "Scene_Game.h"



Scene_Game::Scene_Game()
{
	LightSource ls;
	ls.setPos(Vec(10, 10, 10));
	addObject(&ls);
	GameObject go;
	go.setPos(Vec(0, 0, 0));
	go.setForward(Vec(0, 0, 0));
	//addObject(&go);
	GameObject go2;
	go2.setPos(Vec(0, 0, 0.5));
	go2.setForward(Vec(1, 1, 0.5));
	//addObject(&go2);
	Assembly assembly;
	assembly.setPos(Vec(0,0,0));
	assembly.setForward(Vec(1,1,1));
	assembly.addObject(&go);
	assembly.addObject(&go2);
	addObject(&assembly);
	Camera c;
	c.setPos(Vec(1, 1, 1));
	c.setUpper(Vec(0, 0, 1));
	addObject(&c);
}


Scene_Game::~Scene_Game()
{
}
