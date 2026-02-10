// Summary_Problems.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/* 
// 문제 1
#include <iostream>

int main()
{
    std::string name;
    std::cout << "이름을 입력하세요";
    std::cin >> name;
    std::cout << "환영합니다 " << name << "님!" << std::endl;

    return 0;
}
*/

/*
// 문제 1
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "이름을 입력하세요: ";
    cin >> name;
	cout << "환영합니다 " << name << "님!" << endl;

    return 0;
}
*/

/*
// 문제 2
#include <iostream>

int main()
{
    float float_num = 0.5f;
    unsigned int uint_num = 5u;
    long double ld_num = 5L;

    std::cout << "float_num: " << float_num << std::endl;
    std::cout << "uint_num: " << uint_num << std::endl;
    std::cout << "ld_num: " << ld_num << std::endl;

    return 0;
}
*/

// 문제 3
/*
#include <iostream>
int main()
{
    int outer_var = 10;
    {
        int inner_var = 5;
        std::cout << "Inner Var: " << inner_var << std::endl;
        std::cout << "Outer Var: " << outer_var << std::endl;
    }

    int inner_var = 100;

    std::cout << "Inner Var: " << inner_var << std::endl;
}
*/

// 문제 5
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;
    float result_1 = a / b;
    float result_2 = (float)a / b; // (flaot)(a / b)는 3이 됨.

    cout << "float result_1: " << result_1 << endl;
    cout << "float result_2: " << result_2 << endl;

    return 0;
}


