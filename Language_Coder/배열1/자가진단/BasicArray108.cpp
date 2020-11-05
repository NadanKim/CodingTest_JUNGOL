#include "BasicArray108.h"

/// <summary>
/// 문제
/// 10개의 정수를 입력받아 배열에 저장한 후 짝수 번째 입력된 값의 합과 홀수 번째 입력된 값의 평균을 출력하는 프로그램을 작성하시오.
///
/// 평균은 반올림하여 소수첫째자리까지 출력한다.
///
/// 입력 예
/// 95 100 88 65 76 89 58 93 77 99
/// 
/// 출력 예
/// sum: 446
/// avg : 78.8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=199&sca=1090
/// </summary>
void BasicArray108::Code()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int sum{ 0 };
	for (int i = 1; i < 10; i += 2)
	{
		sum += arr[i];
	}
	std::cout << "sum : " << sum << '\n';

	sum = 0;
	for (int i = 0; i < 10; i += 2)
	{
		sum += arr[i];
	}

	float avg{ sum / 5.0f };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "avg : " << avg;
}