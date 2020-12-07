#include "BasicString105.h"

/// <summary>
/// 문제
/// 두 개의 문자열을 입력받아서 두 문자열의 길이의 합을 출력하는 프로그램을 작성하시오.
/// 각 문자열의 길이는 20자 미만이다.
/// 
/// 입력 예
/// Korean
/// English
/// 
/// 출력 예
/// 13
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=234&sca=10e0
/// </summary>
void BasicString105::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	std::cout << str1.size() + str2.size();
}