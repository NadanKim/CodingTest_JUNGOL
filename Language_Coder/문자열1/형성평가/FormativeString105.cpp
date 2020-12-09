#include "FormativeString105.h"

/// <summary>
/// 문제
/// 두 개의 단어를 입력받아서 길이가 긴 단어의 문자 개수를 출력하는 프로그램을 작성하시오. 단어의 길이는 100자 이하다.
/// 
/// 입력 예
/// excel powerpoint
/// 
/// 출력 예
/// 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=86&sca=10e0
/// </summary>
void FormativeString105::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	size_t result{ str1.size() > str2.size() ? str1.size() : str2.size() };

	std::cout << result;
}