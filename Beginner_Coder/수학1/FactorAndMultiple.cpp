#include "FactorAndMultiple.h"

/// <summary>
/// 문제
/// 주어진 정수들 중 입력받은 수의 약수와 배수의 합을 각각 출력하라.
///
/// 입력 형식
/// 첫 줄에 정수의 개수 n (1<= n <=40)을 입력 받는다.
/// 둘째 줄에는 n개의 정수를 한 줄에 입력 받는다.
/// 셋째 줄에는 약수와 배수를 구할 정수 m(1 <= m <= 100)을 입력 받는다.
/// 
/// 출력 형식
/// 첫 줄에는 정수 m의 약수의 합을 둘째 줄에는 정수 m의 배수의 합을 출력한다.
///
/// 입력 예
/// 6
/// 2 3 5 12 18 24
/// 12
///
/// 출력 예
/// 17
/// 36
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=351&sca=2030
/// </summary>
void FactorAndMultiple::Code()
{
	int n;
	int arr[40];

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int m;
	std::cin >> m;

	int sumOfFactor{ 0 }, sumOfMultiple{ 0 };
	for (int i = 0; i < n; i++)
	{
		if (m % arr[i] == 0)
		{
			sumOfFactor += arr[i];
		}

		if (arr[i] % m == 0)
		{
			sumOfMultiple += arr[i];
		}
	}

	std::cout << sumOfFactor << '\n' << sumOfMultiple;
}