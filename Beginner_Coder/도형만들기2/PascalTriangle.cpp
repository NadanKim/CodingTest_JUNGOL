#include "PascalTriangle.h"

/// <summary>
/// 문제
/// 파스칼 삼각형이란 아래 <표1> 과 같은 자신의 왼쪽 위의 좌표와 오른쪽 위의 좌표 값을 더해서 값을 계속 갱신해
/// 나가는 형태의 삼각형을 말한다.
/// 아래와 같은 파스칼 삼각형의 높이 n과 종류 m을 입력 받은 후 다음과 같은 형태의 파스칼 삼각형을 출력하는
/// 프로그램을 작성하시오.
/// 
/// < 처리조건 >
/// m에 대한 파스칼 삼각형의 모습은 아래 <표2>의 모습과 같다.
/// 
/// 1			/// 1 4 6 4 1	/// 1
/// 1 1			///  1 3 3 1	/// 4 1
/// 1 2 1		///   1 2 1		/// 6 3 1
/// 1 3 3 1		///    1 1		/// 4 3 2 1
/// 1 4 6 4 1	///     1		/// 1 1 1 1 1
///	종류1		///	종류2		///	종류3
///
/// 입력 형식
/// 삼각형의 높이n(1부터 30사이의 정수)과 종류m(1부터 3사이의 정수)을 입력받는다.
/// 
/// 출력 형식
/// 위에서 제시한 형태의 파스칼 삼각형을 입력에서 들어온 높이 n과 종류 m에 맞춰서 출력한다.
/// 숫자는 한 칸의 공백으로 구분하여 출력한다.
///
/// 입력 예		/// 입력 예
/// 5 1			/// 6 3
/// 
/// 출력 예		/// 출력 예
/// 1			/// 1
/// 1 1			/// 5 1
/// 1 2 1		/// 10 4 1
/// 1 3 3 1		/// 10 6 3 1
/// 1 4 6 4 1	/// 5 4 3 2 1
///				/// 1 1 1 1 1 1
/// 
/// Hint!
/// <생각하기>>
/// 종류 1과 같이 배열에 저장을 한 후 m의 값에 따라 출력을 바꾸면 된다.
/// 종류 2의 경우는 배열의 아래쪽부터 출력을 하면 된다.
/// 종류 3의 경우는 각 위치에 출력되는 배열의 번호를 적어놓고 생각해 보자.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1335&sca=2020
/// </summary>
void PascalTriangle::Code()
{
	int n, m;

	std::cin >> n >> m;

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

void PascalTriangle::Case1(int n)
{
	int** arr{ CreateArray(n) };
	arr[0][0] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			arr[i][j] = (j > 0 ? arr[i - 1][j - 1] : 0) + arr[i - 1][j];
		}
	}
	PrintArray(arr, n);
	DeleteArray(arr, n);
}

void PascalTriangle::Case2(int n)
{
	int** arr{ CreateArray(n) };
	arr[n - 1][0] = 1;
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j <= n - i; j++)
		{
			arr[i][j] = (j > 0 ? arr[i + 1][j - 1] : 0) + arr[i + 1][j];
		}
	}
	PrintArray(arr, n, true);
	DeleteArray(arr, n);
}

void PascalTriangle::Case3(int n)
{
	int** arr{ CreateArray(n) };
	arr[n - 1][n - 1] = 1;
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = n - 1; j >= i; j--)
		{
			arr[j][i] = (j < n - 1 ? arr[j + 1][i + 1] : 0) + arr[j][i + 1];
		}
	}
	PrintArray(arr, n);
	DeleteArray(arr, n);
}

int** PascalTriangle::CreateArray(int n)
{
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];

		std::fill_n(arr[i], n, 0);
	}
	return arr;
}

void PascalTriangle::DeleteArray(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

void PascalTriangle::PrintArray(int** arr, int n, bool space)
{
	for (int i = 0; i < n; i++)
	{
		if (space)
		{
			for (int j = 0; j < i; j++)
			{
				std::cout << ' ';
			}
		}

		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > 0)
			{
				std::cout << arr[i][j] << ' ';
			}
		}
		std::cout << '\n';
	}
}