#include "FormativePointer05.h"

/// <summary>
/// 문제
/// 정수 n을 입력받아 n개의 정수형 동적배열을 생성하고 n개의 정수를 입력받아 최대값과 최소값을
/// 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 5
/// 15 90 8 36 25
/// 
/// 출력 예
/// max : 90
/// min : 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=104&sca=10h0
/// </summary>
void FormativePointer05::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int max{ arr[0] }, min{ arr[0] };
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	std::cout << "max : " << max << '\n';
	std::cout << "min : " << min;

	delete[] arr;
}