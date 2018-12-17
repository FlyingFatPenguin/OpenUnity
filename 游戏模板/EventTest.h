#pragma once
#include "Event.h"
#include <iostream>
using namespace std;

class EventTest:
	public Event
{
public:
	virtual void whenUpdate();
	EventTest();
	~EventTest();
};

