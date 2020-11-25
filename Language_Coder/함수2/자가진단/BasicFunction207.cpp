#include "BasicFunction207.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 버블정렬로 내림차순 정렬을 하면서 하나의 단계가 끝날 때마다 그 정렬결과를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 15 93 26 8 43 10 25 88 75 19
/// 
/// 출력 예
/// 93 26 15 43 10 25 88 75 19 8
/// 93 26 43 15 25 88 75 19 10 8
/// 93 43 26 25 88 75 19 15 10 8
/// 93 43 26 88 75 25 19 15 10 8
/// 93 43 88 75 26 25 19 15 10 8
/// 93 88 75 43 26 25 19 15 10 8
/// 93 88 75 43 26 25 19 15 10 8
/// 93 88 75 43 26 25 19 15 10 8
/// 93 88 75 43 26 25 19 15 10 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=222&sca=10c0
/// </summary>
void BasicFunction207::Code()
{
	int arr[10]{};

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		Function(arr);
	}
}

void BasicFunction207::Function(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}