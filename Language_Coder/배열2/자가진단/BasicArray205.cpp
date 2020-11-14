#include "BasicArray205.h"

/// <summary>
/// 문제
/// 2행 4열의 배열 두 개를 만들어서 입력을 받고 두 배열의 곱을 구하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// first array
/// 1 2 3 4
/// 5 6 7 8
/// second array
/// 1 4 7 8
/// 3 6 9 8
/// 
/// 출력 예
/// 1 8 21 32
/// 15 36 63 64
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=205&sca=10a0
/// </summary>
void BasicArray205::Code()
{
	int arr1[2][4];
	int arr2[2][4];

	std::cout << "first array\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> arr1[i][j];
		}
	}

	std::cout << "second array\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> arr2[i][j];
		}
	}

	int result[2][4];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			result[i][j] = arr1[i][j] * arr2[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << result[i][j] << ' ';
		}
		std::cout << '\n';
	}
}