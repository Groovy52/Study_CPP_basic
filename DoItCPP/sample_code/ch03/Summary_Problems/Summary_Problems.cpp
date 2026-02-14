
// 1)
/*
#include <iostream>
using namespace std;

int main()
{
	int *array = new int[5];

	for (int i = 0; i < 5; i++)
	{
		array[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}

	delete[] array;

	return 0;

}
*/

#include <iostream>
using namespace std;

struct Monster
{
	string name;
	int age;
	int health;
	float height;
	float weight;
};

void printMonsterInfo(Monster monster)
{
	cout << "Name: " << monster.name << endl;
	cout << "Age: " << monster.age << endl;
	cout << "Health: " << monster.health << endl;
	cout << "Height: " << monster.height << endl;
	cout << "Weight: " << monster.weight << endl;
}

int main()
{
	Monster myMonster = { "Giant", 100, 200, 185, 120 };
	printMonsterInfo(myMonster);
	return 0;
}