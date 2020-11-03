#include "FormativeLoop306.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받아 "출력 예"와 같이 공백으로 구분하여 출력하는 프로그램을 작성하시오.
/// 
/// 주의!숫자를 공백으로 구분하되 줄사이에 빈줄은 없다.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
///     1
///   1 2
/// 1 2 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=45&sca=1080
/// </summary>
void FormativeLoop306::Code()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << "  ";
		}

		for (int j = 1; j <= i; j++)
		{
			std::cout << j << ' ';
		}
		std::cout << '\n';
	}
}