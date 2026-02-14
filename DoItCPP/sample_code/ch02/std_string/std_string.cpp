// std_string.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
// #include <string>  // -> iostream 헤더에 string도 포함됨.

using namespace std;

int main()
{
	string string_value("Hello");
	// cout << string_value << endl;
	cout << string_value;
	string_value = "World!";
	cout << string_value << endl;
	cout << "Hello goeun!\n";
	cout << "hello goeun2!" << '\n';

	return 0;
}