// 암시적 형 변환과 명시적 형 변환 비교

#include <iostream>
using namespace std;

int main()
{
	int int_a = 10;
	int int_b = 5;

	int int_avg = (int_a + int_b) / 2;
	float float_avg_1 = (int_a + int_b) / 2; // 암시적 형 변환: 데이터 유실
	// 컴파일러는 int_a + in_b 부분을 정수형 R-value로 처리함으로써, '정수형 R-value / 2'의 결과도 정수가 됨.
	// 결과값을 float형으로 구하려고 했지만, 이미 정수끼리 나누기 연산에서 소수점 데이터가 사라져 의도하지 않은 결과가 나옴.

	float float_avg_2 = float(int_a + int_b) / 2; // 명시적 형 변환
	// float float_avg_2 = (float)(int_a + int_b) / 2;

	cout << "int_avg: " << int_avg << endl;
	cout << "float_avg_1: " << float_avg_1 << endl;
	cout << "float_avg_2: " << float_avg_2 << endl;

	return 0;
}