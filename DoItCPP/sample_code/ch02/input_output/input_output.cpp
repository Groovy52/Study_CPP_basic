// input_output.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*
#include <iostream>
// 예제: 숫자를 2개 입력받아 합을 출력하기  (41pg)
int main()
{
	int i, j; // 입력 받을 변수 타입 지정
	std::cout << "Enter num_1: "; // 첫번째 숫자를 입력하세요
	std::cin >> i; // 사용자에게 첫번째 정수를 입력받아 i에 저장

	std::cout << "Enter num_2: "; // 두번째 숫자를 입력하세요
	std::cin >> j; // 사용자에게 두번째 정수를 입력받아 j에 저장

	std::cout << "num_1 + num_2 = " << i + j << std::endl; // 두 수의 합 출력

	return 0;
}
*/

#include <iostream>

using namespace std; // 네임스페이스 사용 선언 => 하지만 충돌 방지를 위해 std::를 매번 표기하는 코드가 더 좋음.

int main() // '이 프로그램은 종류 시 정수(int) 하나를 OS(운영체제)에게 돌려준다'는 의미.
{
	int i, j;

	cout << "Enter num_1: ";
	cin >> i;

	cout << "Enter num_2: ";
	cin >> j;

	// cout << "num_1 + num_2 = " << i + j << endl;
	// cout << "num_1 + num_2 = " << i << j << i + j << endl;
	cout << "num_1 = " << i << endl << "num_2 = " << j << endl << "num_1 + num_2 = " << i + j << endl;


	return 0; // 정상적으로 종료됐을 시 OS 에 전달하는 정수값 
}

