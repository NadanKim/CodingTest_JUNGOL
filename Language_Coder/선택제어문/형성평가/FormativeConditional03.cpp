#include "FormativeConditional03.h"

/// <summary>
/// 문제
/// 년도를 입력받아 윤년(leap year)인지 평년(common year)인지 판단하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 2008
/// 
/// 출력 예
/// leap year
/// 
/// Hint!
/// 400으로 나누어떨어지면 윤년이다. 또는 4로 나누어떨어지고 100으로 나누어떨어지지 않으면 윤년이다. 나머지는 모두 평년이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=22&sca=1050
/// </summary>
void FormativeConditional03::Code()
{
	int year;

	std::cin >> year;

	bool isLeapYear{ (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) };
	if (isLeapYear)
	{
		std::cout << "leap year";
	}
	else
	{
		std::cout << "common year";
	}
}