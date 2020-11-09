#include "FormativeArray106.h"

/// <summary>
/// 문제
/// 6개의 문자배열을 만들고 {'J' 'U' 'N' 'G' 'O' 'L'} 으로 초기화 한 후 문자 한 개를 입력받아 배열에서의
/// 위치를 출력하는 프로그램을 작성하시오.
///
/// 첫 번째 위치는 0번이며 배열에 없는 문자가 입력되면 "none" 라는 메시지를 출력하고 끝내는 프로그램을 작성하시오.
/// 
/// 입력 예	/// 입력 예
/// L		/// B
///			///
/// 출력 예	/// 출력 예
/// 5		/// none
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=55&sca=1090
/// </summary>
void FormativeArray106::Code()
{
	const char arr[6]{ 'J', 'U', 'N', 'G', 'O', 'L' };

	char ch;

	std::cin >> ch;

	int idx{ -1 };
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == ch)
		{
			idx = i;
			break;
		}
	}

	if (idx != -1)
	{
		std::cout << idx;
	}
	else
	{
		std::cout << "none";
	}
}