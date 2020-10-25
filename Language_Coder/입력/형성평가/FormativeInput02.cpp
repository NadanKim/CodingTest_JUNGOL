#include "FormativeInput02.h"

/// <summary>
/// 문제
/// 실수형 변수를 2개 선언한 후 각각에 80.5 22.34를 대입한 후 두 수의 합을 구하여
/// 각각의 숫자를 10칸씩 오른쪽에 맞추어 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
/// 
/// 출력 예
///      80.50     22.34    102.84
/// 
/// Hint!
/// 공백을 넣을 경우 1칸을 차지한다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=7&sca=1020
/// </summary>
void FormativeInput02::Code()
{
	float var1{ 80.5f }, var2{ 22.34f };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed | std::ios::right);
	
	std::cout << std::setw(10) << var1 << std::setw(10) << var2 << std::setw(10) << var1 + var2;
}