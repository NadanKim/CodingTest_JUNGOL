#include "FormativeFileProcess01.h"

/// <summary>
/// 문제
/// 실수 2개를 입력 받아 합계를 구하고 각각 소수 셋째 자리에서 반올림하여 둘째 자리까지 한 줄에 출력하시오.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 80.504 22.34
/// 
/// 출력 예
/// 80.50 22.34 102.84
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=105&sca=10i0
/// </summary>
void FormativeFileProcess01::Code()
{
	double var1, var2;

	std::cin >> var1 >> var2;

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << var1 << ' ' << var2 << ' ' << var1 + var2;
}