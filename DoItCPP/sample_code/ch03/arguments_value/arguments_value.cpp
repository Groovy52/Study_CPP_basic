// arguments_value.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 일반 변수를 매개변수로 활용하기

#include <iostream>
using namespace std;

void change_negative(int _val)
{
	if (_val > 0)
	{
		_val = -_val; // 매개변수 _val 은 복사본 -> a, b의 원본 값은 절대 바뀌지 않음
		// 매개변수인 _val은 change_negative 함수 내부에서만 효력이 있는 지역 변수이기 때문에,
		// _val 변수값만 음수로 만들 뿐, main 함수의 a, b 변수에는 아무런 영향이 없음.
	}
}

int main() {
	int a = 3, b = -3;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	change_negative(a);
	change_negative(b);

	cout << "change_negative(a) : " << a << endl;
	cout << "change_negative(b) : " << b << endl;

	return 0;
}