// floating_point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
// 부동 소수점의 정밀도;floating point precision = 데이터 유실 없이 얼마나 많은 유효 자릿수를 나타낼 수 있는지
// 기본 정밀도 = 6 (6자리만 출력)
int main()
{
	cout << 9.87654321f << endl; // 값 끝에 f를 붙이면 부동 소수점
	cout << 987654.321f << endl;
	cout << 9876543.21f << endl;
	cout << 0.00000987654321f << endl;
	cout << 0.000000000987654321f << endl;

	return 0;
}
