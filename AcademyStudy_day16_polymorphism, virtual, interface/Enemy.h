#pragma once
#include "Character.h"

class Enemy : public GameObject
{
private:
	int hp;
public:
	//virtual void VFunc() override
	//{
	//	printf("Enemy VFunc\n");
	//}
	virtual void Update() override // virtual 선언시, 보이지 않는 가상의 포인터 변수가 젤 먼저 선언됨
	{
		printf("Enemy Update\n");
	}
};

