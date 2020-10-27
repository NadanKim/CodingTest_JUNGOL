#include "FormativeLoop101.h"

/// <summary>
/// 문제
/// 정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 5
/// 
/// 출력 예
/// 1 2 3 4 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=25&sca=1060
/// </summary>
void FormativeLoop101::Code()
{
	int var;

	std::cin >> var;

	for (int i = 1; i <= var; i++)
	{
		std::cout << i << ' ';
	}
}