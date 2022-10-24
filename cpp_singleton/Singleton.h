#pragma once
using namespace std;

class Singleton {
	static Singleton *instance;
	int data;
	float storage;

	// ��������� �����������, 
	// ���������� ��� ���������� �ᒺ���.
	Singleton() {
		data = 0;
	}

public:
	// �������� ������ �����������, �� �������� ��� �������
	// ��������� �����������, ���� ������� �ᒺ���-�������
	// �� �� ����, ��� ������� ��������� �� ��� ��������
	// ������.
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
