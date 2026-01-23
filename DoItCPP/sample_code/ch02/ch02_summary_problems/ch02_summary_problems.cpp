// ch02_summary_problems.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

/*
// 문제 1
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Enter your name: ";
	cin >> name;

	cout << "Welcome, " << name << "님!" << endl;

	return 0;
}
*/

/*
// 문제 2
#include <iostream>
using namespace std;

int main()
{
	// 0.5f = 부동소수점 숫자,에 어울리는 변수 => float
	float float_num = 0.5f;
	cout << "float_num: " << float_num << endl;

	// 5u = 부호 없는 정수,에 어울리는 변수 => unsigned int
	unsigned int unsigned_num = 5u;
	cout << "unsigned_num: " << unsigned_num << endl;

	// 5L = 긴 정수,에 어울리는 변수 => long double
	long int long_num = 5L;
	cout << "long_num: " << long_num << endl;

	return 0;
}
*/


#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 3;
	// float result_1 = a / b;
	float result_1 = (float)a / b;

	cout << "result_1: " << result_1 << endl;

	return 0;
}
