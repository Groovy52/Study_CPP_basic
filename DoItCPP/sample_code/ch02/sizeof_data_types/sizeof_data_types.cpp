// sizeof_data_types.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "short : " << sizeof(short) << "bytes" << endl;
	cout << "unsigned short : " << sizeof(unsigned short) << "bytes" << endl;
	cout << "int : " << sizeof(int) << "bytes" << endl;
	cout << "unsigned int : " << sizeof(unsigned int) << "bytes" << endl;
	cout << "__int8 : " << sizeof(__int8) << "bytes" << endl;
	cout << "__int16 : " << sizeof(__int16) << "bytes" << endl;
	cout << "__int32 : " << sizeof(__int32) << "bytes" << endl;
	cout << "__int64 : " << sizeof(__int64) << "bytes" << endl;
	cout << "long : " << sizeof(long) << "bytes" << endl;
	cout << "unsigned long : " << sizeof(unsigned long) << "bytes" << endl;
	cout << "long long : " << sizeof(long long) << "bytes" << endl;
	cout << "unsigned long long : " << sizeof(unsigned long long) << "bytes" << endl;

	return 0;
}