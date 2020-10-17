#include "FormativeOperator04.h"

/// <summary>
/// 문제
/// 두 정수를 입력받아 첫 번째 수는 전치증가연산자를 사용하고 두 번째 수는 후치감소연산자를 사용하여 출력하고
/// 바뀐 값을 다시 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10 15
/// 
/// 출력 예
/// 11 15
/// 11 14
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=14&sca=1030
/// </summary>
void FormativeOperator04::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << ++var1 << ' ' << var2-- << '\n';
	std::cout << var1 << ' ' << var2;
}