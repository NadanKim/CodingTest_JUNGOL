#include "BasicOperator01.h"

/// <summary>
/// 문제
/// 세 개의 정수를 입력 받아서 합계와 평균을 출력하시오. (단 평균은 소수 이하를 버리고 정수부분만 출력한다.)
/// 
/// 입력 예
/// 10 25 33
/// 
/// 출력 예
/// sum : 68
/// avg : 22
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=155&sca=1030
/// </summary>
void BasicOperator01::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int sum{ var1 + var2 + var3 };
	int avg{ sum / 3 };

	std::cout << "sum : " << sum << '\n';
	std::cout << "avg : " << avg;
}