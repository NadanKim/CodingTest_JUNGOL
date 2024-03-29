﻿#include "Cycle.h"

/// <summary>
/// 문제
/// 두 자연수 N과 P를 가지고 다음 과정을 거쳐서 나오는 숫자들을 차례대로 출력해보자. 
/// 처음 출력하는 숫자는 N이고, 두 번째 이후 출력하는 숫자들은 N을 곱하고 P로 나눈 나머지를 구하는 과정을 반복하여 구한다.
/// 즉, 먼저 N에 N을 곱하고, 이 수를 P로 나눈 나머지를 두 번째에 출력한다.
/// 다음에는 이 나머지에 N을 곱하고 P로 나눈 나머지를 출력한다.
/// 다음에는 이 나머지에 N을 곱한 후 P로 나눈 나머지를 출력한다.
/// 이 과정을 계속 반복해보면 출력되는 숫자들에는 반복되는 부분이 있다.
/// 
/// 예를 들어서, N = 67, P = 31인 경우를 생각해보자.
/// 처음 출력되는 숫자는 67이고, 두 번째로 출력되는 숫자는 67×67 = 4489를 31로 나눈 나머지 25이다.
/// 다음에는 25×67 = 1675를 31로 나눈 나머지 1, 다음에는 1×67 = 67을 31로 나눈 나머지 5가 차례대로 출력된다.
/// 다음에는 5×67 = 335를 31로 나눈 나머지 25가 출력되는데,
/// 이 수는 이미 이전에 출력된 수이다.이 과정을 그림으로 보이면 다음과 같다.
/// 
/// 즉 이 과정을 반복하면, 처음 67을 제외하면 3개의 숫자 25, 1, 5가 계속 무한히 반복되게 된다. 
/// 또 다른 예로, N = 9, P = 3을 가지고 시작하면, 9×9 = 81이고 3으로 나눈 나머지는 0이며,
/// 0×9 = 0이고 3으로 나눈 나머지도 0이기 때문에 처음 9를 제외하면 0이 무한히 반복되게 된다.
/// 
/// N과 P를 입력받아 위와 같이 정의된 연산을 수행하였을 때,
/// 반복되는 부분에 포함된 서로 다른 숫자의 개수를 구하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄에 처음 시작하는 N과 P가 공백을 사이에 두고 주어진다. 단, 1≤N≤1,000, 2≤P≤97이다.
/// 
/// 출력 형식
/// 첫째 줄에 반복되는 부분에 포함된 서로 다른 숫자의 개수를 출력한다.
///
/// 입력 예		/// 입력 예
/// 67 31		/// 96 61
///
/// 출력 예		/// 출력 예
/// 3			/// 60
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1828&sca=2080
/// </summary>
void Cycle::Code()
{
	int n, p;

	std::cin >> n >> p;

	vector<int> numbers;

	std::cout << GetCycleNumberCount(n, p, n, numbers);
}

int Cycle::GetCycleNumberCount(int n, int p, int curNumber, vector<int>& numbers)
{
	auto cycleBeg = std::find(numbers.begin(), numbers.end(), curNumber);
	if (std::find(numbers.begin(), numbers.end(), curNumber) != numbers.end())
	{
		int count{ 0 };
		while (cycleBeg != numbers.end())
		{
			count++;
			cycleBeg++;
		}
		return count;
	}

	numbers.push_back(curNumber);

	return GetCycleNumberCount(n, p, (curNumber * n) % p, numbers);
}