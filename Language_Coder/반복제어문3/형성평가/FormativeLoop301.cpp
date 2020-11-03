#include "FormativeLoop301.h"

/// <summary>
/// 문제
/// 정수 20 개를 입력받아서 그 합과 평균을 출력하되 0 이 입력되면 20개 입력이 끝나지 않았더라도 그 때까지 입력된 합과 평균을 출력하는 프로그램을 작성하시오.
///
/// 평균은 소수부분은 버리고 정수만 출력한다.(0이 입력된 경우 0을 제외한 합과 평균을 구한다.)
/// 
/// 입력 예
/// 5 9 6 8 4 3 0
/// 
/// 출력 예
/// 35 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=40&sca=1080
/// </summary>
void FormativeLoop301::Code()
{
	int var;
	int sum{ 0 }, count{ 0 };

	do
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		sum += var;
		count++;
	} while (count < 20);

	int avg{ sum / count };

	std::cout << sum << ' ' << avg;
}