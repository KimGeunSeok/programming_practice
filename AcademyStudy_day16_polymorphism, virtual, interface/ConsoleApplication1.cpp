#include <iostream>
#include "Character.h"
#include "Enemy.h"
#include "GameObject.h"

class A
{
public:
	virtual ~A() { printf("A 소멸자\n"); }
};

#pragma pack(push, 1)
class B : public A
{
public:// 32비트는 4바이트 단위로 접근하기에 char가 4바이트(실제 1바이트), int 4바이트, 가상함수 4바이트를 차지한다.
	char a;
	char b;
	char c;
	char d;
	char e;
	int i;
	~B() { printf("B 소멸자\n"); }

	void Func() {}
};
#pragma pack(pop) // 빈 공간 없이 다 채워주는 명령어, ex)char는 4바이트 중 문자가 하나면 한칸만 차지 서버랑 환경이 다를수 있어 네트워크상 통신 할때 활용

// 인터페이스 (Interface)
class IDamagable
{
public:
	// 순수 가상 함수
	virtual void TakaDamage(float damage) = 0;
};

class IInteractable
{
public:
	virtual void Interact() = 0;
};

class RPGCharacter : public Character, public IDamagable
{
public:
	virtual void TakeDamage(float damage)
	{

	}
};

class Door : public IInteractable
{
public:
	virtual void Interact() { printf("Open Door.\n"); }
};

class NPC : public IInteractable
{
public:
	virtual void Interact() { printf("Talk.\n"); }
};

class PickItem  : public IInteractable
{
public:
	virtual void Interact() { printf("Pick up item.\n"); }
};

void (*OnClick)();
void Foo() { printf("Foo\n"); }

int main()
{
	Character character1;
	character1.VFunc();

	GameObject go;
	go.VFunc();

	// 다형성(polymorphism) 상속을 줄 수 있어 속성별로 따로 함수를 호출할 필요 없이 일괄적으로 각자 타입에 맞는 함수를 처리하게 해줌
 	GameObject* character2 = new Character;
	GameObject* enemy1 = new Enemy;
	character2->VFunc(); // GameObject의 함수를 사용해 Character 클래스의 값을 가져옴
	character2->Func(); // GameObjcet의 함수라 그 값을 가져옴
	enemy1->VFunc(); // Enemy클래스의 값이 없어 GameObject의 함수값을 가져옴

	const int MAX_OBJECT_COUNT = 2;
	GameObject* gameObjects[MAX_OBJECT_COUNT];
	GameObject* player = new Character;
	GameObject* enemy = new Enemy;

	gameObjects[0] = player;
	gameObjects[1] = enemy;

	for (int i = 0; i < MAX_OBJECT_COUNT; i++)
	{
		gameObjects[i]->Update();
	}

	A* a = new B;
	delete a;

	B b;
	printf("%d\n", sizeof(b));

	IInteractable* interactionObject;
	
	Door* door = new Door;
	NPC* npc = new NPC;
	PickItem* item = new PickItem;

	interactionObject = item;


}
