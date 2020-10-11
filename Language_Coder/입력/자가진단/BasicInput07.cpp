#include "BasicInput07.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력 받아 곱과 몫을 출력하시오.
/// (먼저 입력 받는 수가 항상 크며 입력되는 두 정수는 1이상 500이하이다.)
/// 
/// 입력 예
/// 16 5
/// 
/// 출력 예
/// 16 * 5 = 80
/// 16 / 5 = 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=152&sca=1020
/// </summary>
void BasicInput07::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << var1 << " * " << var2 << " = " << var1 * var2 << '\n';
	std::cout << var1 << " / " << var2 << " = " << var1 / var2;
}