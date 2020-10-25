#include "FormativeDebug02.h"

/// <summary>
/// 문제
/// 실수로 된 3과목의 점수를 입력받아 총점은 정수부분의 합계를 출력하고 평균은 실수의 평균을 구한 뒤
/// 정수부분만 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 70.5 95.5 68.5
/// 
/// 출력 예
/// sum 233
/// avg 78
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=17&sca=1040
/// </summary>
void FormativeDebug02::Code()
{
	float var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int sum = static_cast<int>(var1) + static_cast<int>(var2) + static_cast<int>(var3);
	int avg = static_cast<int>((var1 + var2 + var3) / 3);

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "sum " << sum << '\n';
	std::cout << "avg " << avg;
}