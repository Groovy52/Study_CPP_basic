#include <iostream>
using namespace std;

/*
지역 범위 내에 전역 변수와 이름이 같은 변수가 없다면 컴파일러는 전역 변수에 접근
있다면, 지역 변수의 우선권이 더 높음
*/

int value = 1; // 전역 변수

int main()
{
	int value = -1;

	cout << value << endl; // 지역 변수 출력
	cout << ::value << endl; // 전역 변수 출력, 이때 전역 범위 연산자 ::를 사용하면 전역 변수에 접근할 수 있음

	return 0;
}