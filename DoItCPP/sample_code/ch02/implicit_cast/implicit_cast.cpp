// 암시적 형 변환

#include <iostream>
using namespace std;

int main()
{
	float float_value = 1.5678912f; // 원본 데이터 = 부동 소수점 형 1.5

	double double_value = float_value; // 숫자 승격(더 큰 자료형으로 변경): 데이터 유실 없음
	int int_value = float_value; // 숫자 변환(더 작은 자료형으로 변경): 데이터 유실 발생

	cout << "float value: " << float_value << endl;
	cout << "double value: " << double_value << endl;
	cout << "int_value: " << int_value << endl;

	return 0;
}