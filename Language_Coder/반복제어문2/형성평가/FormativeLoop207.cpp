#include "FormativeLoop207.h"

/// <summary>
/// 문제
/// 한 개의 자연수를 입력받아 그 수의 배수를 차례로 10개 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 5
/// 
/// 출력 예
/// 5 10 15 20 25 30 35 40 45 50
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=36&sca=1070
/// </summary>
void FormativeLoop207::Code()
{
	int var;
	
	std::cin >> var;

	for (int num = var; num <= var * 10; num += var)
	{
		std::cout << num << ' ';
	}
}