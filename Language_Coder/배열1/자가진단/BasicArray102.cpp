#include "BasicArray102.h"

/// <summary>
/// 문제
/// 정수 10 개를 저장할 수 있는 배열을 만들어서 1 부터 10 까지를 대입하고 차례대로 출력하는 프로그램을 작성하시오.
///
/// 출력 예
/// 1 2 3 4 5 6 7 8 9 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=193&sca=1090
/// </summary>
void BasicArray102::Code()
{
	int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
}