#include "FormativeConditional01.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 50 85
/// 
/// 출력 예
/// 35
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=20&sca=1050
/// </summary>
void FormativeConditional01::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	if (var1 > var2)
	{
		std::cout << var1 - var2;
	}
	else
	{
		std::cout << var2 - var1;
	}
}