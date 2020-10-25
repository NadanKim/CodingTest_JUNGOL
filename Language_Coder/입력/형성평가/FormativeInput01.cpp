#include "FormativeInput01.h"

/// <summary>
/// 문제
/// 세 개의 정수형 변수를 선언하고 각 변수에 10 20 30을 대입한 후 그 변수를 이용하여 출력 예와 같이 출력하는 프로그램을 작성하시오.
/// 
/// 출력 예
/// 10 + 20 = 30
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=6&sca=1020
/// </summary>
void FormativeInput01::Code()
{
	int var1{ 10 }, var2{ 20 }, var3{ 30 };

	std::cout << var1 << " + " << var2 << " = " << var3;
}