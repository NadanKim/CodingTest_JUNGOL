#include "BasicString211.h"

/// <summary>
/// 문제
/// 5개의 정수를 입력받아 모두 붙여서 문자열로 저장한 후 세 자씩 나누어서 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 12 5963 58 1 45678
/// 
/// 출력 예
/// 125
/// 963
/// 581
/// 456
/// 78
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=249&sca=10f0
/// </summary>
void BasicString211::Code()
{
	int var;
	string str;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> var;
		str.append(std::to_string(var));
	}

	for (int i = 0; i < str.size(); i += 3)
	{
		for (int j = i, k = i + 3; j < k && j < str.size(); j++)
		{
			std::cout << str[j];
		}
		std::cout << '\n';
	}
}