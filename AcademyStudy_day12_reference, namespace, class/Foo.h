#pragma once // 한번만 추가하게 하는 명령어 표준은 아님

// 인클루드 가드(include guard)
//#ifndef _foo_h__
//#define _foo_h__

int i = 0;
int Foo()
{
	i++;
	return i;
}
// #endif