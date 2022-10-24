#pragma once

#include "Singleton.h"

class receiver
{
	float data;
public:
	receiver() { data = 0; }
	void readStoredData() { data = Singleton::getInstance()->getStoredData(); };
	float getData() { return data; }
};

