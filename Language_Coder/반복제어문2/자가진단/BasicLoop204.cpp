#include "BasicLoop204.h"

/// <summary>
/// 문제
/// 100 이하의 정수를 입력받아서 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 95
/// 
/// 출력 예
/// 585
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=181&sca=1070
/// </summary>
void BasicLoop204::Code()
{
	int var;
	int sum{ 0 };

	std::cin >> var;

	while (var <= 100)
	{
		sum += var++;
	}

	std::cout << sum;
}