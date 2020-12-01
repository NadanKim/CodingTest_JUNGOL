#include "BasicFunction302.h"

/// <summary>
/// 문제
/// 자연수 N을 입력받아 재귀함수를 이용하여 N부터 1까지 차례대로 출력하는 프로그램을 작성하시오.
/// N은 50이하의 자연수이다.
///
/// 입력 예
/// 5
/// 
/// 출력 예
/// 5 4 3 2 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=225&sca=10d0
/// </summary>
void BasicFunction302::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void BasicFunction302::Function(int n)
{
	if (n <= 0)
	{
		return;
	}

	std::cout << n << ' ';

	Function(n - 1);
}