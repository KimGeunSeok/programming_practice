#pragma once
#include <iostream>
class GameObject
{
private:
	static int id;
	int myID;

public:
	GameObject() {} 
	GameObject(int _x, int _y) {}

	virtual void VFunc()
	{
		printf("GameObject VFunc\n");
	}

	static void ShowID()
	{
		printf("id : %d\n", id);
		// printf("id : %d\n", myID); // ���� ȣ�� static�� �����Ϳ������� ���� ȣ��Ǽ� ��� ������ ���°ɷ� �ν���. 
	}
};

