#include "FormativeFunction304.h"

/// <summary>
/// 문제
/// 첫 번째는 1, 두 번째는 2, 세 번째부터는 앞의 두 수의 곱을 100으로 나눈 나머지로 이루어진 수열이 있다.
/// 
/// 100 이하의 자연수 N을 입력받아 재귀함수를 이용하여 N번째 값을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 8
/// 
/// 출력 예
/// 92
/// 
/// Hint!
/// 1 2 2 4 8 32 56 92 ...
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=134&sca=10d0
/// </summary>
void FormativeFunction304::Code()
{
	int n;

	std::cin >> n;

	Function(1, 2, n - 1);
}

void FormativeFunction304::Function(int num1, int num2, int n)
{
	if (n == 0)
	{
		std::cout << num1;
		return;
	}

	Function(num2, (num1 * num2) % 100, n - 1);
}