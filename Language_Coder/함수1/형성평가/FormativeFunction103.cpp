#include "FormativeFunction103.h"

/// <summary>
/// 문제
/// 자연수를 입력받아 아래와 같은 사각형을 출력하는 프로그램을 작성하시오.
/// 주어지는 수는 100이하의 자연수이다.
/// (함수를 작성하시오.)
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
/// 1 2 3
/// 2 4 6
/// 3 6 9
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=72&sca=10b0
/// </summary>
void FormativeFunction103::Code()
{
	int var;

	std::cin >> var;

	Function(var);
}

void FormativeFunction103::Function(int var)
{
	for (int i = 1; i <= var; i++)
	{
		for (int j = 1; j <= var; j++)
		{
			std::cout << i * j << ' ';
		}
		std::cout << '\n';
	}
}