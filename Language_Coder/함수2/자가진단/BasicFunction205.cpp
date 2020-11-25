#include "BasicFunction205.h"

/// <summary>
/// 문제
/// 세 개의 실수를 입력받아
/// 가장 큰 수를 올림한 정수를 출력하고
/// 가장 작은 수를 내림한 정수를 출력한 후
/// 남은 수를 반올림한 정수를 출력하는 프로그램을 작성하시오.
/// 입력되는 실수는 - 1000이상 1000이하이다.
/// 
/// 입력 예
/// 3.45 51.48 -100.1
/// 
/// 출력 예
/// 52 -101 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=220&sca=10c0
/// </summary>
void BasicFunction205::Code()
{
	float var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	Function(var1, var2, var3);
}

void BasicFunction205::Function(float var1, float var2, float var3)
{
	float big{ (var1 > var2 ? (var1 > var3 ? var1 : var3) : (var2 > var3 ? var2 : var3)) };
	float small{ (var1 < var2 ? (var1 < var3 ? var1 : var3) : (var2 < var3 ? var2 : var3)) };
	float mid{ (var1 != big && var1 != small ? var1 : (var2 != big && var2 != small ? var2 : var3)) };

	std::cout << static_cast<int>(ceilf(big)) << ' ';
	std::cout << static_cast<int>(floorf(small)) << ' ';
	std::cout << static_cast<int>(floorf(mid + 0.5f));
}