#include "StarTriangle2.h"

/// <summary>
/// 문제
/// 삼각형의 높이 n과 종류 m을 입력 받은 후 다음과 같은 삼각형 형태로 출력하는 프로그램을 작성하시오. 
/// 다음은 n이 5인 경우의 예시이다.
/// 
/// *		///     *	/// *****	/// * * *
/// * *		///   * *	///  ***	///   * *
/// * * *	/// * * *	///   *		///     *
/// * *		///   * *	///  ***	///     * *
/// *		///     *	/// *****	///     * * *
///	종류1	///	종류2	///	종류4	/// 종류4
///
/// 입력 형식
/// 삼각형의 크기 n(n의 범위는 100 이하의 홀수)과 종류 m(m은 1부터 4사이의 정수)을 입력받는다.
/// 
/// 출력 형식
/// 위에서 언급된 4가지 종류를 입력에서 들어온 높이 n과 종류 m에 맞춰서 출력한다.
/// 입력된 데이터가 주어진 범위를 벗어나면 "INPUT ERROR!"을 출력한다.
/// '*'과 '*' 사이에는 공백이 없다.
///
/// 입력 예		/// 입력 예
/// 5 1			/// 7 4
///
/// 출력 예		/// 출력 예
/// *			/// ****
/// **			///  ***
/// ***			///   **
/// **			///    *
/// *			///    **
///				///    ***
///				///    ****
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=992&sca=2020
/// </summary>
void StarTriangle2::Code()
{
	int n, m;

	std::cin >> n >> m;

	if (n < 1 || n > 100 || n % 2 == 0 || m < 1 || m > 4)
	{
		std::cout << "INPUT ERROR!";
	}
	else
	{
		switch (m)
		{
		case 1:
			Case1(n);
			break;
		case 2:
			Case2(n);
			break;
		case 3:
			Case3(n);
			break;
		case 4:
			Case4(n);
			break;
		}
	}
}

void StarTriangle2::Case1(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2 - i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}

void StarTriangle2::Case2(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = 0; j < n / 2 - i; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j <= i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < n / 2 - i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}

void StarTriangle2::Case3(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < n - 2 * i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2 - 1 - i; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < 2 * i + 3; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}

void StarTriangle2::Case4(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j <= n / 2 - i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j <= i + 1; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}