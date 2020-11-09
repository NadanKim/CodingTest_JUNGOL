#include "FormativeArray108.h"

/// <summary>
/// 문제
/// 100 개 이하의 정수를 입력받다가 0 이 입력되면 그 때까지 입력된 정수 중 5의 배수의 개수와 합계 평균을
/// 출력하는 프로그램을 작성하시오.
///
/// 평균은 소수점 이하 1자리까지 출력한다.
/// 
/// 입력 예
/// 35 10 23 100 64 51 5 0
/// 
/// 출력 예
/// Multiples of 5 : 4
/// sum : 150
/// avg : 37.5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=57&sca=1090
/// </summary>
void FormativeArray108::Code()
{
	int arr[100];
	int count{ 0 };

	for (int i = 0; i < 100; i++)
	{
		std::cin >> arr[i];

		if (arr[i] == 0)
		{
			break;
		}

		count++;
	}

	int sum{ 0 };
	int countMultiplesOf5{ 0 };

	for (int i = 0; i < count; i++)
	{
		if (arr[i] % 5 == 0)
		{
			sum += arr[i];
			countMultiplesOf5++;
		}
	}

	float avg{ static_cast<float>(sum) / countMultiplesOf5 };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "Multiples of 5 : " << countMultiplesOf5 << '\n';
	std::cout << "sum : " << sum << '\n';
	std::cout << "avg : " << avg;
}