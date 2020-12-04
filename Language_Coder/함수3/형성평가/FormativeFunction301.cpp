#include "FormativeFunction301.h"

/// <summary>
/// 문제
/// 자연수 N을 입력받아 1부터 N까지 출력을 하되 n-1번째 값은 n번째 값을 2로 나눈 몫이 되도록 하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 100
/// 
/// 출력 예
/// 1 3 6 12 25 50 100
/// 
/// Hint!
/// n/2를 호출한 후에 n을 출력하도록 하는 재귀함수를 작성한다.
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=131&sca=10d0
/// </summary>
void FormativeFunction301::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void FormativeFunction301::Function(int n)
{
	if (n == 0)
	{
		return;
	}

	Function(n / 2);
	std::cout << n << ' ';
}