#include <iostream>
#include "Singleton.h"
#include "counter.h"
#include "receiver.h"

//Ініціалізуємо посилання на нуль для того, щоб при ініціалізації
//отримати перший об’єкт
Singleton *Singleton::instance = 0;

int main() {
	Singleton *s = s->getInstance();
	cout << s->getData() << endl;
	s->setData(100);
	cout << "From pointer: " << s->getData() << endl;
	cout << "From instance: " << Singleton::getInstance()->getData() << endl;

	counter cc;

	cc.incData();
	cout << "From cc: " << cc.getData() << endl;
	
	s->setData(200);

	cc.incData();
	cout << "From cc: " << cc.getData() << endl;

	cc.storeData();

	receiver rc;
	
	rc.readStoredData();
	cout << "From rc: " << rc.getData() << endl;

	return 0;
}

