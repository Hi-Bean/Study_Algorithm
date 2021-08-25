#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

// practice ���α׷�
// ��� : N���� ���� �Է¹ް�, �ٸ� 2���� ����
//		���� �� �ִ� �� �� ���� ū ���� ���϶�


int main()
{
	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);	// cin >> arr[i];

	// 2�� for���� ����� �� ���� ���� ��� ����� �� ���� => O(N^2)
	//int result = 0;
	//for (int i = 0; i < N; i++)
	//	for (int j = 0; j < N; j++)
	//		if (i != j)	result = max(result, arr[i] + arr[j]);
	//cout << result << endl;

	// sorting �� ���� ū �� ���� ���� ���Ѵ� => O(NlogN)

	sort(arr, arr + N);
	cout << arr[N - 1] + arr[N - 2] << endl;
		
}