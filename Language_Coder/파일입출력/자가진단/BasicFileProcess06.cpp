#include "BasicFileProcess06.h"

/// <summary>
/// 문제
/// 원의 둘레의 길이를 입력받아 반지름의 길이를 출력하는 프로그램을 작성하시오.
/// 단, 원주율은 3.14로 하고 출력은 소수 세째자리에서 반올림하여 둘째자리까지 출력 한다.
/// 둘레의 길이가 0 이면 종료한다.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 31.4
/// 62.8
/// 0
/// 
/// 출력 예
/// 5.00
/// 10.00
/// 
/// Hint!
/// 원의 둘레(c) 공식은 다음과 같다
/// c = 지름의 길이 * 원주율 = 2 * 반지름 * 원주율
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=268&sca=10i0
/// </summary>
void BasicFileProcess06::Code()
{
	const double PI = 3.14;

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	double round;
	while (true)
	{
		std::cin >> round;

		if (round == 0)
		{
			break;
		}

		double radius{ round / (2 * PI) };

		std::cout << radius << '\n';
	}
}