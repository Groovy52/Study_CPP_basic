#include <iostream>
using namespace std;

int main()
{
	int input_number;

	cout << "정수 입력: ";
	cin >> input_number;

	if (input_number > 0)
		cout << "입력한 수는 양수" << endl;
	else if (input_number < 0)
		cout << "입력한 수는 음수" << endl;
	else
		cout << "입력한 수는 0" << endl;

	return 0;
}