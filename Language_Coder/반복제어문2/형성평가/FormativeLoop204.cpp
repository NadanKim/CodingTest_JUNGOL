#include "FormativeLoop204.h"

/// <summary>
/// 문제
/// 100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오.
///
/// (평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)
/// 
/// 입력 예
/// 3
/// 99 65 30
/// 
/// 출력 예
/// 64.67
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=33&sca=1070
/// </summary>
void FormativeLoop204::Code()
{
	int n;
	int sum{ 0 };

	std::cin >> n;

	int var;
	for (int i = 0; i < n; i++)
	{
		std::cin >> var;

		sum += var;
	}

	float avg{ static_cast<float>(sum) / n };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << avg;
}