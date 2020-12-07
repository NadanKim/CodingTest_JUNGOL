#include "BasicString108.h"

/// <summary>
/// 문제
/// 공백을 포함한 100글자 이하의 문자열을 입력받아 문장을 이루는 단어의 개수를 출력하는 프로그램을 작성하시오.
///
/// * 문장입력 할 때 gets()함수 대신 fgets() 함수를 사용하세요.C++14 적용!​
///
/// 입력 예
/// My name is Kimchulsoo
/// 
/// 출력 예
/// 4
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=237&sca=10e0
/// </summary>
void BasicString108::Code()
{
	string str;

	std::getline(std::cin, str);

	int count{ 1 };

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

	std::cout << count;
}