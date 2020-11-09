#include "FormativeArray105.h"

/// <summary>
/// 문제
/// 6명의 몸무게를 입력받아 몸무게의 평균을 출력하는 프로그램을 작성하시오.
///
/// 출력은 반올림하여 소수 첫째자리까지로 한다.
/// 
/// 입력 예
/// 23.2 39.6 66.4 50.0 45.6 48.0
/// 
/// 출력 예
/// 45.5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=54&sca=1090
/// </summary>
void FormativeArray105::Code()
{
	float weight[6];

	for (int i = 0; i < 6; i++)
	{
		std::cin >> weight[i];
	}

	float sum{ 0 };
	for (int i = 0; i < 6; i++)
	{
		sum += weight[i];
	}

	float avg{ sum / 6 };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << avg;
}