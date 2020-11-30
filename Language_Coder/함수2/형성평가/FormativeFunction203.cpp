#include "FormativeFunction203.h"

/// <summary>
/// 문제
/// 5개의 정수를 입력받아 각 정수의 절대값의 합을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 35 -20 10 0 55
/// 
/// 출력 예
/// 120
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=77&sca=10c0
/// </summary>
void FormativeFunction203::Code()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	Function(arr);
}

void FormativeFunction203::Function(int arr[])
{
	int sum{ 0 };

	for (int i = 0; i < 5; i++)
	{
		sum += abs(arr[i]);
	}

	std::cout << sum;
}