#include "FormativeFunction101.h"

/// <summary>
/// 문제
/// ‘@’문자를 10개 출력하는 함수를 작성 한 후 함수를 세 번 호출하여 아래와 같이 출력하는 프로그램을 작성하시오.
/// 
/// 출력 예
/// first
/// @@@@@@@@@@
/// second
/// @@@@@@@@@@
/// third
/// @@@@@@@@@@
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=70&sca=10b0
/// </summary>
void FormativeFunction101::Code()
{
	std::cout << "first\n";
	Function();

	std::cout << "second\n";
	Function();

	std::cout << "third\n";
	Function();
}

void FormativeFunction101::Function()
{
	std::cout << "@@@@@@@@@@\n";
}