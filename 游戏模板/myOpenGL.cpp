#include "myOpenGL.h"

double CalFrequency()
{
	//测量帧数
	static int count;
	static double save;
	static clock_t last, current;
	double timegap;

	++count;
	if (count <= 50)
		return save;
	count = 0;
	last = current;
	current = clock();
	timegap = (current - last) / (double)CLK_TCK;
	save = 50.0 / timegap;
	return save;
}

extern Scene* scene;
void myDisplay(void)
{
	glClearColor(0.1, 0.4, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);

	scene->display();

	glutSwapBuffers();
}
void myIdle(void)
{
	//Sleep(5);
	scene->idle();
	myDisplay();
	cout << CalFrequency() << endl;
}


void ChangeSize(int width, int height)//获知窗口大小
{
	extern int WIN_WIDTH;
	extern int WIN_HEIGHT;

	WIN_WIDTH = width;
	WIN_HEIGHT = height;
	scene->changeSize(width, height);
}
void mouseCB(int button, int state, int wx, int wy)
{
	//转化为OpenGL坐标
	/*GLfloat x = (2.0 * wx)/WIN_WIDTH - 1;
	GLfloat y = -(2.0 * wy)/WIN_HEIGHT + 1;*/

	scene->mouseCB(button, state, wx, wy);
}
void keyEvent(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27://ESC键退出
		exit(0);
		return;
	default:
		scene->keyEvent(key, x, y);
	}
}
void mouseMove(int x, int y)
{
	//page->mouceMove(x,y);
}
void processMousePassiveMotion(int x, int y)
{
	//page->processMousePassiveMotion(x,y);
}
void start()
{
	static Scene game;
	scene = &game;
}

void updateTime()
{
	while (TRUE)
	{
		extern clock_t current_time;
		current_time = clock();
		Sleep(50);
	}
}
int myOpenGLmain(int argc, char * argv[])
{
	extern int WIN_POS_X;
	extern int WIN_POS_Y;
	extern int WIN_WIDTH;
	extern int WIN_HEIGHT;
	extern clock_t start_time;
	start_time = clock();
	thread t(updateTime);
	t.detach();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowPosition(WIN_POS_X, WIN_POS_Y);
	glutInitWindowSize(WIN_WIDTH, WIN_HEIGHT);
	glutCreateWindow("OpenGL 窗口");
	glutDisplayFunc(&myDisplay);
	glutIdleFunc(&myIdle);
	glutReshapeFunc(&ChangeSize);
	glutMouseFunc(&mouseCB);
	glutKeyboardFunc(&keyEvent);
	//glutSpecialFunc(processSpecialKeys);//特殊按键消息
	//鼠标移动事件，鼠标按下并移动时调用  
	glutMotionFunc(&mouseMove);
	//未按下按键时的鼠标位置
	glutPassiveMotionFunc(processMousePassiveMotion);
	if (scene == 0)
		return 1;
	glutMainLoop();
	return 0;
}