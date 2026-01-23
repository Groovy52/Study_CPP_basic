// bitwise_shift.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int a = 13;
    int b = a >> 1; // 1bit 오른쪽으로 shift
    int c = a << 1; // 1bit 왼쪽으로 shift
    int d = a >> -1; // shift 수행 오류 (warning C4293)
    int e = a << 32; // shift 수행 오류 (warning C4293)

    cout << "a = " << bitset<8>(a) << " : " << a << endl;
    cout << "b = " << bitset<8>(b) << " : " << b << endl;
    cout << "c = " << bitset<8>(c) << " : " << c << endl;
    cout << "d = " << bitset<8>(d) << " : " << d << endl;
    cout << "e = " << bitset<8>(e) << " : " << e << endl;

    return 0;

}

