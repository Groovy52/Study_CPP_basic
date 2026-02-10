// bitwise_NOT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	unsigned int value = 0x00000000; // 0을 16진수(hex)로 표현한 값

	value = ~value;
	/*
	hex는 변수가 아니라, C++ 표준 라이브러리 <iostream>에 들어있는 입출력 조작자(istream/ostream manipulator) 중 하나예요.
    cout << hex << value;에서 hex는 cout의 출력 형식 상태(format flags) 를 “16진수로 출력”하도록 바꾸는 역할
	*/
	cout << hex << value << endl;

	return 0;
}
