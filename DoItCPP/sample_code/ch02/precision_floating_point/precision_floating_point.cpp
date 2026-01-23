// precision_floating_point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip> // ?????
#include <limits> // ?????

using namespace std;

int main()
{
	float float_value = 9.87654321f;
	double double_value = 9.87654321987654321;
	long double long_double_value = 9.87654321987654321l;

	cout << "float : " << sizeof(float) << " bytes" << endl;
	cout << "float_value : " <<
		setprecision(numeric_limits<float>::digits10 + 1) <<
		float_value << endl << endl;

	cout << "double : " << sizeof(double) << " bytes" << endl;
	cout << "double_value : " <<
		setprecision(numeric_limits<double>::digits10 + 1) <<
		double_value << endl << endl;

	cout << "long double : " << sizeof(long double) << " bytes" << endl;
	cout << "long_double_value : " <<
		setprecision(numeric_limits<long double>::digits10 + 1) <<
		long_double_value << endl << endl;
	
	return 0;
}
