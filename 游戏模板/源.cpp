#include "myOpenGL.h"
int main(int argc, char * argv[])
{
	extern Scene* scene;
	scene = new Scene();
	myOpenGLmain(argc, argv);
	delete scene;
}