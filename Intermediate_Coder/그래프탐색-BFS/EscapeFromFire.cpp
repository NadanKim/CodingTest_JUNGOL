#include "EscapeFromFire.h"

/// <summary>
/// 문제
/// 재우는 중간계(middle-earth)에서 유명한 용사이다.
/// 
/// 어느날 사람들에게 부탁 받은 마물 퇴치를 신속히 해결하고 집으로 돌아가려고 하는데,
/// 마법의 숲에서 재우를 추적하고 있던 불의 마법사 무길이와 마주치게 되었다.
/// 무길이는 재우를 잡기 위해서 화염 마법을 시전하였고 어느덧 숲은 화염으로 가득차고 있었다.
/// 재우는 무길이가 화염을 풀어 놓은 숲에서 신속히 요새로 귀환하고자 한다!
/// 
/// 숲의 지도는 R행과 C열로 이루어져있다.
/// 비어있는 칸은 '.'로 표시되고, 불은 '*'로, 바위는 'X'로 표시되어있다.
/// 용사의 집은 'D'로 표현되고, 재우가 처음에 서있는 위치는 'S'로 표시된다.
/// 
/// 매 분마다 재우는 인접한 4개의 칸(상, 하, 좌, 우)으로 이동할 수 있다.
/// 불은 매 분마다 인접한 4개의 칸에 불을 옮긴다.
/// 재우는 불과 바위를 지나지 못한다.
/// 불은 바위와 요새에 옮겨지지 않는다.
/// 
/// 재우가 탈출을 할 수 있을 때 몇 분 만에 탈출 할 수 있는지 알아보는 프로그램을 작성하라.
/// 
/// 입력 형식
/// 입력의 첫번째 줄에는 50이하의 정수인 R과 C가 입력된다.
/// 다음 줄부터 지도가 입력되며, 이는 R개의 줄로 이루어져있다.
/// 각 R개의 줄에는 C개의 문자가 입력된다.
/// 지도에는 정확히 하나의 용사의 집과 하나의 시작 위치가 입력된다.
/// 
/// 출력 형식
/// 재우가 숲에서 용사의 집으로 돌아올 수 있을 때 최단 시간(분)을 출력하고, 
/// 만약 탈출이 불가능할 경우 "impossible"을 출력한다.
///
/// 입력 예
/// 3 3		|	3 3			|	3 6		|	8 6
/// D.*		|	D.*			|	D...*.	|	D...*.
/// ...		|	...			|	.X.X..	|	.XXX..
/// .S.		|	..S			|	....S.	|	.X*...
///										|	.XS...
///										|	.XXX..
///										|	......
///										|	XXXXX.
///										|	*.....
///
/// 출력 예
/// 3		|	impossible	|	6		|	13
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=362&sca=3040
/// </summary>
void EscapeFromFire::Code()
{
	std::cin >> r >> c;

	maps.push_back(MapInfo());
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			std::cin >> maps[0].map[i][j];

			if (maps[0].map[i][j] == 'S')
			{
				startPos = { j, i };
			}

			if (maps[0].map[i][j] == 'D')
			{
				endPos = { j, i };
			}
		}
	}

	CalculateFire();

	int minutes{ CalculateEscapeMinutes() };
	if (minutes < 0)
		std::cout << "impossible";
	else
		std::cout << minutes;
}

/// <summary>
/// 불이 번지는 과정을 저장한다.
/// </summary>
void EscapeFromFire::CalculateFire()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (maps[0].map[i][j] == '*')
			{
				q.push({ j, i });
			}
		}
	}

	while (!q.empty())
	{
		Point p{ q.front() };
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextX{ p.x + xDir[i] }, nextY{ p.y + yDir[i] };
			if (IsInMap(nextX, nextY) && PossibleToFire(nextX, nextY, p.minute))
			{
				int nextMinute{ p.minute + 1 };

				while (maps.size() <= nextMinute)
				{
					maps.push_back(maps[p.minute]);
				}

				maps[nextMinute].map[nextY][nextX] = '*';

				q.push({ nextX, nextY, nextMinute });
			}
		}
	}
}

/// <summary>
/// 탈출하는 데 걸리는 시간을 반환한다.
/// </summary>
/// <returns>탈출한 시간(불가능한 경우 -1)</returns>
int EscapeFromFire::CalculateEscapeMinutes()
{
	q.push(startPos);
	while (!q.empty())
	{
		Point p{ q.front() };
		q.pop();

		if (!PossibleToGo(p.x, p.y, p.minute))
		{
			continue;
		}

		for (int i = 0; i < 4; i++)
		{
			int nextX{ p.x + xDir[i] }, nextY{ p.y + yDir[i] };
			if (IsInMap(nextX, nextY) && PossibleToGo(nextX, nextY, p.minute))
			{
				int nextMinute{ p.minute + 1 };

				if (IsArrive(nextX, nextY))
				{
					return nextMinute;
				}
				q.push({ nextX, nextY, nextMinute });
			}
		}
	}

	return -1;
}

/// <summary>
/// 맵 범위에 벗어나는지 여부를 반환한다.
/// </summary>
/// <param name="x">x 좌표</param>
/// <param name="y">y 좌표</param>
/// <returns>맵을 벗어나는지 여부</returns>
bool EscapeFromFire::IsInMap(int x, int y)
{
	bool xInMap{ 0 <= x && x < c };
	bool yInMap{ 0 <= y && y < r };
	return xInMap && yInMap;
}

/// <summary>
/// 불 태울 수 있는지 여부를 반환한다.
/// </summary>
/// <param name="x">x 좌표</param>
/// <param name="y">y 좌표</param>
/// <param name="curMinute">진행 시간</param>
/// <returns>태울 수 있는지 여부</returns>
bool EscapeFromFire::PossibleToFire(int x, int y, int curMinute)
{
	return maps[curMinute].map[y][x] != 'X'
		&& maps[curMinute].map[y][x] != 'D'
		&& maps[curMinute].map[y][x] != '*';
}

/// <summary>
/// 이동 가능한지 여부를 반환한다.
/// </summary>
/// <param name="x">x 좌표</param>
/// <param name="y">y 좌표</param>
/// <param name="curMinute">진행 시간</param>
/// <returns>이동 가능 여부</returns>
bool EscapeFromFire::PossibleToGo(int x, int y, int curMinute)
{
	return maps[curMinute].map[y][x] != 'X'
		&& maps[curMinute].map[y][x] != '*';
}

/// <summary>
/// 도착했는지 여부를 반환한다.
/// </summary>
/// <param name="x">x 좌표</param>
/// <param name="y">y 좌표</param>
/// <returns>도착 여부</returns>
bool EscapeFromFire::IsArrive(int x, int y)
{
	return x == endPos.x && y == endPos.y;
}
