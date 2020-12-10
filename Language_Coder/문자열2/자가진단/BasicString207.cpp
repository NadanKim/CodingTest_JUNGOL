#include "BasicString207.h"

/// <summary>
/// 문제
/// 100개 이하의 문자로 구성된 한 개의 문자열을 입력받아서 그 문자열에 문자 'c'와 문자열 "ab"의 포함여부를
/// "Yes", "No"로 구분하여 출력예처럼 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// abdef
/// 
/// 출력 예
/// No Yes
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=245&sca=10f0
/// </summary>
void BasicString207::Code()
{
	string str;

	std::cin >> str;

	bool hasC{ false };
	if (str.find('c') != ULLONG_MAX)
	{
		hasC = true;
	}

	bool hasAB{ false };
	if (str.find("ab") != ULLONG_MAX)
	{
		hasAB = true;
	}

	std::cout << (hasC ? "Yes" : "No") << ' ' << (hasAB ? "Yes" : "No");
}