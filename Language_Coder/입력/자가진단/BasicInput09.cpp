#include "BasicInput09.h"

/// <summary>
/// 문제
/// 세 개의 실수를 입력 받아 반올림하여 소수 셋째 자리까지 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 1.2568
/// 95.21438
/// 526.851364
/// 
/// 출력 예
/// 1.257
/// 95.214
/// 526.851
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=154&sca=1020
/// </summary>
void BasicInput09::Code()
{
	float var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	std::cout.precision(3);
	std::cout.setf(std::ios::fixed);

	std::cout << var1 << '\n';
	std::cout << var2 << '\n';
	std::cout << var3;
}