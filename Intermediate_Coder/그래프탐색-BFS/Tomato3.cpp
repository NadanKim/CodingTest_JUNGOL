﻿#include "Tomato3.h"

/// <summary>
/// 문제
/// 철수의 토마토 농장에서는 토마토를 보관하는 큰 창고를 가지고 있다.
/// 토마토는 아래의 그림과 같이 격자 모양 상자의 칸에 하나씩 넣어서 창고에 보관한다.
///
/// 창고에 보관되는 토마토들 중에는 잘 익은 것도 있지만, 아직 익지 않은 토마토들도 있을 수 있다. 
/// 보관 후 하루가 지나면, 익은 토마토들의 인접한 곳에 있는 익지 않은 토마토들은 익은 토마토의 영향을 받아 익게 된다.
/// 하나의 토마토의 인접한 곳은 왼쪽, 오른쪽, 앞, 뒤 네 방향에 있는 토마토를 의미한다.
/// 대각선 방향에 있는 토마토들에게는 영향을 주지 못하며, 토마토가 혼자 저절로 익는 경우는 없다고 가정한다.
/// 철수는 창고에 보관된 토마토들이 며칠이 지나면 다 익게 되는지, 그 최소 일수를 알고 싶어 한다.
/// 
/// 토마토를 창고에 보관하는 격자모양의 상자들의 크기와 익은 토마토들과 익지 않은 토마토들의 정보가 주어졌을 때, 
/// 며칠이 지나면 토마토들이 모두 익는지, 그 최소 일수를 구하는 프로그램을 작성하라.
/// 단, 상자의 일부 칸에는 토마토가 들어있지 않을 수도 있다.
/// 
/// 입력 형식
/// 입력파일의 첫 줄에는 상자의 크기를 나타내는 두 정수 M,N이 주어진다. 
/// M은 상자의 가로 칸의 수, N 은 상자의 세로 칸의 수를 나타낸다.단, 2≤M, N≤1, 000 이다.
/// 둘째 줄부터는 하나의 상자에 저장된 토마토들의 정보가 주어진다.
/// 즉, 둘째 줄부터 N 개의 줄에는 상자에 담긴 토마토의 정보가 주어진다.
/// 하나의 줄에는 상자 가로줄에 들어있는 토마토의 상태가 M 개의 정수로 주어진다.
/// 정수 1 은 익은 토마토, 정수 0 은 익지 않은 토마토, 정수 - 1 은 토마토가 들어있지 않은 칸을 나타낸다.
/// 
/// 출력 형식
/// 여러분은 토마토가 모두 익을 때까지의 최소 날짜를 출력해야 한다. 
/// 만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력해야 하고,
/// 토마토가 모두 익지는 못하는 상황이면 - 1 을 출력해야 한다.
///
/// 입력 예
/// 6 4 
/// 0 0 0 0 0 0
/// 0 0 0 0 0 0
/// 0 0 0 0 0 0
/// 0 0 0 0 0 1
///
/// 출력 예
/// 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1875&sca=3040
/// </summary>
void Tomato3::Code()
{
	std::cin >> m >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> box[i][j];

			if (box[i][j] == 1)
			{
				q.push({ j, i });
			}
		}
	}

	std::cout << CalculateDoneDay();
}

/// <summary>
/// 토마토가 모두 익는데 걸리는 날을 반환한다.
/// </summary>
/// <returns>토마토가 다 익은 날</returns>
int Tomato3::CalculateDoneDay()
{
	int doneDay{ 0 };

	while (!q.empty())
	{
		Point p{ q.front() };
		q.pop();

		if (p.day > doneDay)
		{
			doneDay = p.day;
		}

		for (int i = 0; i < 4; i++)
		{
			int nextX{ p.x + xDir[i] }, nextY{ p.y + yDir[i] };
			if (IsInBox(nextX, nextY) && box[nextY][nextX] == 0)
			{
				box[nextY][nextX] = 1;
				q.push({nextX, nextY, p.day + 1});
			}
		}
	}

	if (!IsAllDone())
	{
		doneDay = -1;
	}

	return doneDay;
}

/// <summary>
/// 박스 범위를 넘지 않는지 여부를 반환한다.
/// </summary>
/// <param name="x">x 좌표</param>
/// <param name="y">y 좌표</param>
/// <returns>범위를 넘지 않는지 여부</returns>
bool Tomato3::IsInBox(int x, int y)
{
	bool xInBox{ 0 <= x && x < m };
	bool yInBox{ 0 <= y && y < n };
	return xInBox && yInBox;
}

/// <summary>
/// 토마토가 다 익었는지 여부를 반환한다.
/// </summary>
/// <returns>토마토가 다 익었는지 여부</returns>
bool Tomato3::IsAllDone()
{
	for (int i = 0, val; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (box[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}