#include "BasicFunction102.h"

/// <summary>
/// 문제
/// 반지름의 길이를 전달받아 넓이를 출력하는 함수를 작성하고 반지름의 길이를 입력받아 함수를 호출하여 넓이를 출력하는 프로그램을 작성하시오.
/// 단, 원주율(π)은 3.14로 하고 반올림하여 소수 둘째자리까지 출력한다.
/// 
/// 원의 넓이 = 반지름(r) * 반지름(r)​ * 원주율(π)​이다.
///
/// 입력 예
/// 10
/// 
/// 출력 예
/// 314.00
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=209&sca=10b0
/// </summary>
void BasicFunction102::Code()
{
	int radius;

	std::cin >> radius;

	Function(radius);
}

void BasicFunction102::Function(int radius)
{
	const float PI{ 3.14f };

	float area{ radius * radius * PI };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << area;
}