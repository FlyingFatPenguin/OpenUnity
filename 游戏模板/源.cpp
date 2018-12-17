#include "myOpenGL.h"
#include "Scene.h"
#include "Scene_Game.h"
#include "Scene2.h"
#include "TimeLine.h"

//不显示控制台窗口  
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")  

int main(int argc, char * argv[])
{
	Scene* scene = new Scene_Game();
	TimeLine* timeLine = new TimeLine();
	myOpenGLmain(argc, argv, scene);
	delete scene;	
}