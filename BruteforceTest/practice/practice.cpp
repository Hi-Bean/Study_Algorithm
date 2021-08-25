#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

// practice 프로그램
// 기능 : N개의 수를 입력받고, 다른 2개를 더해
//		나올 수 있는 합 중 가장 큰 것을 구하라


int main()
{
	int N;
	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);	// cin >> arr[i];

	// 2중 for문을 사용해 두 수를 고르는 모든 경우의 수 접근 => O(N^2)
	//int result = 0;
	//for (int i = 0; i < N; i++)
	//	for (int j = 0; j < N; j++)
	//		if (i != j)	result = max(result, arr[i] + arr[j]);
	//cout << result << endl;

	// sorting 후 가장 큰 두 개의 수를 더한다 => O(NlogN)

	sort(arr, arr + N);
	cout << arr[N - 1] + arr[N - 2] << endl;
		
}