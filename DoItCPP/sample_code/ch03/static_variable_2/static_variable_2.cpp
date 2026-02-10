#include <iostream>
using namespace std;

int getNewID()
{
	static int ID = 0;
	return ++ID;
}

int main()
{
	cout << "New ID: " << getNewID() << endl; // Outputs: New
	cout << "New ID: " << getNewID() << endl; // Outputs: New
	cout << "New ID: " << getNewID() << endl; // Outputs: New
	cout << "New ID: " << getNewID() << endl; // Outputs: New
	cout << "New ID: " << getNewID() << endl; // Outputs: New

	return 0;
}