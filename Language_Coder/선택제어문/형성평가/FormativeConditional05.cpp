#include "FormativeConditional05.h"

/// <summary>
/// 문제
/// 1~12사이의 정수를 입력받아 해당 월의 날수를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 2
/// 
/// 출력 예
/// 28
/// 
/// Hint!
/// 평년의 경우 1월부터 12월까지 일수는 각각 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31일이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=24&sca=1050
/// </summary>
void FormativeConditional05::Code()
{
	int var;

	std::cin >> var;

	switch (var)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		std::cout << 31;
		break;
	case 2:
		std::cout << 28;
		break;
	default:
		std::cout << 30;
		break;
	}
}