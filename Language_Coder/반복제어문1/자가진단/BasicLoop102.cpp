#include "BasicLoop102.h"

/// <summary>
/// 문제
/// 100 이하의 양의 정수만 입력된다.
/// while 문을 이용하여 1부터 입력받은 정수까지의 합을 구하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10
///
/// 출력 예
/// 55
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=174&sca=1060
/// </summary>
void BasicLoop102::Code()
{
	int var;

	std::cin >> var;

	int sum{ 0 };
	while (var > 0)
	{
		sum += var--;
	}

	std::cout << sum;
}