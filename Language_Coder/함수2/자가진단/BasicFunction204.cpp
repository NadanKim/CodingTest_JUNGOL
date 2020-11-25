#include "BasicFunction204.h"

/// <summary>
/// 문제
/// 원의 넓이를 입력받아 반지름의 길이를 소수 둘째자리까지 출력하는 프로그램을 작성하시오.
/// 
/// 원의 넓이 = 반지름 * 반지름 * 3.14 식을 이용하시오.
/// 
/// 입력 예
/// 314
/// 
/// 출력 예
/// 10.00
/// 
/// Hint!
/// 원의 넓이 / 3.14 의 제곱근을 구하면 된다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=219&sca=10c0
/// </summary>
void BasicFunction204::Code()
{
	int var;
	
	std::cin >> var;

	Function(var);
}

void BasicFunction204::Function(int var)
{
	const float PI{ 3.14f };

	float radius{ sqrt(var / PI) };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << radius;
}