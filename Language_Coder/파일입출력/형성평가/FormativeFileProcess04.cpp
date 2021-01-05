#include "FormativeFileProcess04.h"

/// <summary>
/// 문제
/// 정수 n(n≤10)을 입력받아 n!(팩토리얼)을 구하여 출력하시오.
/// n!= n * (n - 1) * (n - 2) * (n - 3) … 즉, 4!= 4 * 3 * 2 * 1 이다.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 5
/// 
/// 출력 예
/// 120
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=108&sca=10i0
/// </summary>
void FormativeFileProcess04::Code()
{
	int n;

	std::cin >> n;

	int result{ 1 };
	while (n > 0)
	{
		result *= n--;
	}

	std::cout << result;
}