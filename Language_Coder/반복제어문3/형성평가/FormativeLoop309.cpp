#include "FormativeLoop309.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받아 "출력 예"와 같이 공백으로 구분하여 출력되는 프로그램을 작성하시오.
/// 
/// 주의!'#'은 공백으로 구분하되 줄사이에 빈줄은 없다.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
/// #
/// # #
/// # # #
///   # #
///     #
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=48&sca=1080
/// </summary>
void FormativeLoop309::Code()
{
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "# ";
		}
		std::cout << '\n';
	}

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << "# ";
		}
		std::cout << '\n';
	}
}