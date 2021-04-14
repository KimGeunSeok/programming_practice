#pragma once
#include<iostream>

class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int _x, int _y) : x(_x), y(_y) {}
};

class Character
{
	// ���� ������
	// public
	// protected
	// private

public:
	enum class Estates
	{
		Idle, Die
	};
private:
	int hp; // ���м�, �߿��� ������ �����ߵȴ�. public �Լ��� �ܺο��� ȣ�� ����
	int damage;
	const int MAX_HP;
	// Character& target;

public: 
	// ����Ʈ ������
	// Character(){}
	
	// ����Ʈ �Ҹ���(destructor, dtor)
	// ~Character(){}

	// ��� �̴ϼȶ�����
	Character(int _hp /*Character& _target*/) :
		hp(_hp),
		damage(1),
		//����� ���ÿ� �ʱ�ȭ�� �Ǿ�� �ϴ� const������ �����ڵ� �ʱ�ȭ ����
		MAX_HP(_hp) {} 
	// target(_target){}

	// �����ڴ� �����ε� ����
	Character(int _hp, int _damage) :
	hp(_hp),
	damage(_damage),
	MAX_HP(-hp) {}

	int GetHP() const;
	int GetDamage() const;
	void SetHP(int _newHP);
	void ShowHP() const;

	Character& Self()
	{
		return *this;
	}

	inline void InlineFunc() // const�� �����ϸ� const������ ȣ���� ����
	{

	}

	// #define�� �������� const, enum, inline ���� ���
};
