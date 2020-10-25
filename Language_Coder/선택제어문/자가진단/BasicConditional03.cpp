#include "BasicConditional03.h"

/// <summary>
/// 문제
/// 나이를 입력받아 20살 이상이면 "adult"라고 출력하고 그렇지 않으면 몇 년후에 성인이 되는지를
/// "○ years later"라는 메시지를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 18
/// 
/// 출력 예
/// 2 years later
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=167&sca=1050
/// </summary>
void BasicConditional03::Code()
{
	int age;

	std::cin >> age;

	if (age >= 20)
	{
		std::cout << "adult";
	}
	else
	{
		int leftYears{ 20 - age };
		std::cout << leftYears << " years later";
	}
}