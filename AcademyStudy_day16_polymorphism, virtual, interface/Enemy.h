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
	virtual void Update() override // virtual �����, ������ �ʴ� ������ ������ ������ �� ���� �����
	{
		printf("Enemy Update\n");
	}
};

