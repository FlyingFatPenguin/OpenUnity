#include "Scene_Game.h"



Scene_Game::Scene_Game()
{
	LightSource ls;
	ls.setPos(Vec(1, -1, 1));
	addObject(&ls);
	addObject(&GameObject());
	Camera c;
	c.setPos(Vec(1, -0.8, 1.2));
	c.setUpper(Vec(0, 0, 1));
	addObject(&c);
}


Scene_Game::~Scene_Game()
{
}
