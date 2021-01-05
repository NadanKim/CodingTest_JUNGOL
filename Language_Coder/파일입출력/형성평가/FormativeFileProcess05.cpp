#include "FormativeFileProcess05.h"

/// <summary>
/// 문제
/// 0 이 입력될 때까지 정수를 입력받아 3의 배수이면서 5의 배수인 정수를 모두 출력하고 다음 줄에 그 개수를 출력하시오.
/// 단, 한개도 없을 경우에는 "0" 만 출력한다.최대 1, 000개의 정수가 입력된다.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예								/// 입력 예
/// 10 20 30 55 66 77 88 99 100 15 0	/// 6 11 14 10 16 23 0
/// 
/// 출력 예								/// 출력 예
/// 30 15								/// 0
/// 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=109&sca=10i0
/// </summary>
void FormativeFileProcess05::Code()
{
	int var, count{ 0 };

	while (true)
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		if (var % 3 == 0 && var % 5 == 0)
		{
			count++;

			std::cout << var << ' ';
		}
	}

	if (count > 0)
	{
		std::cout << '\n';
	}
	std::cout << count;
}