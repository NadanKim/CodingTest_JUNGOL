#include "Bishop.h"

/// <summary>
/// 문제
/// 서양장기인 체스에는 대각선 방향으로 움직일 수 있는 비숍(bishop)이 있다. 
/// <그림 1>과 같은 정사각형 체스판 위에 B라고 표시된 곳에 비숍이 있을 때
/// 비숍은 대각선 방향으로 움직여 O로 표시된 칸에 있는 다른 말을 잡을 수 있다.
/// 
/// 그런데 체스판 위에는 비숍이 놓일 수 없는 곳이 있다. 
/// <그림 2>에서 체스판에 색칠된 부분은 비숍이 놓일 수 없다고 하자.
/// 이와 같은 체스판에 서로가 서로를 잡을 수 없도록 하면서 비숍을 놓는다면 <그림 3>과 같이 최대 7개의 비숍을 놓을 수 있다.
/// 색칠된 부분에는 비숍이 놓일 수 없지만 지나갈 수는 있다.
/// 
/// 정사각형 체스판의 한 변에 놓인 칸의 개수를 체스판의 크기라고 한다. 
/// 체스판의 크기와 체스판 각 칸에 비숍을 놓을 수 있는지 없는지에 대한 정보가 주어질 때,
/// 서로가 서로를 잡을 수 없는 위치에 놓을 수 있는 비숍의 최대 개수를 구하는 프로그램을 작성하시오.
///
/// 입력 형식
/// ​첫째 줄에 체스판의 크기가 주어진다. 체스판의 크기는 10 이하의 자연수이다.
/// 둘째 줄부터 아래의 예와 같이 체스판의 각 칸에 비숍을 놓을 수 있는지 없는지에 대한 정보가
/// 체스판 한 줄 단위로 한 줄씩 주어진다.
/// 비숍을 놓을 수 있는 곳에는 1, 비숍을 놓을 수 없는 곳에는 0이 빈칸을 사이에 두고 주어진다.
/// 
/// 출력 형식
/// 첫째 줄에 주어진 체스판 위에 놓을 수 있는 비숍의 최대 개수를 출력한다.
///
/// 입력 예
/// 5 
/// 1 1 0 1 1
/// 0 1 0 0 0
/// 1 0 1 0 1
/// 1 0 0 0 0
/// 1 0 1 1 1
///
/// 출력 예
/// 7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=935&sca=3030
/// </summary>
void Bishop::Code()
{
	int n;

	std::cin >> n;

	bool arr[10][10];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	std::cout << GetMaxBishop(arr, n);
}

/// <summary>
/// 최대로 놓을 수 있는 비숍의 수를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="coords">비숍을 놓을 수 있는 좌표</param>
int Bishop::GetMaxBishop(bool arr[10][10], int n)
{
	return GetMaxByColors(arr, n, Color::White) 
		+ GetMaxByColors(arr, n, Color::Black);
}

/// <summary>
/// 보드를 색별로 구분하여 비숍이 들어갈 수 있는 최대 개수를 구한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="coords">비숍을 놓을 수 있는 좌표</param>
/// <param name="color">보드의 색</param>
/// <param name="count">개수</param>
/// <returns>비숍의 최대 개수</returns>
int Bishop::GetMaxByColors(bool arr[10][10], int n, Color color, int count)
{
	int maxCount{ count };

	bool newArr[10][10];
	int colorNum{ static_cast<int>(color) };
	for (int i = 0; i < n; i++)
	{
		CopyArr(arr, n, newArr);

		int curCount{ 0 };
		// color 에 따라 매 라인의 시작 지점을 바꿔준다.
		for (int j = (colorNum + i) % 2; j < n; j += 2)
		{
			if (arr[i][j])
			{
				curCount++;

				ColorBishopRange(newArr, n, j, i);
			}
		}

		if (curCount > 0)
		{
			curCount = GetMaxByColors(newArr, n, color, count + curCount);
			if (curCount > maxCount)
			{
				maxCount = curCount;
			}
		}
	}

	return maxCount;
}

/// <summary>
/// arr의 값을 newArr로 복사한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="newArr">복사할 배열</param>
void Bishop::CopyArr(bool arr[10][10], int n, bool newArr[10][10])
{
	for (int i = 0; i < n; i++)
	{
		std::copy_n(arr[i], n, newArr[i]);
	}
}

/// <summary>
/// 주어진 좌표를 기준으로 공격 범위를 둘 수 없는 것으로 변환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="x">x 좌표</param>
/// <param name="y">y 좌표</param>
void Bishop::ColorBishopRange(bool arr[10][10], int n, int x, int y)
{
	arr[y][x] = false;

	for (int i = 1; i < n; i++)
	{
		int up{ y - i }, down{ y + i };
		int left{ x - i }, right{ x + i };

		if (down < n)
		{
			if (right < n)
			{
				arr[down][right] = false;
			}
			if (left >= 0)
			{
				arr[down][left] = false;
			}
		}
		if (up >= 0)
		{
			if (right < n)
			{
				arr[up][right] = false;
			}
			if (left >= 0)
			{
				arr[up][left] = false;
			}
		}
	}
}