#include "BasicArray203.h"

/// <summary>
/// 문제
/// 100 이하의 자연수를 입력받아 첫 번째 항은 100으로 두 번째 항은 입력받은 수로 초기화하고
/// 다음 항부터는 전전항에서 전항을 뺀 수로 채워나가는 수열을 작성하여그 수가 음수가 나올 때까지 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 62
/// 
/// 출력 예
/// 100 62 38 24 14 10 4 6 -2
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=203&sca=10a0
/// </summary>
void BasicArray203::Code()
{
	int num;

	std::cin >> num;

	int arr[100]{ 100, num };

	for (int i = 2; i < 100; i++)
	{
		arr[i] = arr[i - 2] - arr[i - 1];

		if (arr[i] < 0)
		{
			break;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		std::cout << arr[i] << ' ';

		if (arr[i] < 0)
		{
			break;
		}
	}
}