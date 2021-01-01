#include "BasicFileProcess01.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아 작은 수부터 큰 수까지 모든 정수의 합을 구하여 출력하는 프로그램을 작성하시오.
///
/// * 표준입출력방식으로 작성하세요.
///
/// 입력 예
/// 5 10
///
/// 출력 예
/// 45
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=263&sca=10i0
/// </summary>
void BasicFileProcess01::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	int beg{ var1 < var2 ? var1 : var2 };
	int end{ var1 > var2 ? var1 : var2 };

	int sum{ 0 };
	while (beg <= end)
	{
		sum += beg++;
	}

	std::cout << sum;
}