#include "FormativeString209.h"

/// <summary>
/// 문제
/// 정수, 실수, 문자열을 차례로 입력받아서 새로운 문자열에 출력한 후 전체의 길이를 2등분하여 출력하는 프로그램을 작성하시오.
/// 실수는 반올림하여 소수 셋째자리까지 출력하는 것으로 하고, 새로운 문자열의 길이가 홀수일 때는 첫 번째 줄에 한 개를 더 출력한다.
/// 각 문자열의 길이는 30자 이내이다.
///
/// 입력 예
/// 12345 5.0123 fighting
/// 
/// 출력 예
/// 123455.01
/// 2fighting
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=137&sca=10f0
/// </summary>
void FormativeString209::Code()
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