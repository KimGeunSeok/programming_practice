#include "Character.h"

int Character::GetHP() const
{
	return hp;
}

//int Character::GetDamage() const
//{
//	return damage;
//}

void Character::SetHP(int _hp)
{
	if (_hp < 0)
		return;

	//  this->hp = hp;
	// hp = _hp;
}

void Character::ShowHP() const
{
	printf("%d\n", GetHP());
}
