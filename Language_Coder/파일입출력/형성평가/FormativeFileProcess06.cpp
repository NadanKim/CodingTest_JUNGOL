#include "FormativeFileProcess06.h"

/// <summary>
/// 문제
/// 100 이하의 정수를 입력받아 예와 같이 출력하시오. ‘*’는 옆으로만 1칸의 공백으로 분리한다.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
///     *
///   * * *
/// * * * * *
///   * * *
///     *
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=110&sca=10i0
/// </summary>
void FormativeFileProcess06::Code()
{
	int var;

	std::cin >> var;

	for (int i = 1; i <= var; i++)
	{
		for (int j = 0; j < var - i; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << "* ";
		}

		std::cout << '\n';
	}

	for (int i = var - 1; i >= 1; i--)
	{
		for (int j = 0; j < var - i; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << "* ";
		}

		std::cout << '\n';
	}
}