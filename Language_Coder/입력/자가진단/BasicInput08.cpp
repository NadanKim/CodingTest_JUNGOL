#include "BasicInput08.h"

/// <summary>
/// 문제
/// 실수 2개와 한 개의 문자를 입력 받아 출력하되 실수는 반올림하여 소수 둘째자리까지 출력하는 프로그램을작성하시오.
/// (C, C++, Java 의 경우 실수는 "double"로 선언하세요.)
/// 
/// 입력 예
/// 12.2536
/// 526.129535
/// A
/// 
/// 출력 예
/// 12.25
/// 526.13
/// A
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=153&sca=1020
/// </summary>
void BasicInput08::Code()
{
	double var1, var2;
	char ch;

	std::cin >> var1 >> var2 >> ch;

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << var1 << '\n';
	std::cout << var2 << '\n';
	std::cout << ch;
}