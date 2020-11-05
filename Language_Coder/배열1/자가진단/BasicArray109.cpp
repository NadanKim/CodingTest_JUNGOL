#include "BasicArray109.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 배열에 저장한 후 내림차순으로 정렬하여 출력하시오.
///
/// 입력 예
/// 95 100 88 65 76 89 58 93 77 99
/// 
/// 출력 예
/// 100 99 95 93 89 88 77 76 65 58
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=200&sca=1090
/// </summary>
void BasicArray109::Code()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
}