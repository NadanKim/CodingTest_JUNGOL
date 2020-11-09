#include "FormativeArray102.h"

/// <summary>
/// 문제
/// 5개의 정수를 입력받은 후 첫 번째 세 번째 다섯 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 15 20 33 10 9
/// 
/// 출력 예
/// 57
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=51&sca=1090
/// </summary>
void FormativeArray102::Code()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	int sum{ arr[0] + arr[2] + arr[4] };

	std::cout << sum;
}