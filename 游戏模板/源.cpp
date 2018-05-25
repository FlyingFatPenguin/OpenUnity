#include "myOpenGL.h"
#include "Scene_Game.h"
int main(int argc, char * argv[])
{
	extern Scene* scene;
	scene = new Scene_Game();
	myOpenGLmain(argc, argv);
	delete scene;

	/*Object* obj = new Camera();
	cout << typeid(obj).name() << endl;
	if (typeid(obj) == typeid(Camera))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");*/
}