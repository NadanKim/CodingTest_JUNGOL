#include "BasicFunction306.h"

/// <summary>
/// 문제
/// 첫 번째 수는 1이고 N번째 수는(N / 2)번째 수(파이썬인경우 N//2번째)와 (N-1)번째 수의 합으로 구성된 수열이 있다.
/// 50 이하의 자연수 N을 입력받아 재귀호출을 이용하여 이 수열에서 N번째 수를 출력하는 프로그램을 작성하시오.
/// (1 2 3 5 7 10 13 18 …)
/// 
/// 입력 예
/// 8
/// 
/// 출력 예
/// 18
/// 
/// Hint!
/// 8번째 수는 4번째(8/2) 수인 5와 7번째(8-1) 수인 13의 합이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=228&sca=10d0
/// </summary>
void BasicFunction306::Code()
{
	int n;

	std::cin >> n;

	std::cout << Function(n);
}

int BasicFunction306::Function(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return Function(n / 2) + Function(n - 1);
}