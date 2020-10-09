#include "BasicPrint05.h"

/// <summary>
/// 문제
/// 서식 문자를 사용하여 다음과 같이 출력되는 프로그램을 작성하라.
/// 
/// 출력 예
/// I can program well.
/// Dreams come true.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=142&sca=10
/// </summary>
void BasicPrint05::Code()
{
	std::string str1("I can program well.\n");
	std::string str2("Dreams come true.");

	std::cout << str1 << str2;
}