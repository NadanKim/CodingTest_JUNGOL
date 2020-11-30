#include "FormativeFunction204.h"

/// <summary>
/// 문제
/// 정수 n을 입력받아 2n의 값을 출력하는 프로그램을 작성하시오. (1 ≤ n ≤ 20)
/// 
/// 입력 예
/// 10
/// 
/// 출력 예
/// 1024
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=78&sca=10c0
/// </summary>
void FormativeFunction204::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void FormativeFunction204::Function(int n)
{
	int result{ 1 };

	for (int i = 0; i < n; i++)
	{
		result *= 2;
	}

	std::cout << result;
}