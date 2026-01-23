// dynamic_memory_bakery.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	int customer_num = 0;

	cout << "오늘 방문 손님: ";
	cin >> customer_num; 

	string* bread = new string[customer_num];

	for (int i = 0; i < customer_num; i++) {
		bread[i] = "빵_" + to_string(i);
	}
	cout << endl << "--생산된 빵--" << endl;
	for (int i = 0; i < customer_num; i++) {
		cout << *(bread + i) << endl; // 포인터 연산으로 접근, bread[i]와 같음
	}
	delete[] bread;

	return 0;
}