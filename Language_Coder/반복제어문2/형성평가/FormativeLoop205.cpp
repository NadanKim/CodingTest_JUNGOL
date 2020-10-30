#include "FormativeLoop205.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10 20 30 55 66 77 88 99 100 15
/// 
/// 출력 예
/// even : 6
/// odd: 4
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=34&sca=1070
/// </summary>
void FormativeLoop205::Code()
{
	int even{ 0 }, odd{ 0 };

	int var;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> var;

		if (var % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	std::cout << "even : " << even << '\n';
	std::cout << "odd : " << odd;
}