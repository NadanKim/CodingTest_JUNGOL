#include "FormativeArray209.h"

/// <summary>
/// 문제
/// 행의 크기를 입력받아 파스칼 삼각형을 작성하여 마지막 행부터 첫 번째 행까지 차례로 출력하는 프로그램을 작성하시오.
/// 행의 크기는 최대 10이다.
/// 
/// 입력 예
/// 6
/// 
/// 출력 예
/// 1 5 10 10 5 1
/// 1 4 6 4 1
/// 1 3 3 1
/// 1 2 1
/// 1 1
/// 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=68&sca=10a0
/// </summary>
void FormativeArray209::Code()
{
	int arr[10][10]{};
	
	for (int i = 0; i < 10; i++)
	{
		arr[i][0] = 1;
	}

	int var;

	std::cin >> var;

	for (int i = var - 2; i >= 0; i--)
	{
		for (int j = 1; j < var - i; j++)
		{
			arr[i][j] = arr[i + 1][j - 1] + arr[i + 1][j];
		}
	}

	for (int i = 0; i < var; i++)
	{
		for (int j = 0; j < var - i; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}