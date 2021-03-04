#include "NumberTriangle.h"

/// <summary>
/// 문제
/// 삼각형의 높이 n과 종류 m을 입력받은 후 다음과 같은 삼각형 형태로 출력하는 프로그램을 작성하시오.
/// 
/// < 처리조건 >
/// 종류 1번의 숫자의 진행 순서는 처음에 왼쪽에서 오른쪽으로 진행 한 후 방향을 바꾸어서 이를 반복한다.
/// 
/// 1				/// 0 0 0 0 0 0 0 0 0	/// 1
/// 3 2				///   1 1 1 1 1 1 1		/// 1 2
/// 4 5 6			///     2 2 2 2 2		/// 1 2 3
/// 10 9 8 7		///       3 3 3			/// 1 2
/// 11 12 13 14 15	///         4			/// 1
///		종류1		///		종류2			///	종류3
///
/// 입력 형식
/// 삼각형의 크기 n(n의 범위는 100 이하의 홀수)과 종류 m(m은 1부터 3사이의 정수)을 입력받는다.
/// 
/// 출력 형식
/// 위에서 언급한 3가지 종류를 입력에서 들어온 높이 n과 종류 m에 맞춰서 출력한다.숫자사이는 공백으로 구분한다.
/// 입력된 데이터가 주어진 범위를 벗어나면 "INPUT ERROR!"을 출력한다.
///
/// 입력 예		/// 입력 예
/// 7 3			/// 3 2
/// 
/// 출력 예		/// 출력 예
/// 1			/// 0 0 0 0 0
/// 1 2			///   1 1 1
/// 1 2 3		///     2
/// 1 2 3 4		///
/// 1 2 3		///
/// 1 2			///
/// 1			///
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=914&sca=2020
/// </summary>
void NumberTriangle::Code()
{
	int n, m;

	std::cin >> n >> m;

	if (n < 1 || n > 100 || n % 2 == 0 || m < 1 || m > 3)
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

void NumberTriangle::Case1(int n)
{
	int num{ 1 };
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 0; j < i; j++)
			{
				std::cout << num++ << ' ';
			}
			num = num + i;
		}
		else
		{
			for (int j = 0; j < i; j++)
			{
				std::cout << num-- << ' ';
			}
			num = num + i + 1;
		}
		std::cout << '\n';
	}
}

void NumberTriangle::Case2(int n)
{
	int num{ 0 };
	for (int i = n; i > 0; i--, num++)
	{
		for (int j = n; j > i; j--)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			std::cout << num << ' ';
		}
		std::cout << '\n';
	}
}

void NumberTriangle::Case3(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << j + 1 << ' ';
		}
		std::cout << '\n';
	}


	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2 - i; j++)
		{
			std::cout << j + 1 << ' ';
		}
		std::cout << '\n';
	}
}