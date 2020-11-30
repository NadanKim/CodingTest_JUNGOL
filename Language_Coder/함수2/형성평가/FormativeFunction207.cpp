#include "FormativeFunction207.h"

/// <summary>
/// 문제
/// 원주율을 3.141592로 매크로 상수로 정의하고 원의 넓이를 구하는 매크로 함수를 작성하여 반지름을 입력받아 원의 넓이를
/// 출력하는 프로그램을 작성하시오. (소수 넷째자리에서 반올림)
/// 
/// 입력 예
/// radius : 1.5
/// 
/// 출력 예
/// area = 7.069
/// 
/// Hint!
/// 원의 넓이 : 반지름 × 반지름 × 원주율(π)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=81&sca=10c0
/// </summary>
void FormativeFunction207::Code()
{
	double radius;

	std::cout << "radius : ";
	std::cin >> radius;

	std::cout.precision(3);
	std::cout.setf(std::ios::fixed);
	
	std::cout << "area = " << AREA(radius);
}