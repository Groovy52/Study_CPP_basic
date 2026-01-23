// if_vs_ternary_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 5;
	int result;

	result = a > b ? a : b; // a > b 조건식이 true면 쌍점(:)을 기준으로 왼쪽 표현식, false면 오른쪽 표현식 실행

	cout << "result = " << result << endl;

	return 0;
}
