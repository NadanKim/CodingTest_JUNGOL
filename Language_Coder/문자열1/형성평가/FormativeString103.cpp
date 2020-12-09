#include "FormativeString103.h"

/// <summary>
/// 문제
/// 100개 이하의 문자열을 입력받아서 영문자와 숫자만 출력하되 영문자는 모두 소문자로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// Hancom1234@cqclass.com
/// 
/// 출력 예
/// hancom1234cqclasscom
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=84&sca=10e0
/// </summary>
void FormativeString103::Code()
{
	string str;

	std::cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			std::cout << static_cast<char>(tolower(str[i]));
		}
		else if (isdigit(str[i]))
		{
			std::cout << str[i];
		}
	}
}