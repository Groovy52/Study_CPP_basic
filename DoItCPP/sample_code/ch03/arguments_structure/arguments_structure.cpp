#include <iostream>
using namespace std;

/*

struct Person
{
	std::string name;
	int age;
	float height;
	float weight;
};

void check_age(Person *_adult, int _count)
{
	for (int i = 0; i < _count; i++)
	{
		if (_adult[i].age >= 25)
		{
			cout << "name : " << _adult[i].name << endl;
			cout << "age : " << _adult[i].age << endl;
			cout << "height : " << _adult[i].height << endl;
			cout << "weight : " << _adult[i].weight << endl;
		}
	}
}

int main()
{
	Person adult[3] =
	{
		{"Brain", 24, 180, 70},
		{"Jessica", 22, 165, 55},
		{"James", 30, 170, 65},
	};
	check_age(adult, 3);

	return 0;
}
*/

struct Person // 구조체 선언
{
	std::string name; // 멤버 선언
	int age;
};

// 함수의 매개변수로 복사되어 전달
void printPersonInfo(Person person)
{
	// 구조체의 멤버 접근
	std::cout << "Name: " << person.name << std::endl;
	std::cout << "Age: " << person.age << std::endl;
}

int main()
{
	Person john = { "John", 30 }; // 구조체 변수 선언
	printPersonInfo(john);
	return 0;
}