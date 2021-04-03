#include "PrimeNumber.h"

/// <summary>
/// 문제
/// 자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최소값을 찾는 프로그램을 작성하시오.
/// 
/// 예를 들어 M = 60, N = 100이 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로,
/// 이들 소수의 합은 620이고, 최소값은 61이 된다.
///
/// 입력 형식
/// 입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
/// M과 N은 10, 000이하의 자연수이며, M은 N보다 같거나 작다.
/// 
/// 출력 형식
/// M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최소값을 출력한다.
/// 단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 - 1을 출력한다.
///
/// 입력 예
/// 60
/// 100
///
/// 출력 예
/// 620
/// 61
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1013&sca=2040
/// </summary>
void PrimeNumber::Code()
{
	int m, n;

	std::cin >> m >> n;

	int min{ 0 }, sum{ 0 };

	for (int i = (m < 2 ? 2 : m); i <= n; i++)
	{
		if (IsPrimeNumber(i))
		{
			if (min == 0)
			{
				min = i;
			}
			sum += i;
		}
	}

	if (min == 0)
	{
		std::cout << -1;
	}
	else
	{
		std::cout << sum << '\n';
		std::cout << min;
	}
}

bool PrimeNumber::IsPrimeNumber(int number)
{
	int limit{ static_cast<int>(std::sqrt(number)) };

	for (int i = 2; i <= limit; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}