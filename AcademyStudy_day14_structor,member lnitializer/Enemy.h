#pragma once
#include "Character.h"

class Enemy
{
public:
	enum class Estates
	{
		Idle, Die
	};
	
private:
	int hp;
	
public:
	float TakeDamage(const Character& causer)
	{
		hp -= causer.GetDamage();
	}
};

