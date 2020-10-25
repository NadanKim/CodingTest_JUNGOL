#include "FormativeInput03.h"

/// <summary>
/// 문제
/// 정수형 변수 한 개를 선언하여 50을 대입하고 실수형 변수 한 개를 선언하여 100.12를 대입한 후
/// 다음과 같이 출력되는 프로그램을 작성하시오. (결과값은 소수점 이하에서 반올림)
/// 
/// 출력 예
/// 100.12 * 50 = 5006
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=8&sca=1020
/// </summary>
void FormativeInput03::Code()
{
	int var1{ 50 };
	float var2{ 100.12f };
	int result{ static_cast<int>(var1 * var2 + 0.5f) };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << var2 << " * " << var1 << " = " << result;
}