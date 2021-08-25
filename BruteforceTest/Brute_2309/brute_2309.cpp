#include <iostream>
#include <algorithm>
using namespace std;

// 9���� ������ �� ���� 100�� �Ǵ� 7���� ã�� ���α׷�
// >> 9���� �տ��� �� ���� ��� ���� ���� �� 100�� �Ǵ� ��츦 ã��

int find_fake(int* dwaf, int num, int sum)
{
	for (int i = 0; i < num; i++)
		for (int j = i + 1; j < num; j++)
		{
			int temp = dwaf[i] + dwaf[j];
			if (sum - temp == 100)
			{
				dwaf[i] = -1;			// ��¥ �� ���� ���� -1�� ����
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
		cin >> dwarf[i];		// scanf()�� �����۵��� ���� ����
		sum += dwarf[i];
	}

	find_fake(dwarf, num, sum);			// ��¥ �� �� ã��

	sort(dwarf, dwarf + num);		// ��¥ �� ��� ��¥ 7���� ������������ ���ĵ�

	for (int i = 2; i < num; i++)	// ��¥ �� ���� �����ϰ� �������� ���
		cout << dwarf[i] << endl;

	return 0;
}