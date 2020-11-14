#include "BasicArray202.h"

/// <summary>
/// 문제
/// 100 미만의 양의 정수들이 주어진다. 
/// 입력받다가 0 이 입력되면 마지막에 입력된 0 을 제외하고 
/// 그 때까지 입력된 정수의 십의 자리 숫자가 각각 몇 개인지 
/// 작은 수부터 출력하는 프로그램을 작성하시오. (0개인 숫자는 출력하지 않는다.)
///
/// 입력 예
/// 10 55 3 63 85 61 85 0
/// 
/// 출력 예
/// 0 : 1
/// 1 : 1
/// 5 : 1
/// 6 : 2
/// 8 : 2
/// 
/// Hint!
/// 10의 자리 숫자는 10으로 나눈 몫이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=202&sca=10a0
/// </summary>
void BasicArray202::Code()
{
	int arr[10]{};
	int num;

	while (true)
	{
		std::cin >> num;

		if (num == 0)
		{
			break;
		}

		arr[num / 10]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			std::cout << i << " : " << arr[i] << '\n';
		}
	}
}