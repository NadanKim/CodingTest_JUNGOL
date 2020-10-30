#include "FormativeLoop208.h"

/// <summary>
/// 문제
/// 행과 열의 수를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3 4
/// 
/// 출력 예
/// 1 2 3 4
/// 2 4 6 8
/// 3 6 9 12
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=37&sca=1070
/// </summary>
void FormativeLoop208::Code()
{
	int row, column;

	std::cin >> row >> column;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			std::cout << i * j << ' ';
		}
		std::cout << '\n';
	}
}