#pragma once

#include "Singleton.h"

class counter
{
	float data;
public:
	counter() { data = 0; }
	void incData() { data += Singleton::getInstance()->getData(); }
	float getData() { return data; }
	void storeData() { Singleton::getInstance()->storeData(data); }
};

