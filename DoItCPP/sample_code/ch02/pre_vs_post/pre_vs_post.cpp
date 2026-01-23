// pre_vs_post.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 0; // a 최초 값 0
	int b = 0; // b 최초 값 0
	int a_prefix;
	int b_postfix;

	/*
	증가연산자인 ++는 피연산자를 1만큼 증가, --는 1만큼 감소시킴.
	변수 앞에 붙는 전위 연산(++a)과 뒤에 붙는 후위 연산(a++)은 연산 순서에 차이가 있음.
	*/

	a_prefix = ++a; // a값을 1만큼 증가시킨 후에, a_prefix에 대입
	b_postfix = b++; // b값을 b_postfix에 대입한 후에, b값을 1만큼 증가

	cout << "a = " << a << ", " << "a_prefix = " << a_prefix << endl;
	cout << "b = " << b << ", " << "b_postfix = " << b_postfix << endl;

	return 0;
}