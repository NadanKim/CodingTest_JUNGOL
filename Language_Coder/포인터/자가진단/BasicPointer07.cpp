#include "BasicPointer07.h"

/// <summary>
/// 문제
/// 배열의 크기를 입력받아 입력받은 크기만큼 배열에 정수를 입력받고 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 4
/// 15 23 100 38
/// 
/// 출력 예
/// 100 38 23 15
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=262&sca=10h0
/// </summary>
void BasicPointer07::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
}