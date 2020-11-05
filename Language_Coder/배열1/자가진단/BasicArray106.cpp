#include "BasicArray106.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 그 중 가장 작은 수를 출력하는 프로그램을 작성하시오.(입력받을 정수는 1000을 넘지 않는다.)
/// 
/// 입력 예
/// 5 10 8 55 6 31 12 24 61 2
/// 
/// 출력 예
/// 2
/// 
/// Hint!
/// 최소값 변수(예:min)의 초기값으로는 입력 받을 값보다 큰 값을 지정해야 한다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=197&sca=1090
/// </summary>
void BasicArray106::Code()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int min{ arr[0] };
	
	for (int i = 1; i < 10; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	std::cout << min;
}