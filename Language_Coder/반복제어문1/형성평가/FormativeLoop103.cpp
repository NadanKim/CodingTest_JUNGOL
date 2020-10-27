#include "FormativeLoop103.h"

/// <summary>
/// 문제
/// 0 부터 100 까지의 점수를 계속 입력받다가 범위를 벗어나는 수가 입력되면 그 이전까지 입력된 자료의 합계와 평균을
/// 출력하는 프로그램을 작성하시오. (평균은 반올림하여 소수 첫째자리까지 출력한다.)
/// 
/// 입력 예
/// 55 100 48 36 0 101
/// 
/// 출력 예
/// sum : 239
/// avg : 47.8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=27&sca=1060
/// </summary>
void FormativeLoop103::Code()
{
	int var;
	int sum{ 0 }, count{ 0 };

	while (true)
	{
		std::cin >> var;
		
		if (var < 0 || 100 < var)
		{
			break;
		}

		sum += var;
		count++;
	}

	float avg{ static_cast<float>(sum) / count };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "sum : " << sum << '\n';
	std::cout << "avg : " << avg;
}