#include "BasicLoop104.h"

/// <summary>
/// 문제
/// 정수를 계속 입력받다가 100 이상의 수가 입력이 되면 마지막 입력된 수를 포함하여 합계와 평균을 출력하는 프로그램을 작성하시오.
/// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
/// 
/// 입력 예
/// 1 2 3 4 5 6 7 8 9 10 100
/// 
/// 출력 예
/// 155
/// 14.1
/// 
/// Hint!
/// 입력을 받으면 먼저 누적을 시킨 후에 조건을 확인한다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=176&sca=1060
/// </summary>
void BasicLoop104::Code()
{
	int var{ 0 }, sum{ 0 }, count{ 0 };

	while (var < 100)
	{
		std::cin >> var;

		sum += var;
		count++;
	}

	float avg{ static_cast<float>(sum) / count };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << sum << '\n';
	std::cout << avg;
}