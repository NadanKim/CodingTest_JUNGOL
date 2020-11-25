#include "BasicFunction202.h"

/// <summary>
/// 문제
/// 2016년의 날짜를 두 개의 정수 월 일로 입력받아서 입력된 날짜가 존재하면 "OK!" 그렇지 않으면 "BAD!"라고 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 2 30
/// 
/// 출력 예
/// BAD!
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=217&sca=10c0
/// </summary>
void BasicFunction202::Code()
{
	int month, day;

	std::cin >> month >> day;

	Function(month, day);
}

void BasicFunction202::Function(int month, int day)
{
	const int MonthDay[]{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (day > 0 && MonthDay[month - 1] >= day)
	{
		std::cout << "OK!";
	}
	else
	{
		std::cout << "BAD!";
	}
}