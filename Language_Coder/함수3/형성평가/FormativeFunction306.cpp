#include "FormativeFunction306.h"

/// <summary>
/// 문제
/// 3자리로 이루어진 자연수 3개를 입력받아 그 수들의 곱을 구한 후 그 결과값의 각 자리 숫자들중 0을 제외한 모든 수들의
/// 곱을 구하여 출력하는 프로그램을 재귀함수로 작성하시오.
/// 
/// 입력 예
/// 100 123 111
/// 
/// 출력 예
/// 270
/// 
/// Hint!
/// 입력예제의 세 수의 곱은 1365300이다. 그러므로 1 * 3 * 6 * 5 * 3 = 270 1의 자리수 * 1의 자리를 제외한 남은 자리수의 곱
/// (단 1의 자리수가 0이면 1로 바꾸어서 곱한다.)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=136&sca=10d0
/// </summary>
void FormativeFunction306::Code()
{
	int num1, num2, num3;

	std::cin >> num1 >> num2 >> num3;

	Function(num1 * num2 * num3, 1);
}

void FormativeFunction306::Function(int num, int result)
{
	if (num == 0)
	{
		std::cout << result;
		return;
	}

	int var{ num % 10 };
	var = (var != 0 ? var : 1);

	Function(num / 10, result * var);
}