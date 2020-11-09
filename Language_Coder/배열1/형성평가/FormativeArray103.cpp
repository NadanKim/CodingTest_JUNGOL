#include "FormativeArray103.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10 20 25 66 83 7 22 90 1 100
/// 
/// 출력 예
/// odd : 141
/// even : 283
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=52&sca=1090
/// </summary>
void FormativeArray103::Code()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int odd{ 0 };
	for (int i = 0; i < 10; i += 2)
	{
		odd += arr[i];
	}

	int even{ 0 };
	for (int i = 1; i < 10; i += 2)
	{
		even += arr[i];
	}

	std::cout << "odd : " << odd << '\n';
	std::cout << "even : " << even;
}