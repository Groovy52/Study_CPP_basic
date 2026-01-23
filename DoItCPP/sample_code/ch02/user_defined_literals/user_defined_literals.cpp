// user_defined_literals.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

const long double km_per_mile = 1.609344L;

long double operator"" _km(long double val) // _km 사용자 리터럴 정의
{
	return val;
}

long double operator"" _mi(long double val) // _mi 사용자 리터럴 정의
{
	return val * km_per_mile;
}

int main()
{
	long double distance_1 = 1.0_km;
	long double distance_2 = 1.0_mi;

	cout << distance_1 + distance_2 << " km" << endl;

	return 0;
}