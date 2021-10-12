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

	int arr[10][10];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	vector<Point> coords;
	CheckPoint(arr, n, coords);

	std::cout << GetMaxBishop(arr, n, coords);
}

/// <summary>
/// 최대로 놓을 수 있는 비숍의 수를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="coords">비숍을 놓을 수 있는 좌표</param>
/// <param name="count">현재 개수</param>
/// <returns>비숍의 최대 개수</returns>
int Bishop::GetMaxBishop(int arr[10][10], int n, const vector<Point>& coords, 
	int count, int depth)
{
	int maxCount{ count };

	for (int i = depth; i < coords.size(); i++)
	{
		const Point& p{ coords[i] };
		if (arr[p.y][p.x] == 1)
		{
			int newArr[10][10];
			CopyArr(arr, n, newArr);
			FillBoard(newArr, n, p);

			int curCount{ GetMaxBishop(newArr, n, coords, count + 1, depth + 1) };
			if (curCount > maxCount)
			{
				maxCount = curCount;
			}
		}
	}
	
	return maxCount;
}

/// <summary>
/// 배열의 내용을 복사한다.
/// </summary>
/// <param name="src">기존 배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="dst">복사할 배열</param>
void Bishop::CopyArr(int src[10][10], int n, int dst[10][10])
{
	for (int i = 0; i < n; i++)
	{
		std::copy_n(src[i], n, dst[i]);
	}
}

/// <summary>
/// 주어진 좌표에 비숍을 배치하고 공격 범위를 채운다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="p">좌표</param>
void Bishop::FillBoard(int arr[10][10], int n, const Point& p)
{
	for (int i = 0; i < n; i++)
	{
		if (p.y - i >= 0)
		{
			// 좌상단
			if (p.x - i >= 0)
			{
				arr[p.y - i][p.x - i] = 0;
			}
			// 우상단
			if (p.x + i < n)
			{
				arr[p.y - i][p.x + i] = 0;
			}
		}
		if (p.y + i < n)
		{
			// 좌하단
			if (p.x - i >= 0)
			{
				arr[p.y + i][p.x - i] = 0;
			}
			// 우하단
			if (p.x + i < n)
			{
				arr[p.y + i][p.x + i] = 0;
			}
		}
	}
}

/// <summary>
/// 변경된 배열 상태를 확인하여 놓을 수 있는 새로운 지점을 탐색한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="coords">새로운 지점 리스트</param>
void Bishop::CheckPoint(int arr[10][10], int n, vector<Point>& coords)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 1)
			{
				coords.push_back(Point(j, i));
			}
		}
	}
}