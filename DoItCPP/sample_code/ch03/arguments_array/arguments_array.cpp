#include <iostream>
using namespace std;

// array[]는 점수 배열을, count 는 배열에 점수가 몇 개 들어 있는 지 알려주는 역할
int average(int _array[], int _count)
{
	int sum = 0;
	for (int i = 0; i < _count; i++)
	{
		sum += _array[i];
	}
	return sum / _count;
}

int main()
{
	int score[5] = { 90, 80, 85, 70, 95 };
	cout << "평균 점수 : " << average(score, 5) << endl;
	return 0;
}