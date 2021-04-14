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
	// 접근 제한자
	// public
	// protected
	// private

public:
	enum class Estates
	{
		Idle, Die
	};
private:
	int hp; // 은닉성, 중요한 변수는 가려야된다. public 함수로 외부에서 호출 가능
	int damage;
	const int MAX_HP;
	// Character& target;

public: 
	// 디폴트 생성자
	// Character(){}
	
	// 디폴트 소멸자(destructor, dtor)
	// ~Character(){}

	// 멤버 이니셜라이저
	Character(int _hp /*Character& _target*/) :
		hp(_hp),
		damage(1),
		//선언과 동시에 초기화가 되어야 하는 const변수나 참조자도 초기화 가능
		MAX_HP(_hp) {} 
	// target(_target){}

	// 생성자는 오버로딩 가능
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

	inline void InlineFunc() // const를 선언하면 const끼리만 호출이 가능
	{

	}

	// #define을 쓰기전에 const, enum, inline 먼저 고려
};
