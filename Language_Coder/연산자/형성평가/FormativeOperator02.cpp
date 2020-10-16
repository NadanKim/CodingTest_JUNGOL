#include "FormativeOperator02.h"

/// <summary>
/// 문제
/// 두 정수를 입력받아서 나눈 몫과 나머지를 다음과 같은 형식으로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 35 10
/// 
/// 출력 예
/// 35 / 10 = 3...5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=12&sca=1030
/// </summary>
void FormativeOperator02::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << var1 << " / " << var2 << " = " << var1 / var2 << "..." << var1 % var2;
}