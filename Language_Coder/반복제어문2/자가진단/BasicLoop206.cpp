#include "BasicLoop206.h"

/// <summary>
/// 문제
/// 10 이하의 과목수 n이 주어진다.
/// 정수로 주어진 n개 과목의 점수를 입력받아서 실수 평균을 구하여 출력하고
/// 평균이 80점이상이면 "pass", 80점 미만이면 "fail"이라고 출력하는 프로그램을 작성하시오.
/// 
/// 평균은 반올림하여 소수 첫째자리까지 출력한다.​
/// 
/// 입력 예
/// 4
/// 75 80 85 90
/// 
/// 출력 예
/// avg : 82.5
/// pass
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=183&sca=1070
/// </summary>
void BasicLoop206::Code()
{
	int n;
	int sum{ 0 };

	std::cin >> n;

	for (int i = 0, var; i < n; i++)
	{
		std::cin >> var;

		sum += var;
	}

	float avg = static_cast<float>(sum) / n;

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "avg : " << avg << '\n';

	if (avg >= 80.0f)
	{
		std::cout << "pass";
	}
	else
	{
		std::cout << "fail";
	}
}