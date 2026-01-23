// function.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 덧셈을 수행하는 함수 작성하고 호출하기

#include <iostream>
using namespace std;

// add 함수 정의
int add(int _x, int _y) {
	int result = _x + _y;
	return result;
}

int main(){
	int add_result = add(2, 3); // add 함수 호출
	cout << "add 함수 결과: " << add_result << endl;

	return 0;
}
