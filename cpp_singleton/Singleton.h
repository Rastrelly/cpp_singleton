#pragma once
using namespace std;

class Singleton {
	static Singleton *instance;
	int data;
	float storage;

	// Приватний конструктор, 
	// необхідний для породження об’єкту.
	Singleton() {
		data = 0;
	}

public:
	// Публічний псевдо конструктор, що насправді або викликає
	// приватний конструктор, якщо жодного об’єкту-одинака
	// ще не існує, або повертає посилання на вже існуючий
	// одинак.
	static Singleton *getInstance() {
		if (!instance)
		{
			instance = new Singleton;
		}
		return instance;
	}

	int getData() {
		return this->data;
	}

	void setData(int data) {
		this->data = data;
	}

	void storeData(float val)
	{
		storage = val;
	}

	float getStoredData()
	{
		return storage;
	}
};
