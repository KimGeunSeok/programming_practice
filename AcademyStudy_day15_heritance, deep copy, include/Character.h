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
	Character() { printf("(����Ʈ) ������ ȣ��\n"); }
	~Character()
	{
		delete[] name;
		printf("�Ҹ��� ȣ��\n");
	}

	Character(int _x, int _y) : GameObject(_x, _y) {}

	Character(const char* newName)
	{
		name = new char[30];
		strcpy_s(name, 30, newName);
		printf("const char* ������ ȣ��\n");
	}

	Character(int _hp) : hp(_hp) { printf("int ������ ȣ��\n"); }

	Character(const Character& copy)
	{
		// �ι���
		int length = strlen(copy.name) + 1;
		name = new char[length];
		strcpy_s(name, length, copy.name);
		printf("���� ���縦 �ϴ� ���� ������ ȣ��\n");
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


