#include "BasicLoop103.h"

/// <summary>
/// 문제
/// 한 개의 정수를 입력받아 양수(positive integer)인지 음수(negative number)인지 출력하는 작업을 반복하다가
/// 0이 입력되면 종료하는 프로그램을 작성하시오.
/// 
/// * 입출력예의 진한글씨는 출력값입니다.​
/// 
/// 입·출력 예
/// number? 10
/// positive integer	- 출력
/// number ? -10
/// negative number		- 출력
/// number ? 0
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=175&sca=1060
/// </summary>
void BasicLoop103::Code()
{
	int var;

	while (true)
	{
		std::cout << "number? ";
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		if (var > 0)
		{
			std::cout << "positive integer\n";
		}
		else
		{
			std::cout << "negative number\n";
		}
	}
}