// if_vs_ternary_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 5;
	int result;

	if (a > b)
		result = a; // a > b가 true면, result에 a저장
	else
		result = b; // a > b가 false면, result에 b저장

	cout << "result = " << result << endl;

	return 0;
}