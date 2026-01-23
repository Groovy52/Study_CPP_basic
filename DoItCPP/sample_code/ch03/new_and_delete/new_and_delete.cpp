// new_and_delete.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int* pt_int_value = new int; // 동적 메모리 할당

	*pt_int_value = 100;
	cout << *pt_int_value << endl;

	delete pt_int_value; // 동적 메모리 해제

	return 0;
}
