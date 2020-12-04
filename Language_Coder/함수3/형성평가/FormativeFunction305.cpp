#include "FormativeFunction305.h"

/// <summary>
/// 문제
/// 100만 이하의 자연수 N을 입력받아 짝수이면 2로 홀수이면 3으로 나누는 작업을 반복하다가
/// 그 값이 1이 되면 그때까지 나누었던 작업의 횟수를 출력하는 프로그램을 재귀함수로 작성하시오.
/// 
/// 입력 예
/// 100
/// 
/// 출력 예
/// 6
/// 
/// Hint!
/// 100 → 50 → 25 → 8 → 4 → 2 → 1 횟수(level)도 함께 전달하고 n이 1이면 level을 출력하면 된다. 함수(n/2 또는 n/3 level+1)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=135&sca=10d0
/// </summary>
void FormativeFunction305::Code()
{
	int n;

	std::cin >> n;

	Function(n, 0);
}

void FormativeFunction305::Function(int n, int count)
{
	if (n == 1)
	{
		std::cout << count;
		return;
	}
	
	if (n % 2 == 0)
	{
		Function(n / 2, count + 1);
	}
	else
	{
		Function(n / 3, count + 1);
	}
}