#include "FindPrimeNumber.h"

/// <summary>
/// 문제
/// 소수(prime number)란 2이상의 수로써 1과 자기 자신 외에는 약수를 갖지 않는 수를 의미한다.
/// 임의의 M값에 대하여 M에 가장 가까운 소수를 구하는 프로그램을 아래 조건에 따라 작성한다.
///
/// 입력 형식
/// 첫 번째 줄에는 처리해야 할 수의 개수 N을 입력 받는다. (N은 100이하의 정수) 
/// 다음 줄에는 처리해야할 수 N개(M1부터 Mn까지)를 한 줄에 한 개씩 차례로 입력 받는다.
/// (Mi 는 1, 000, 000 이하의 양의 정수)
/// 데이터의 크기가 주어진 범위를 벗어나는 입력은 없다.
/// 
/// 출력 형식
/// 임의의 값 Mi에 대해 차이가 가장 작은 소수를 구하여 출력한다. 
/// 만약 차이가 같은 소수가 여러 개이면 작은 수부터 모두 출력한다.
/// 출력되는 값은 1이상 1, 000, 000이하의 소수이어야 한다.
///
/// 입력 예
/// 2
/// 8
/// 15
///
/// 출력 예
/// 7
/// 13 17
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1174&sca=2040
/// </summary>
void FindPrimeNumber::Code()
{
	int n;

	std::cin >> n;

	int number;
	for (int i = 0; i < n; i++)
	{
		std::cin >> number;
		PrintNearestPrimeNumber(number);
	}
}

bool FindPrimeNumber::IsPrimeNumber(int number)
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

void FindPrimeNumber::PrintNearestPrimeNumber(int number)
{
	int results[2]{};
	int arrDiff[2]{};
	int count{ 0 };
	int diff{ INT_MAX };

	for (int i = 2; ; i++)
	{
		if (IsPrimeNumber(i))
		{
			int temp{ std::abs(number - i) };
			if (temp <= diff)
			{
				diff = temp;
				if (count > 1)
				{
					results[0] = results[1];
					results[1] = i;

					arrDiff[0] = arrDiff[1];
					arrDiff[1] = diff;
				}
				else
				{
					results[count++] = i;
					arrDiff[count++] = diff;
				}
			}

			if (i > number)
			{
				break;
			}
		}
	}

	if (arrDiff[0] == arrDiff[1])
	{
		std::cout << results[0] << ' ' << results[1] << '\n';
	}
	else if (arrDiff[0] < arrDiff[1])
	{
		std::cout << results[0] << '\n';
	}
	else
	{
		std::cout << results[1] << '\n';
	}
}