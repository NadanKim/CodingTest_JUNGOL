#include "FormativeLoop104.h"

/// <summary>
/// 문제
/// 0 이 입력될 때까지 정수를 계속 입력받아 3의 배수와 5의 배수를 제외한 수들의 개수를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 1 2 3 4 5 6 7 8 9 10 0
/// 
/// 출력 예
/// 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=28&sca=1060
/// </summary>
void FormativeLoop104::Code()
{
	int var;
	int count{ 0 };

	while (true)
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		if (var % 3 != 0 && var % 5 != 0)
		{
			count++;
		}
	}

	std::cout << count;
}