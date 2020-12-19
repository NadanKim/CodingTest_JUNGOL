#include "BasicPointer04.h"

/// <summary>
/// 문제
/// 5개짜리 정수형 배열을 선언하고 포인터 변수에 저장한 후 포인터 변수를 이용하여 입력을 받은 후 홀수번째 입력값을
/// 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 1 15 23 9 12
/// 
/// 출력 예
/// 1 23 12
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=259&sca=10h0
/// </summary>
void BasicPointer04::Code()
{
	int arr[5];
	int* p{ arr };

	for (int i = 0; i < 5; i++)
	{
		std::cin >> p[i];
	}

	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 == 1)
		{
			std::cout << p[i - 1] << ' ';
		}
	}
}