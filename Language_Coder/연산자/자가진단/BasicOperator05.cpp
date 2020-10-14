#include "BasicOperator05.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아서, 
/// 첫 번째 줄에는 두 정수의 값이 같으면 1 아니면 0을 출력하고,
/// 두 번째 줄에는 같지 않으면 1 같으면 0을 출력하는 프로그램을 작성하시오.
/// (JAVA는 1이면 true, 0이면 false를 출력한다.)
/// 
/// 입력 예
/// 5 5
/// 
/// 출력 예
/// 1
/// 0
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=159&sca=1030
/// </summary>
void BasicOperator05::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << (var1 == var2) << '\n';
	std::cout << (var1 != var2);
}