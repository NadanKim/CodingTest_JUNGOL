#include "BasicArray103.h"

/// <summary>
/// 문제
/// 10개의 문자를 입력받아서 첫 번째 네 번째 일곱 번째 입력받은 문자를 차례로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// A B C D E F G H I J
/// 
/// 출력 예
/// A D G
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=194&sca=1090
/// </summary>
void BasicArray103::Code()
{
	char arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << arr[0] << ' ' << arr[3] << ' ' << arr[6];
}