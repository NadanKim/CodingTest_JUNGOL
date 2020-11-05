#include "BasicArray104.h"

/// <summary>
/// 문제
/// 100 개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가 0 이 입력되면 0 을 제외하고
/// 그 때까지 입력된 정수를 가장 나중에 입력된 정수부터 차례대로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3 5 10 55 0
/// 
/// 출력 예
/// 55 10 5 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=195&sca=1090
/// </summary>
void BasicArray104::Code()
{
	int count{ 0 };
	int arr[100];

	for (int i = 0; i < 100; i++, count++)
	{
		std::cin >> arr[i];
		if (arr[i] == 0)
		{
			break;
		}
	}

	for (int i = count - 1; i >= 0; i--)
	{
		std::cout << arr[i] << ' ';
	}
}