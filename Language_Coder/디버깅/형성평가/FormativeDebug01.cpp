#include "FormativeDebug01.h"

/// <summary>
/// 문제
/// 정수로 된 3과목의 점수를 입력받아 평균을 구한 후 반올림하여 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 70 95 65
/// 
/// 출력 예
/// 76.7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=16&sca=1040
/// </summary>
void FormativeDebug01::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	float avg = (var1 + var2 + var3) / 3.0f;

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << avg;
}