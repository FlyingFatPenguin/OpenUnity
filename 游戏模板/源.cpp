#include "myOpenGL.h"
#include "Scene_Game.h"

//����ʾ����̨����  
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")  

int main(int argc, char * argv[])
{
	extern Scene* scene;
	scene = new Scene_Game();
	myOpenGLmain(argc, argv);
	delete scene;	
}