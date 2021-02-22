#include "StarTriangle1.h"

/// <summary>
/// 문제
/// 삼각형의 높이 n과 종류 m을 입력 받은 후 다음과 같은 삼각형 형태로 출력하는 프로그램을 작성하시오.
/// 
/// *		/// *****	///     *
/// **		/// ****	///    ***
/// ***		/// ***		///   *****
/// ****	/// **		///  *******
/// *****	/// *		/// *********
///	종류1	///	종류2	///	종류3
///
/// 입력 형식
/// 삼각형의 크기 n(n의 범위는 100 이하의 자연수)과 종류 m(m은 1부터 3사이의 자연수)을 입력받는다.
/// 
/// 출력 형식
/// 위에서 언급한 3가지 종류를 입력에서 들어온 높이 n과 종류 m에 맞춰서 출력한다.
/// 입력된 데이터가 주어진 범위를 벗어나면 "INPUT ERROR!"을 출력한다.
///
/// 입력 예		/// 입력 예		/// 입력 예
/// 3 2			/// 4 3			/// 200 3
///
/// 출력 예		/// 출력 예		/// 출력 예
/// ***			///    *		/// INPUT ERROR!
/// **			///   ***		/// 
/// *			///  *****		/// 
///				/// *******		/// 
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=795&sca=2020
/// </summary>
void StarTriangle1::Code()
{
	int n, m;

	std::cin >> n >> m;

	if (n < 1 || n > 100 || m < 1 || m > 3)
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
		}
	}
}

void StarTriangle1::Case1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}

void StarTriangle1::Case2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}

void StarTriangle1::Case3(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}