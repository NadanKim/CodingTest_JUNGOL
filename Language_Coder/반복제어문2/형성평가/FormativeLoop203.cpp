#include "FormativeLoop203.h"

/// <summary>
/// 문제
/// 정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 20
/// 
/// 출력 예
/// 50
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=32&sca=1070
/// </summary>
void FormativeLoop203::Code()
{
	int var;
	int sum{ 0 };

	std::cin >> var;

	for (int i = 5; i <= var; i += 5)
	{
		sum += i;
	}

	std::cout << sum;
}