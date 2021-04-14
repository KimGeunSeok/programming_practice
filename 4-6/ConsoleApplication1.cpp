#include <iostream>
#include "Foo.h" // ..\..\..\ 할때마다 상위 폴더로 감   하위는 \Debug

//#define debug_mode 1
//
//#ifdef debug_mode
//int i = 0;
//void foo()
//{
//
//}
//#endif
//
//#define win
//#ifdef win
//#define text(x) l##x // 이렇게 하면 x글자 앞에 l(유니코드 선언)을 넣을 수 있다.
//#endif
//
//extern int func();

// namespace(이름공간) // 중복된 이름을 쓰고 싶을 때 활용, 사용 시 주의 include안에 동일명이랑 섞이면 충돌 일어날수도...

//void SwapByRef(int& ref1, int& ref2)
//{
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//void ConstRef(const int& ref)
//{
//	// ref = 10; 오류 출력
//}
//
//int& ReturnRef(int& ref)
//{
//	ref++;
//	return ref;
//}
//
//int& ReturnWrongRef(int n) //지역변수를 참조용으로 반환하지마라
//{
//	int num = 0;
//	num = 0;
//	return num;
//	
//}
//
//namespace A
//{
//	void Foo()
//	{
//
//	}
//	void Bar()
//	{
//		Foo;
//	}
//}
//
//namespace B
//{
//	void Foo()
//	{
//
//	}
//	void Bar()
//	{
//		Foo; // A에 Foo랑 다른걸로 인식함
//	}
//}
//
//using namespace A; // 밑에서 A::을 생략할 수 있다.
//using A::Bar; // A안에 Bar만 사용하고 싶을때

class Dog
{
public:
	int hp; // 구조체는 public 선언 안해도 기본적으로 있으나 클래스는 선언해야됨.
};
int main()
{
	//Bar();
	//B::Bar();

	//std::cout << "Hello World\n";

//	printf("%d\n", func());
//	l"hello"; // 유니코드 선언 윈도우에서 활용
//#if debug_mode == 1
//	printf("디버그 모드\n");
//#elif debug_mode == 0 // 아무것도 안 넣으면 true인지 묻는게 됨
//	printf("릴리즈 모드\n");
//#else
//	printf("아무 모드 아님\n");
//#endif


	//int num1 = 10;
	//int num2 = 20;
	//  참조자(reference)
	//int& ref = num1; // 변수만 참조되고 null선언이 안 됨. 선언과 동시에 참조해야됨
	//int* ptr = &num1;

	//SwapByRef(num1, num2);
	//printf("%d %d\n", num1, num2);

	//int num3 = ReturnRef(num1);
	//printf("%d %d\n", num1, num3);

	//const int num = 1;
	//const int& ref = num; // const를 넣을 경우 둘다 const를 넣어야됨.

	// 객체(Object) - 속성(데이터 - 변수)와 기능(함수)의 집합
	// 클래스 - 객체의 속성과 기능에 대한 정의, 명세

	// 인스턴스(instance)
	Dog* dog1 = new Dog; // { 1, , , } 구조체식 초기화는 안 된다.
	dog1-> hp = 10;
	Dog dog2;
	dog2.hp = 20;
}
