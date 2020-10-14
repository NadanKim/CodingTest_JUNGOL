#include "BasicOperator08.h"

/// <summary>
/// 문제
/// 3개의 정수를 입력 받아 첫 번째 수가 가장 크면 1 아니면 0을 출력하고 세 개의 수가 모두 같으면 1 아니면 0을 출력하는 프로그램을 작성하시오.
/// (JAVA는 1이면 true, 0이면 false를 출력한다.)
/// 
/// 입력 예
/// 10 9 9
/// 
/// 출력 예
/// 1 0
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=162&sca=1030
/// </summary>
void BasicOperator08::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	bool result1 = (var1 > var2) & (var1 > var3);
	bool result2 = (var1 == var2) & (var2 == var3);
	std::cout << result1 << ' ' << result2;
}