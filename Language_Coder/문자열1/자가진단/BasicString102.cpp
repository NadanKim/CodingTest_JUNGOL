#include "BasicString102.h"

/// <summary>
/// 문제
/// 문자열을 입력받은 뒤 그 문자열을 이어서 두 번 출력하는 프로그램을 작성하시오.
/// 문자열의 길이는 100이하이다.
///
/// 입력 예
/// ASDFG
/// 
/// 출력 예
/// ASDFGASDFG
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=231&sca=10e0
/// </summary>
void BasicString102::Code()
{
	string str;

	std::cin >> str;

	std::cout << str << str;
}