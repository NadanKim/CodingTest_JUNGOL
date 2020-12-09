#include "FormativeString101.h"

/// <summary>
/// 문제
/// 영문자 두 개를 입력 받아서 각각의 아스키코드의 합과 차를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// A a
/// 
/// 출력 예
/// 162 32
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=82&sca=10e0
/// </summary>
void FormativeString101::Code()
{
	char ch1, ch2;

	std::cin >> ch1 >> ch2;

	int var1{ static_cast<int>(ch1) };
	int var2{ static_cast<int>(ch2) };

	std::cout << var1 + var2 << ' ' << abs(var1 - var2);
}