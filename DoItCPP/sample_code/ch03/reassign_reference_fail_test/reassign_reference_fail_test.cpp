#include <iostream>
using namespace std;

int main()
{
	int value = 10;
	int& ref_value = value;

	int value2 = 20;
	ref_value = value2;

	cout << "value: " << value << endl;         // Outputs 20
	cout << "ref_value: " << ref_value << endl; // Outputs 20
}