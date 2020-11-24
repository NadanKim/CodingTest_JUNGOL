#include "FormativeFunction104.h"

/// <summary>
/// 문제
/// 두 개의 음이 아닌 정수를 입력받아 큰 수의 제곱에서 작은 수의 제곱을 뺀 결과값을
/// 출력하는 프로그램을 작성하시오.
/// (두 정수를 전달받아 제곱의 차를 리턴하는 함수를 이용할 것)
/// 
/// 입력 예
/// 8 10
/// 
/// 출력 예
/// 36
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=73&sca=10b0
/// </summary>
void FormativeFunction104::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << Function(var1, var2);
}

int FormativeFunction104::Function(int var1, int var2)
{
	var1 *= var1;
	var2 *= var2;

	int big{ var1 > var2 ? var1 : var2 };
	int small{ var1 < var2 ? var1 : var2 };
	
	return big - small;
}