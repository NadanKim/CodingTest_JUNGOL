#include "FormativeArray107.h"

/// <summary>
/// 문제
/// 세 자리 이하의 정수를 차례로 입력 받다가 999가 입력되면 프로그램을 종료하고 그 때까지 입력된 최대값과 최소값을
/// 출력하는 프로그램을 작성하시오. 입력받는 정수는 100개 이하이다.
///
/// 입력 예
/// 45 19 123 58 10 -55 16 -1 999
/// 
/// 출력 예
/// max : 123 
/// min : -55
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=56&sca=1090
/// </summary>
void FormativeArray107::Code()
{
	int arr[100];
	int count{ 0 };

	for (int i = 0; i < 100; i++)
	{
		std::cin >> arr[i];

		if (arr[i] == 999)
		{
			break;
		}

		count++;
	}

	int max{ arr[0] }, min{ arr[0] };
	for (int i = 0; i < count; i++)
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
}