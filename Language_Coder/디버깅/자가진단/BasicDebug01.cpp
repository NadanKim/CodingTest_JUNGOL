#include "BasicDebug01.h"

/// <summary>
/// 문제
/// 2개의 실수(double)를 입력 받아서 두 수의 곱을 정수로 변환한 결과값과
/// 두 수를 각각 정수로 변환하여 곱을 구한 결과값을 출력하는 프로그램을 작성하고 프로그램 내용에 관한 설명을 주석으로 표시하시오.
/// 
/// 입력 예
/// 3.4 5.65
/// 
/// 출력 예
/// 19 15
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=163&sca=1040
/// </summary>
void BasicDebug01::Code()
{
	double var1, var2;

	std::cin >> var1 >> var2;

	// 실수를 곱한 후 정수로 저장
	int result1 = var1 * var2;
	// 실수를 정수로 변환 후 곱해서 저장
	int result2 = (int)var1 * (int)var2;

	std::cout << result1 << ' ' << result2;
}