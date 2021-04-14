#pragma once
#include <iostream>
class GameObject
{
public:
	int publicVar;

	GameObject(){}
	GameObject(int _x, int _y) {}

	void Func()
	{
		printf("GameObject Func\n");
	}

	virtual void VFunc()
	{
		printf("GameObject VFunc\n");
	}

	virtual void Update()
	{
		printf("GameObjcet Update\n");
	}
};

