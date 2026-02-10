// void.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

// void형 변수 선언 (컴파일 오류)
/*
void value; // 오류: void형 변수 선언 불가 -> 'value': 이 'void' 사용은 유효하지 않습니다.
*/


// void형의 사용법 3가지
// 1) 함수가 값을 반환하지 않는 경우
#include <iostream>
void print_func()
{
    std::cout << "func" << std::endl;
}
int main()
{
    print_func(); // func 출력
    return 0;
}


// 2) 매개변수가 없는 경우
int input_func(void) // input_func()처럼 빈 괄호로 두어도 됨.
{
    int input_value;
    std::cin >> input_value;
    return input_value;
}

// 3) 모든 자료형을 가리킬 수 있는 generic pointer로 사용하는 경우
// generic pointer에서 void는 단순히 '형태가 없음'을 의미하기 보다 '형태가 자유로움'을 뜻함.
int int_value;
float float_value;
void *ptr_value;
ptr_value = &int_value;   // int형 주소 저장
ptr_value = &float_value; // float형 주소 저장