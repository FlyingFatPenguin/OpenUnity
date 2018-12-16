#include "myOpenGL.h"
#include "Scene_Game.h"

//不显示控制台窗口  
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")  

int main(int argc, char * argv[])
{
	extern Scene* scene;
	scene = new Scene_Game();
	myOpenGLmain(argc, argv);
	delete scene;	
}