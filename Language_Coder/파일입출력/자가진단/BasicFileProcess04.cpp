#include "BasicFileProcess04.h"

/// <summary>
/// 문제
/// 공백을 포함한 문자열을 두 번 입력받아 길이가 작은 문자열과 긴 문자열의 순으로 출력하는 프로그램을 작성하시오.
/// 각 문자열의 길이는 100자를 넘지 않는다.
///
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// Love, like you've never been hurt.
/// Live, like today is the lost day to live.
/// 
/// 출력 예
/// Love, like you've never been hurt.
/// Live, like today is the lost day to live.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=266&sca=10i0
/// </summary>
void BasicFileProcess04::Code()
{
	string str1, str2;

	std::getline(std::cin, str1);
	std::getline(std::cin, str2);

	if (str1.size() < str2.size())
	{
		std::cout << str1 << '\n' << str2;
	}
	else
	{
		std::cout << str2 << '\n' << str1;
	}
}