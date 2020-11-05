#include "BasicArray107.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 100 미만의 수 중 가장 큰 수와 100 이상의 수 중 가장 작은 수를 출력하는 프로그램을 작성하시오.
/// (입력되는 정수의 범위는 1이상 10, 000 미만이다.만약 해당하는 수가 없을 때에는 100 을 출력한다.)
///
/// 입력 예
/// 88 123 659 15 443 1 99 313 105 48
/// 
/// 출력 예
/// 99 105
/// 
/// Hint!
/// 100 미만의 수로 입력 가능한 범위는 1~99, 100 이상의 수로 입력 가능한 범위는 100~9999 이다.
/// 입력값보다 큰수(작은수)를 초기값으로 정하고 작업이 끝난 후 초기값이 그대로 있다면 해당하는 수가 없는 것이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=198&sca=1090
/// </summary>
void BasicArray107::Code()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int min{ 10000 }, max{ 0 };

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 100 && arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] >= 100 && arr[i] < min)
		{
			min = arr[i];
		}
	}

	min = (min != 10000 ? min : 100);
	max = (max != 0 ? max : 100);

	std::cout << max << ' ' << min;
}