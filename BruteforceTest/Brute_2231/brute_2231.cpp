#include <iostream>
using namespace std;

// 기능 : N(=245)의 분해합 = 245 + 2 + 4 + 5 = 256(=M)
//		M은 N의 생성자라고 함
//		자연수를 입력받고, 해당 자연수의 생성자를 구하는 프로그램을 작성하라
//
// hint : 1부터 N(1 ~ 1,000,000)까지 반복하여 하나씩 생성자를 구해보자 => 복잡도 O(N)
//		% 연산과 / 연산을 활용할 것

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int sum = i;
		int part = i;

		while (part)
		{
			sum += part % 10;		// 10으로 나눈 나머지를 더해줌 -> 자릿수 더하기
			part /= 10;				// 다음 반복을 위해 10으로 나눈 몫으로 설정
		}

		if (sum == N)				// 생성자를 찾은 경우 값을 출력하고 종료
		{
			cout << i << endl;
			return 0;
		}
	}

	cout << 0 << endl;				// 생성자를 찾지 못한 경우 0 출력하고 종료
	return 0;
}