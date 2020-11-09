#include "FormativeArray104.h"

/// <summary>
/// 문제
/// 100개의 정수를 입력받을 수 있는 배열을 선언한 후 정수를 차례로 입력 받다가 -1이 입력되면 입력을 중단하고
/// -1을 제외한 마지막 세 개의 정수를 출력하는 프로그램을 작성하시오. (입력받은 정수가 -1을 제외하고 3개 미만일 경우에는
/// -1을 제외하고 입력받은 정수를 모두 출력한다.)
/// 
/// 입력 예
/// 30 20 10 60 80 -1
/// 
/// 출력 예
/// 10 60 80
/// 
/// Hint!
/// 마지막에 입력된 위치는 [입력받은 개수-1] 이고 그 앞에 입력받은 것은 [입력받은 개수-2] 이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=53&sca=1090
/// </summary>
void FormativeArray104::Code()
{
	int arr[100];
	int count{ 0 };

	for (int i = 0; i < 100; i++)
	{
		std::cin >> arr[i];

		if (arr[i] == -1)
		{
			break;
		}

		count++;
	}

	for (int i = (count - 3); i < count; i++)
	{
		if (i >= 0)
		{
			std::cout << arr[i] << ' ';
		}
	}
}