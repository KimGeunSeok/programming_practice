#pragma once
#include <iostream>
#include "GameObject.h"

struct Vector2
{
private:
	int x;
	int y;

public: Vector2(int _x, int _y) : x(_x), y(_y) {}
};

class Character : public GameObject
{
private: 
	int hp;
	
public:
	int GetHP() const;
	void SetHP(int _newHP);
	void ShowHP() const;

	virtual void VFunc() override
	{
		// GameObject::VFunc();

		printf("Character VFunc\n");
	}

	virtual void Update() override
	{
		printf("Characer Update\n");
	}
};

