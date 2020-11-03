#include "FormativeLoop302.h"

/// <summary>
/// 문제
/// 1부터 100까지의 정수 중 한 개를 입력받아 100 보다 작은 배수들을 차례로 출력하다가
/// 10 의 배수가 출력되면 프로그램을 종료하도록 프로그램을 작성하시오.
/// 
/// 입력 예
/// 7
/// 
/// 출력 예
/// 7 14 21 28 35 42 49 56 63 70
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=41&sca=1080
/// </summary>
void FormativeLoop302::Code()
{
	int var;

	std::cin >> var;

	int num{ var };
	do
	{
		std::cout << num << ' ';
		num += var;
	} while ((num - var) % 10 != 0 && num < 100);
}