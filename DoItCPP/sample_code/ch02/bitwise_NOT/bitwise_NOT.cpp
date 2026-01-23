// bitwise_NOT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	unsigned int value = 0x00000000; // 0을 16진수(hex)로 표현한 값

	value = ~value;
	cout << hex << value << endl;

	return 0;
}
