#include "MakeColoredPaper2.h"

/// <summary>
/// 문제
/// 재우는 분할정복을 공부중이다.
/// 그래서 1335:색종이 만들기 문제를 풀었다.
/// 좀 더 공부하고 싶은 재우는​ 다음과 같은 문제를 생각해 보았다.
/// 
/// 한 변의 길이가 2의 제곱수인 정사각형에 주어질 때,
/// 주어진 정사각형에 포함된 숫자가 모두 0이면 0,
/// 주어진 정사각형에 포함된 숫자가 모두 1이면 1 로 나타낸다.
/// 그렇지 않고 주어진 정사각형에 포함된 숫자가 0, 1이 함께 있다면
/// 대문자 X로 그 영역을 나타내고 해당 영역을 4등분하여
/// 재귀적으로 호출하여 같은 규칙을 적용한다.
/// 4등분한 영역의 호출 순서는 좌상, 우상, 좌하, 우하 이다.
/// 
/// 예를 들면 아래와 같은 정보가 주어지면
/// 8
/// 1 0 1 1 1 1 1 1
/// 0 1 1 1 1 1 1 1
/// 0 0 0 0 1 1 1 1
/// 0 0 0 0 1 1 1 1
/// 1 1 0 0 0 0 0 0
/// 1 1 0 0 0 0 0 0
/// 0 0 1 1 0 0 0 0
/// 0 0 1 1 0 0 0 0​
/// 
/// 위의 규칙을 따르면 다음과 같은 결과가 만들어진다.
/// XXX10011001X10010​
///
/// 입력 형식
/// 첫 행에 한 변의 길이 N이 입력된다. 
/// (8 <= N <= 1024, N은 2의 제곱수) 다음 하나의 행에 정보가 입력된다.
/// 
/// 출력 형식
/// 규칙에 따라 만들어진 문자열을 출​력한다.
///
/// 입력 예
/// 8
/// 1 0 1 1 1 1 1 1
/// 0 1 1 1 1 1 1 1
/// 0 0 0 0 1 1 1 1
/// 0 0 0 0 1 1 1 1
/// 1 1 0 0 0 0 0 0
/// 1 1 0 0 0 0 0 0
/// 0 0 1 1 0 0 0 0
/// 0 0 1 1 0 0 0 0
///
/// 출력 예
/// XXX10011001X10010​
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2900&sca=30
/// </summary>
void MakeColoredPaper2::Code()
{
	int n;

	std::cin >> n;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	CheckColoredPapers(arr, n, 0, 0);

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

/// <summary>
/// 색종이의 영역을 확인하여 영역의 상태를 재귀적으로 출력한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">영역의 크기</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
void MakeColoredPaper2::CheckColoredPapers(int** arr, int n, int x, int y)
{
	if (IsAllSame(arr, n, x, y))
	{
		std::cout << arr[y][x];
		return;
	}
	else
	{
		std::cout << 'X';
	}

	int curSize{ n / 2 };
	CheckColoredPapers(arr, curSize, x, y);
	CheckColoredPapers(arr, curSize, x + curSize, y);
	CheckColoredPapers(arr, curSize, x, y + curSize);
	CheckColoredPapers(arr, curSize, x + curSize, y + curSize);
}

/// <summary>
/// 주어진 배열의 범위 내의 색상이 모두 동일한지 여부를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">영역의 크기</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
/// <returns>모든 생상이 동일한지 여부</returns>
bool MakeColoredPaper2::IsAllSame(int** arr, int n, int x, int y)
{
	int val{ arr[y][x] };
	for (int i = y; i < y + n; i++)
	{
		for (int j = x; j < x + n; j++)
		{
			if (arr[i][j] != val)
			{
				return false;
			}
		}
	}
	return true;
}