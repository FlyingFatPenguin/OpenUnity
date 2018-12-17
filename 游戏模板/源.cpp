#include "myOpenGL.h"
#include "Scene.h"
#include "Scene_Game.h"
#include "Scene2.h"
#include "TimeLine.h"

//����ʾ����̨����  
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")  

int main(int argc, char * argv[])
{
	Scene* scene = new Scene();
	TimeLine* timeLine = new TimeLine();
	//timeLine->addSubevent();
	timeLine->start();
	myOpenGLmain(argc, argv, scene);
	delete scene;	
}