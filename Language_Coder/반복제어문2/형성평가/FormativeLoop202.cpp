#include "FormativeLoop202.h"

/// <summary>
/// 문제
/// 100 이하의 두 개의 정수를 입력받아 작은 수부터 큰 수까지 차례대로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10 5
/// 
/// 출력 예
/// 5 6 7 8 9 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=31&sca=1070
/// </summary>
void FormativeLoop202::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	int small{ var1 < var2 ? var1 : var2 };
	int big{ var1 < var2 ? var2 : var1 };

	while (small <= big)
	{
		std::cout << small++ << ' ';
	}
}