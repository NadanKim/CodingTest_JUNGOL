#include "FormativeFileProcess02.h"

/// <summary>
/// 문제
/// 3개의 정수를 입력 받아 합계와 평균을 구하여 출력하되 평균은 정수부분만 출력하고 나머지를 예와 같이 출력하시오.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 36 85 100
/// 
/// 출력 예
/// 221 73...2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=106&sca=10i0
/// </summary>
void FormativeFileProcess02::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int sum{ var1 + var2 + var3 };

	std::cout << sum << ' ' << sum / 3 << "..." << sum % 3;
}