#include "myOpenGL.h"
#include "Scene_Game.h"
#include "Scene2.h"

//����ʾ����̨����  
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")  

int main(int argc, char * argv[])
{
	extern Scene* current_scene;
	current_scene = new Scene2();
	myOpenGLmain(argc, argv);
	delete current_scene;	
}