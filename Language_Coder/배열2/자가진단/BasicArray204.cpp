#include "BasicArray204.h"

/// <summary>
/// 문제
/// 3행 5열의 배열을 아래 출력 예와 같이 초기화 한 후 출력하는 프로그램을 작성하시오.
/// 
/// 숫자사이의 공백은 3칸으로하고 각 숫자는 2칸으로 오른쪽에 맞추어 출력한다.예, "%2d   "
/// 
/// 출력 예
///  5    8   10    6    4
/// 11   20    1   13    2
///  7    9   14   22    3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=204&sca=10a0
/// </summary>
void BasicArray204::Code()
{
	int arr[3][5]{
		5, 8, 10, 6, 4,
		11, 20, 1, 13, 2,
		7, 9, 14, 22, 3
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << std::setw(2) << arr[i][j] << "   ";
		}
		std::cout << '\n';
	}
}