#include "BasicString208.h"

/// <summary>
/// 문제
/// 세 개의 단어를 입력받아 아스키코드(사전) 순으로 가장 먼저 나오는 단어를 출력하는 프로그램을 작성하시오.
/// 각 단어의 길이는 1이상 10 이하이다.
///
/// 입력 예
/// cat dog cow
/// 
/// 출력 예
/// cat
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=246&sca=10f0
/// </summary>
void BasicString208::Code()
{
	string arr[3];
	
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	string result{ arr[0] };
	for (int i = 1; i < 3; i++)
	{
		if (result > arr[i])
		{
			result = arr[i];
		}
	}

	std::cout << result;
}