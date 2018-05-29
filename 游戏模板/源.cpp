#include "myOpenGL.h"
#include "Scene_Game.h"
int main(int argc, char * argv[])
{
	extern Scene* scene;
	scene = new Scene_Game();
	myOpenGLmain(argc, argv);
	delete scene;	
}