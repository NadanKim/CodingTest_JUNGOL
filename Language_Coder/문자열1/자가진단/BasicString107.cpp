#include "BasicString107.h"

/// <summary>
/// 문제
/// 문자열을 입력받아 알파벳 문자만 모두 대문자로 출력하는 프로그램을 작성하시오.
/// 문자열의 길이는 100이하이다.
///
/// 입력 예
/// 1988-Seoul-Olympic!!!
/// 
/// 출력 예
/// SEOULOLYMPIC
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=236&sca=10e0
/// </summary>
void BasicString107::Code()
{
	string str;

	std::cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			std::cout << static_cast<char>(toupper(str[i]));
		}
	}
}