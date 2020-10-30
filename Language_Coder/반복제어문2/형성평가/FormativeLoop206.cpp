#include "FormativeLoop206.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을
/// 출력하는 프로그램을 작성하시오.
///
/// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
/// 
/// 입력 예
/// 10 15
/// 
/// 출력 예
/// sum : 37
/// avg: 12.3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=35&sca=1070
/// </summary>
void FormativeLoop206::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	int small{ var1 < var2 ? var1 : var2 };
	int big{ var1 < var2 ? var2 : var1 };

	int sum{ 0 }, count{ 0 };
	while (small <= big)
	{
		if (small % 3 == 0 || small % 5 == 0)
		{
			sum += small;
			count++;
		}
		small++;
	}

	float avg{ static_cast<float>(sum) / count };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "sum : " << sum << '\n';
	std::cout << "avg : " << avg;
}