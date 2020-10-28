#include "BasicLoop207.h"

/// <summary>
/// 문제
/// 아래와 같이 출력되는 프로그램을 작성하시오.
///
/// 출력 예
/// 2 3 4 5 6
/// 3 4 5 6 7
/// 4 5 6 7 8
/// 5 6 7 8 9
/// 6 7 8 9 10
/// 
/// Hint!
/// i와 j값을 둘 다 활용하여 식을 만들어 본다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=184&sca=1070
/// </summary>
void BasicLoop207::Code()
{
	for (int i = 2; i <= 6; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			std::cout << i + j << ' ';
		}
		std::cout << '\n';
	}
}