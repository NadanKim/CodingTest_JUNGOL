#include "BasicConditional05.h"

/// <summary>
/// 문제
/// 두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 아니면 "C" 라고 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예	///	입력 예
/// 4.3 3.5	///	4.0 2.9
/// 
/// 출력 예	///	출력 예
/// B		///	C
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=169&sca=1050
/// </summary>
void BasicConditional05::Code()
{
	float var1, var2;

	std::cin >> var1 >> var2;

	if (var1 >= 4.0f && var2 >= 4.0f)
	{
		std::cout << 'A';
	}
	else if (var1 >= 3.0f && var2 >= 3.0f)
	{
		std::cout << 'B';
	}
	else
	{
		std::cout << 'C';
	}
}