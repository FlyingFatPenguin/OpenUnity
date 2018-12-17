#include "TimeLine.h"



TimeLine::TimeLine()
{
}


TimeLine::~TimeLine()
{
}

void TimeLine::whenStart()
{
	timeLineThread = thread(&TimeLine::threadRun, this);
	threadBegin();
}


void TimeLine::threadBegin()
{
	timeLineThread.detach();
}

void TimeLine::threadRun()
{
	
}
