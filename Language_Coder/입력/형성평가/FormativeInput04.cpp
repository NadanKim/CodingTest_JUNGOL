#include "FormativeInput04.h"

/// <summary>
/// 문제
/// 세 개의 정수를 입력받아 합과 평균을 출력하는 프로그램을 작성하시오.
/// (단 평균은 소수 이하를 버림하여 정수 부분만 출력한다.)
/// 
/// 입력 예
/// 20 50 100
/// 
/// 출력 예
/// sum = 170
/// avg = 56
/// 
/// Hint!
/// 정수를 정수로 나눈 몫은 소수 이하를 버린 정수가 된다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=9&sca=1020
/// </summary>
void FormativeInput04::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int sum = var1 + var2 + var3;
	std::cout << "sum = " << sum << '\n';

	int avg = sum / 3;
	std::cout << "avg = " << avg;
}