#include "StarTriangle3.h"

/// <summary>
/// 문제
/// 삼각형의 높이 N을 입력받아 아래와 같은 모양을 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 삼각형의 높이 N(N의 범위는 100 이하의 양의 홀수)을 입력받는다.
/// 
/// 출력 형식
/// N의 높이에 맞추어 주어진 형태의 모양을 출력한다.
/// 입력된 데이터가 주어진 범위를 벗어나면 "INPUT ERROR!"를 출력한다.
///
/// 입력 예
/// 7
///
/// 출력 예
/// *
///  ***
///   *****
///    *******
///   *****
///  ***
/// *
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=608&sca=2020
/// </summary>
void StarTriangle3::Code()
{
	int n;

	std::cin >> n;

	if (n < 1 || n > 100 || n % 2 == 0)
	{
		std::cout << "INPUT ERROR!";
	}
	else
	{
		for (int i = 0; i <= n / 2; i++)
		{
			for (int j = 0; j < i; j++)
			{
				std::cout << ' ';
			}

			for (int j = 0; j < 2 * i + 1; j++)
			{
				std::cout << '*';
			}
			std::cout << '\n';
		}

		for (int i = n / 2; i > 0; i--)
		{
			for (int j = 0; j < i - 1; j++)
			{
				std::cout << ' ';
			}

			for (int j = 0; j < i * 2 - 1; j++)
			{
				std::cout << '*';
			}
			std::cout << '\n';
		}
	}
}