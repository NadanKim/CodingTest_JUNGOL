#include "FormativeArray204.h"

/// <summary>
/// 문제
/// 4행 3열의 배열을 선언하고 아래의 값으로 초기화 한 후 차례대로 출력한 후 배열의 모든 값을 더한 결과를 출력하는 프로그램을 작성하시오.
///
/// { {3, 5, 9}, { 2, 11, 5 }, { 8, 30, 10 }, { 22, 5, 1 }}
/// 
/// 출력 예
/// 3 5 9
/// 2 11 5
/// 8 30 10
/// 22 5 1
/// 111
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=63&sca=10a0
/// </summary>
void FormativeArray204::Code()
{
	int arr[4][3]{
		3, 5, 9,
		2, 11, 5,
		8, 30, 10,
		22, 5, 1
	};

	int sum{ 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];

			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	std::cout << sum;
}