#include <iostream>
#include <algorithm>
using namespace std;

// 9명의 난장이 중 합이 100이 되는 7명을 찾는 프로그램
// >> 9명의 합에서 두 명을 골라 합을 뺐을 때 100이 되는 경우를 찾자

int find_fake(int* dwaf, int num, int sum)
{
	for (int i = 0; i < num; i++)
		for (int j = i + 1; j < num; j++)
		{
			int temp = dwaf[i] + dwaf[j];
			if (sum - temp == 100)
			{
				dwaf[i] = -1;			// 가짜 두 명의 값을 -1로 설정
				dwaf[j] = -1;
				return 0;
			}
		}
}

int main()
{
	const int num = 9;
	int dwarf[num];
	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		cin >> dwarf[i];		// scanf()시 정상작동이 되지 않음
		sum += dwarf[i];
	}

	find_fake(dwarf, num, sum);			// 가짜 두 명 찾기

	sort(dwarf, dwarf + num);		// 가짜 두 명과 진짜 7명이 오름차순으로 정렬됨

	for (int i = 2; i < num; i++)	// 가짜 두 명을 제외하고 나머지를 출력
		cout << dwarf[i] << endl;

	return 0;
}