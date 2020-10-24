#include "FormativeConditional02.h"

/// <summary>
/// 문제
/// 정수를 입력받아 0 이면 "zero" 양수이면 "plus" 음수이면 "minus" 라고 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 0
/// 
/// 출력 예
/// zero
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=21&sca=1050
/// </summary>
void FormativeConditional02::Code()
{
	int var;

	std::cin >> var;

	if (var > 0)
	{
		std::cout << "plus";
	}
	else if (var < 0)
	{
		std::cout << "minus";
	}
	else
	{
		std::cout << "zero";
	}
}