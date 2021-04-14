#pragma once
#include <iostream>
#include "GameObject.h"

struct Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int _x, int _y) : x(_x), y(_y) {}
};

class Character : public GameObject
{
private:
	int hp = 1;
	// int damage;

	char* name;

public:
	Character() { printf("(디폴트) 생성자 호출\n"); }
	~Character()
	{
		delete[] name;
		printf("소멸자 호출\n");
	}

	Character(int _x, int _y) : GameObject(_x, _y) {}

	Character(const char* newName)
	{
		name = new char[30];
		strcpy_s(name, 30, newName);
		printf("const char* 생성자 호출\n");
	}

	Character(int _hp) : hp(_hp) { printf("int 생성자 호출\n"); }

	Character(const Character& copy)
	{
		// 널문자
		int length = strlen(copy.name) + 1;
		name = new char[length];
		strcpy_s(name, length, copy.name);
		printf("깊은 복사를 하는 복사 생성자 호출\n");
	}

	int GetHP() const;
	// int GetDamage() const;
	void SetHP(int _newHP);
	void ShowHP() const;

	virtual void VFunc() override
	{
		printf("Character VFunc\n");
	}
};


