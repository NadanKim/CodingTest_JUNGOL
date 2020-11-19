#include "BasicFunction106.h"

/// <summary>
/// 문제
/// 정수의 연산식을 입력받아 연산을 위한 함수를 호출하여
/// 4칙연산(+-*/ )의 연산결과를 출력하는 프로그램을 작성하시오.
/// 
/// ('/'의 경우는 정수 부분만 출력하고 4칙연산 이외의 연산 결과는 0으로 한다.)
/// (if_else 문으로 작성하세요.)
/// 
/// 입력 예
/// 10 + 20
/// 
/// 출력 예
/// 10 + 20 = 30
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=213&sca=10b0
/// </summary>
void BasicFunction106::Code()
{
	int var1, var2;
	char ch;

	std::cin >> var1 >> ch >> var2;

	Function(var1, ch, var2);
}

void BasicFunction106::Function(int var1, char ch, int var2)
{
	std::cout << var1 << ' ' << ch << ' ' << var2 << " = ";

	if (ch == '+')
	{
		std::cout << var1 + var2;
	}
	else if (ch == '-')
	{
		std::cout << var1 - var2;
	}
	else if (ch == '*')
	{
		std::cout << var1 * var2;
	}
	else if (ch == '/')
	{
		std::cout << static_cast<int>(var1 / var2);
	}
	else
	{
		std::cout << 0;
	}
}