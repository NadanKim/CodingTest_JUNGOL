#include "FormativeArray207.h"

/// <summary>
/// 문제
/// 2행 3열 배열을 두 개 선언하여 각각의 값을 입력 받은 후 두 배열의 같은 위치끼리 곱하여 새로운 배열에 저장한 후
/// 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// first array
/// 3 6 9
/// 8 5 2
/// second array
/// 9 8 7
/// 6 5 4
/// 
/// 출력 예
/// 27 48 63
/// 48 25 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=66&sca=10a0
/// </summary>
void FormativeArray207::Code()
{
	int arr1[2][3];
	int arr2[2][3];

	std::cout << "first array\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr1[i][j];
		}
	}

	std::cout << "second array\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr2[i][j];
		}
	}

	int result[2][3];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << result[i][j] << ' ';
		}
		std::cout << '\n';
	}
}