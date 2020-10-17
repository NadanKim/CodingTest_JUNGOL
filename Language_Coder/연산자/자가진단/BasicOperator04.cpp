#include "BasicOperator04.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아 각각 후치 증가 연산자와 전치 감소 연산자를 사용하여 두 수의 곱을 구한 후
/// 각각의 값을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10 20
/// 
/// 출력 예
/// 11 19 190
/// 
/// Hint!
/// python 사용자는 두 번째 수를 1감소시키고 두 수의 곱을 구한후 첫 번째 수를 1증가시킨다. 세 수를 출력한다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=158&sca=1030
/// </summary>
void BasicOperator04::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	int result = var1++ * --var2;

	std::cout << var1 << ' ' << var2 << ' ' << result;
}