#include "FormativeFileProcess03.h"

/// <summary>
/// 문제
/// 두 정수와 한 개의 연산자(+, -, *, /, %)를 입력 받아 입력 순서대로 계산하는 계산식을 출력하시오.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 82 51 +
/// 
/// 출력 예
/// 82 + 51 = 133
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=107&sca=10i0
/// </summary>
void FormativeFileProcess03::Code()
{
	int var1, var2;
	char ch;

	std::cin >> var1 >> var2 >> ch;
	std::cout << var1 << ' ' << ch << ' ' << var2 << " = ";

	switch (ch)
	{
	case '+':
		std::cout << var1 + var2;
		break;
	case '-':
		std::cout << var1 - var2;
		break;
	case '*':
		std::cout << var1 * var2;
		break;
	case '/':
		std::cout << var1 / var2;
		break;
	case '%':
		std::cout << var1 % var2;
		break;
	}
}