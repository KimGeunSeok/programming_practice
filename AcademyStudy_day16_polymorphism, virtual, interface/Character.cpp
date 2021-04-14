#include "Character.h"

int Character :: GetHP() const
{
	return hp;
}

void Character::SetHP(int _hp)
{
	if (_hp < 0)
		return;

	hp = _hp;
}

void Character::ShowHP() const
{
	printf("$d\n", GetHP());
}
