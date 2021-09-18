#include "NQueen.h"

/// <summary>
/// 문제
/// 체스에서 queen의 가로, 세로, 대각선 방향으로 어느 곳이나 한 번에 움직일 수 있다.
/// 즉 다음과 같은 체스판에서 queen이 X라고 표시된 위치에 있을 때,
/// 그 다음 queen이 움직여 갈수 있는 부분은 어둡게 칠해진 부분 중의 하나이다.
/// 
/// N X N 크기의 정방형 체스판이 주어졌다.
/// 우리는 거기에 N개의 queen을 배치하려고 하는데, 모든 queen들은 서로 잡아먹을 수 없어야 한다.
/// 그렇다면 queen들을 어떻게 배치해야만 할까 ?
/// 
/// 가능한 모든 경우의 개수를 출력한다.
///
/// 입력 형식
/// queen의 수 N(1≤N≤13)을 입력 받는다.
/// 
/// 출력 형식
/// N X N의 체스판에서 N개의 queen들이 서로 잡아먹지 않는 위치로 놓을 수 있는 방법의 수를 출력한다.
///
/// 입력 예
/// 4
///
/// 출력 예
/// 2
/// 
/// Hint!
/// N이 4일 때, 나오는 겨우는 두 가지이다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1162&sca=3030
/// </summary>
void NQueen::Code()
{
	int n;
	std::cin >> n;

	bool arr[13][13]{};

	std::cout << GetNQueenCount(arr, n);
}

/// <summary>
/// NQueen 이 가능한 경우의 수를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="y">현재 진행할 y 좌표</param>
/// <returns>NQueen이 가능한 경우의 수</returns>
int NQueen::GetNQueenCount(bool arr[][13], int n, int y)
{
	if (y == n)
	{
		return 1;
	}

	int count{ 0 };
	for (int i = 0; i < n; i++)
	{
		// 퀸 영역인 경우 패스
		if (arr[y][i])
		{
			continue;
		}

		bool tempArr[13][13];
		for (int i = 0; i < n; i++)
		{
			std::copy_n(arr[i], n, tempArr[i]);
		}

		ColorQueenArea(tempArr, n, i, y);

		count += GetNQueenCount(tempArr, n, y + 1);
	}

	return count;
}

/// <summary>
/// 주어진 좌표에서 Queen 범위를 색칠한다.
/// </summary>
/// <param name="arr"></param>
/// <param name="n"></param>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
void NQueen::ColorQueenArea(bool arr[][13], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
	{
		// 가로
		arr[y][i] = true;
		// 세로
		arr[i][x] = true;
		if (y - i >= 0)
		{
			// 좌상단
			if (x - i >= 0)
			{
				arr[y - i][x - i] = true;
			}
			// 우상단
			if (x + i < n)
			{
				arr[y - i][x + i] = true;
			}
		}
		if (y + i < n)
		{
			// 좌하단
			if (x - i >= 0)
			{
				arr[y + i][x - i] = true;
			}
			// 우하단
			if (x + i < n)
			{
				arr[y + i][x + i] = true;
			}
		}
	}
}