#include "FormativeString107.h"

/// <summary>
/// 문제
/// 공백을 포함한 문자열을 입력받아 다음과 같이 분리하여 번호와 함께 출력하는 프로그램을 작성하시오.
/// 문자열의 길이는 100자 이하이다.
/// 
/// * 문장 입력할 때 gets()함수 대신 fgets() 함수를 사용하세요.C++14 적용!​
///
/// 입력 예
/// My name is Kimchulsoo
/// 
/// 출력 예
/// 1. My
/// 2. name
/// 3. is
/// 4. Kimchulsoo
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=88&sca=10e0
/// </summary>
void FormativeString107::Code()
{
	string str;

	std::getline(std::cin, str);

	int count{ 2 };

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

	for (int i = 0, j = 0; i < count - 1; i++)
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