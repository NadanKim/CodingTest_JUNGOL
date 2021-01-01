#include "BasicFileProcess02.h"

/// <summary>
/// 문제
/// 10개의 실수를 입력받아 첫 번째 입력 값과 마지막 입력 값의 평균을 반올림하여, 소수 첫째자리까지 출력하는
/// 프로그램을 작성하시오.
///
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 15.3 123.5 0.69 85.12 3.0 51.9 100.1 1.58 5.5 10.5
/// 
/// 출력 예
/// 12.9
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=264&sca=10i0
/// </summary>
void BasicFileProcess02::Code()
{
	float arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	float sum{ arr[0] + arr[9] };
	float avg{ sum / 2 };
	
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << avg;
}