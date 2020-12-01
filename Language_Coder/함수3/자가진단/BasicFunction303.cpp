#include "BasicFunction303.h"

/// <summary>
/// 문제
/// 100 이하의 자연수 N을 입력받아 재귀함수를 이용하여 1부터 N까지의 합을 구하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 100
/// 
/// 출력 예
/// 5050
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=226&sca=10d0
/// </summary>
void BasicFunction303::Code()
{
	int n;

	std::cin >> n;

	std::cout << Function(n);
}

int BasicFunction303::Function(int n)
{
	if (n <= 0)
	{
		return 0;
	}

	return n + Function(n - 1);
}