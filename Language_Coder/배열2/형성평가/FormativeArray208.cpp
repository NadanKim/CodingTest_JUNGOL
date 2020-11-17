#include "FormativeArray208.h"

/// <summary>
/// 문제
/// 4행 2열의 배열을 입력받아 가로평균과 세로평균 그리고 전체평균을 출력하는 프로그램을 작성하시오. (소수점 이하는 버림 한다.)
/// 
/// 입력 예
/// 16 27
/// 39 100
/// 19 88
/// 61 20
/// 
/// 출력 예
/// 21 69 53 40
/// 33 58
/// 46
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=67&sca=10a0
/// </summary>
void FormativeArray208::Code()
{
	int arr[4][2];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		int sum{ 0 };

		for (int j = 0; j < 2; j++)
		{
			sum += arr[i][j];
		}

		int avg{ sum / 2 };

		std::cout << avg << ' ';
	}
	std::cout << '\n';

	for (int i = 0; i < 2; i++)
	{
		int sum{ 0 };

		for (int j = 0; j < 4; j++)
		{
			sum += arr[j][i];
		}

		int avg{ sum / 4 };

		std::cout << avg << ' ';
	}
	std::cout << '\n';

	int sum{ 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum += arr[i][j];
		}
	}

	int avg{ sum / 8 };

	std::cout << avg;
}