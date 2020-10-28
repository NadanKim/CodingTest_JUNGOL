#include "BasicLoop202.h"

/// <summary>
/// 문제
/// 10부터 20까지의 숫자를 차례대로 출력하는 프로그램을 작성하시오.for문을 사용하세요.
///
/// 출력 예
/// 10 11 12 13 14 15 16 17 18 19 20
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=179&sca=1070
/// </summary>
void BasicLoop202::Code()
{
	for (int i = 10; i <= 20; i++)
	{
		std::cout << i << ' ';
	}
}