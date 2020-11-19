#include "BasicFunction104.h"

/// <summary>
/// 문제
/// 세 개의 정수를 전달받아 최대값을 구하여 리턴하는 함수를 작성하고,
/// 세 정수를 입력받아 최대값을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// -10 115 33
/// 
/// 출력 예
/// 115
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=211&sca=10b0
/// </summary>
void BasicFunction104::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	Function(var1, var2, var3);
}

void BasicFunction104::Function(int var1, int var2, int var3)
{
	int maximum{ (var1 > var2 ? (var1 > var3 ? var1 : var3) : (var2 > var3 ? var2 : var3)) };

	std::cout << maximum;
}