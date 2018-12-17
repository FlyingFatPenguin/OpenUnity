#include "TimeLine.h"



TimeLine::TimeLine()
{
	timeLineThread = thread(&TimeLine::threadRun, this);
}


TimeLine::~TimeLine()
{
}

void TimeLine::begin()
{
	
}

void TimeLine::threadBegin()
{
	timeLineThread.detach();
}

void TimeLine::threadRun()
{
	while (true) {
		
	}
}
