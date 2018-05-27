#include "Scene_Game.h"



Scene_Game::Scene_Game()
{
	addObject(&Object());
	Camera c;
	c.setPos(Vec(1, -0.8, 1.2));
	c.setUpper(Vec(0, 0, 1));
	addObject(&c);
}


Scene_Game::~Scene_Game()
{
}
