#include "BasicLoop203.h"

/// <summary>
/// 문제
/// 하나의 정수를 입력받아 1부터 입력받은 정수까지의 짝수를 차례대로 출력하는 프로그램을 작성하시오.
/// 
/// 입력되는 정수는 50이하이다.
/// 
/// 입력 예
/// 10
/// 
/// 출력 예
/// 2 4 6 8 10
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=180&sca=1070
/// </summary>
void BasicLoop203::Code()
{
	int var;

	std::cin >> var;

	for (int i = 2; i <= var; i += 2)
	{
		std::cout << i << ' ';
	}
}