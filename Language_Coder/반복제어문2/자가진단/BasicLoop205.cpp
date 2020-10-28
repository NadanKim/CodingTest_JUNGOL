#include "BasicLoop205.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 3의 배수의 개수와 5의 배수의 개수를 각각 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10 15 36 99 100 19 46 88 87 13
/// 
/// 출력 예
/// Multiples of 3 : 4
/// Multiples of 5 : 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=182&sca=1070
/// </summary>
void BasicLoop205::Code()
{
	int var;
	int countMultiplesOf3{ 0 }, countMultiplesOf5{ 0 };

	for (int i = 0; i < 10; i++)
	{
		std::cin >> var;

		if (var % 3 == 0)
		{
			countMultiplesOf3++;
		}
		if (var % 5 == 0)
		{
			countMultiplesOf5++;
		}
	}

	std::cout << "Multiples of 3 : " << countMultiplesOf3 << '\n';
	std::cout << "Multiples of 5 : " << countMultiplesOf5;
}