#include "FormativeFunction302.h"

/// <summary>
/// 문제
/// 자연수 N을 입력받아 N이 홀수인 경우에는 1부터 N까지의 홀수를 짝수인 경우는 2부터 N까지의 짝수를 모두 출력하는
/// 프로그램을 재귀함수로 작성하시오.
/// 
/// 입력 예
/// 15
/// 
/// 출력 예
/// 1 3 5 7 9 11 13 15
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=132&sca=10d0
/// </summary>
void FormativeFunction302::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void FormativeFunction302::Function(int n)
{
	if (n <= 0)
	{
		return;
	}

	Function(n - 2);
	std::cout << n << ' ';
}