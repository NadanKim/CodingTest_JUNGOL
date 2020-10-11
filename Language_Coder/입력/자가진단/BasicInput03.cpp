#include "BasicInput03.h"

/// <summary>
/// 문제
/// 두 개의 정수형 변수를 선언하고 값을 대입하여 아래와 같이 출력되는 프로그램을 작성하라.
/// 
/// 출력 예
/// 55 - 10 = 45
/// 2008 - 1999 = 9
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=148&sca=1020
/// </summary>
void BasicInput03::Code()
{
	int var1, var2;

	var1 = 55;
	var2 = 10;
	std::cout << var1 << " - " << var2 << " = " << var1 - var2 << '\n';

	var1 = 2008;
	var2 = 1999;
	std::cout << var1 << " - " << var2 << " = " << var1 - var2;
}