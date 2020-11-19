#include "BasicFunction108.h"

/// <summary>
/// 문제
/// 10 이하의 두 개의 양의 정수를 입력받아서 작은 수부터 큰 수까지의 구구단을 차례대로 출력하는 프로그램을 구조화하여 작성하시오.
/// 
/// 입력 예
/// 3 5
/// 
/// 출력 예
/// == 3dan ==
/// 3 * 1 =  3
/// 3 * 2 =  6
/// 3 * 3 =  9
/// 3 * 4 = 12
/// 3 * 5 = 15
/// 3 * 6 = 18
/// 3 * 7 = 21
/// 3 * 8 = 24
/// 3 * 9 = 27
/// 
/// == 4dan ==
/// 4 * 1 =  4
/// 4 * 2 =  8
/// 4 * 3 = 12
/// …
/// 5 * 8 = 40
/// 5 * 9 = 45
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=215&sca=10b0
/// </summary>
void BasicFunction108::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	Function(var1, var2);
}

void BasicFunction108::Function(int var1, int var2)
{
	int small{ var1 < var2 ? var1 : var2 };
	int big{ var1 < var2 ? var2 : var1 };

	for (int i = small; i <= big; i++)
	{
		std::cout << "== " << i << "dan ==\n";

		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << std::setw(2) << i * j << '\n';
		}
		std::cout << '\n';
	}
}