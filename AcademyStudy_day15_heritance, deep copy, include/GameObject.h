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
		// printf("id : %d\n", myID); // 에러 호출 static은 데이터영역에서 먼저 호출되서 멤버 변수를 없는걸로 인식함. 
	}
};

