#include "FormativeArray110.h"

/// <summary>
/// 문제
/// 20 이하의 정수 n을 입력받고 n명의 점수를 입력받아 높은 점수부터 차례로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 5
/// 35 10 35 100 64
/// 
/// 출력 예
/// 100
/// 64
/// 35
/// 35
/// 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=59&sca=1090
/// </summary>
void FormativeArray110::Code()
{
	int n;
	
	std::cin >> n;

	int* arr{ new int[n] };

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
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}