#include "BasicOperator02.h"

/// <summary>
/// 문제
/// 정수 2개를 입력받아서 첫 번째 수에는 100을 증가시켜 저장하고 두 번째 수는 10으로 나눈 나머지를 저장한 후
/// 두 수를 차례로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 20 35
/// 
/// 출력 예
/// 120 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=156&sca=1030
/// </summary>
void BasicOperator02::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;
	
	var1 += 100;
	var2 %= 10;

	std::cout << var1 << ' ' << var2;
}