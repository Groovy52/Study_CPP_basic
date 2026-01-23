// array_and_pointer_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main() {
	int array[5] = { 1, 2, 3, 4, 5 };
	int *pointer_array = array;

	cout << "array: " << array << endl;
	cout << "pointer_array: " << pointer_array << endl << endl;

	cout << "sizeof(array): " << sizeof(array) << endl;
	cout << "sizeof(pointer_array): " << sizeof(pointer_array) << endl;

	return 0;
}