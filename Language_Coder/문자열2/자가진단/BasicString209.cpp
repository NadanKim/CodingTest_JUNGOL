#include "BasicString209.h"

/// <summary>
/// 문제
/// 5개의 문자열을 입력받아 문자열 크기(아스키코드) 역순으로 정렬하여 출력하는 프로그램을 작성하시오.
/// 주어지는 문자열의 길이는 20자 미만이다.
///
/// 입력 예
/// Jungol
/// Korea
/// information
/// Monitor
/// class
/// 
/// 출력 예
/// information
/// class
/// Monitor
/// Korea
/// Jungol
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=247&sca=10f0
/// </summary>
void BasicString209::Code()
{
	string arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}


	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (arr[j][0] < arr[j + 1][0])
			{
				string temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << '\n';
	}
}