#include "BasicLoop105.h"

/// <summary>
/// 문제
/// 정수를 입력받아서 3의 배수가 아닌 경우에는 아무 작업도 하지 않고 
/// 3의 배수인 경우에는 3으로 나눈몫을 출력하는 작업을 반복하다가
/// -1이 입력되면 종료하는 프로그램을 작성하시오.
/// 
/// 입·출력 예
/// 5
/// 12
/// 4	- 출력
/// 21
/// 7	- 출력
/// 100
/// -1
/// 
/// Hint!
/// 3의 배수는 3으로 나눈 나머지가 0이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=177&sca=1060
/// </summary>
void BasicLoop105::Code()
{
	int var;

	while (true)
	{
		std::cin >> var;

		if (var == -1)
		{
			break;
		}

		if (var % 3 == 0)
		{
			std::cout << var / 3 << '\n';
		}
	}
}