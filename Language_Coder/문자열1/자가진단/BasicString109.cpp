#include "BasicString109.h"

/// <summary>
/// 문제
/// 문자열을 입력 받아서 문자수만큼 오른쪽으로 한 바퀴 회전하여 출력하는 프로그램을 작성하시오.
/// 문자열의 길이는 100이하이다.
///
/// 입력 예
/// PROGRAM
/// 
/// 출력 예
/// MPROGRA
/// AMPROGR
/// RAMPROG
/// GRAMPRO
/// OGRAMPR
/// ROGRAMP
/// PROGRAM
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=238&sca=10e0
/// </summary>
void BasicString109::Code()
{
	string str;

	std::cin >> str;

	int n{ static_cast<int>(str.size()) };
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j < n; j++)
		{
			std::cout << str[j];
		}

		for (int j = 0; j < n - i; j++)
		{
			std::cout << str[j];
		}

		std::cout << '\n';
	}
}