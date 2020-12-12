#include "FormativeString207.h"

/// <summary>
/// 문제
/// 두 개의 문자열을 입력받아 앞에서부터 정수로 변환 가능한 부분을 변환한 후 두 수의 곱을 출력하는 프로그램을 작성하시오.
/// 각 문자열의 길이는 100이하이다.
///
/// 입력 예
/// 123.45  67@12 
/// 
/// 출력 예
/// 8241
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=115&sca=10f0
/// </summary>
void FormativeString207::Code()
{
	string str;

	std::getline(std::cin, str);

	int count{ 2 };

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

	for (size_t i = 0, j = 0; i < count - 1; i++)
	{
		std::cout << i + 1 << ". ";

		while (j < str.size())
		{
			std::cout << str[j++];

			if (str[j] == ' ')
			{
				j++;
				break;
			}
		}

		std::cout << '\n';
	}
}