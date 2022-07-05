#include "TreasureIsland.h"

/// <summary>
/// 문제
/// 보물섬 지도를 발견한 후크 선장은 보물을 찾아나섰다. 보물섬 지도는 아래 그림과 같이 직사각형 모양이며 여러 칸으로 나뉘어져 있다.
/// 각 칸은 육지(L)나 바다(W)로 표시되어 있다. 이 지도에서 이동은 상하좌우로 이웃한 육지로만 가능하며, 한 칸 이동하는데 한 시간이 걸린다.
///
/// 보물은 서로 간에 최단 거리로 이동하는데 있어 가장 긴 시간이 걸리는 육지 두 곳에 나뉘어 묻혀있다.
/// 육지를 나타내는 두 곳 사이를 최단 거리로 이동하려면 같은 곳을 두 번 이상 지나가거나, 멀리 돌아가서는 안된다.
/// 
/// 예를 들어 위와 같이 지도가 주어졌다면 보물은 아래 표시된 두 곳에 묻혀 있게 되고, 이 둘 사이의 최단 거리로 이동하는 시간은 8시간이 된다.
/// 
/// 보물 지도가 주어질 때, 보물이 묻혀 있는 두 곳 간의 최단 거리로 이동하는 시간을 구하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 입력 파일의 첫째 줄에는 보물 지도의 세로의 크기와 가로의 크기가 빈칸을 사이에 두고 주어진다.
/// 이어 L과 W로 표시된 보물 지도가 아래의 예와 같이 주어지며, 각 문자 사이에는 빈 칸이 없다. 보물 지도의 가로, 세로의 크기는 각각 50이하이다.
/// 
/// 출력 형식
/// 첫째 줄에 보물이 묻혀 있는 두 곳 사이를 최단 거리로 이동하는 시간을 출력한다.
///
/// 입력 예
/// 5 7
/// WLLWWWL
/// LLLWLLL
/// LWLWLWW
/// LWLWLLL
/// WLLWLWW
///
/// 출력 예
/// 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=734&sca=3040
/// </summary>
void TreasureIsland::Code()
{
	std::cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> map[i][j];
		}
	}

	std::cout << GetShortestWayToTreasure();
}

int TreasureIsland::GetShortestWayToTreasure()
{
	vector<Point> possibleList;
	FindPossiblePosition(possibleList);

	int dist{ 0 };
	int possibleLandCnt{ static_cast<int>(possibleList.size()) };

	for (int i = 0; i < possibleLandCnt; i++)
	{
		for (int j = 0; j < possibleLandCnt; j++)
		{
			if (i == j)
			{
				continue;
			}

			int curDist{ GetShortestWayBetweenTwoPosition(
				Point(possibleList[i].x, possibleList[i].y),
				Point(possibleList[j].x, possibleList[j].y)) };

			if (curDist != 9'999 && curDist > dist)
			{
				dist = curDist;
			}
		}
	}

	return dist;
}

/// <summary>
/// 두 지점 사이 거리를 반환한다.
/// </summary>
/// <param name="p1">지점 1</param>
/// <param name="p2">지점 2</param>
/// <returns>거리(기본 값:9,999)</returns>
int TreasureIsland::GetShortestWayBetweenTwoPosition(const Point& p1, const Point& p2)
{
	for (int i = 0; i < m; i++)
	{
		std::fill_n(passCheck[i], n, 9'999);
	}

	int dist{ 9'999 };

	queue<Point> q;
	q.push(p1);

	while (!q.empty())
	{
		Point p{ q.front() };
		q.pop();

		if (p.x == p2.x && p.y == p2.y)
		{
			if (p.dist < dist)
			{
				dist = p.dist;
			}
		}
		passCheck[p.y][p.x] = p.dist;

		if (p.x - 1 >= 0 && map[p.y][p.x - 1] == 'L' && passCheck[p.y][p.x - 1] > p.dist + 1)
		{
			q.push(Point(p.x - 1, p.y, p.dist + 1));
		}
		if (p.x + 1 < n && map[p.y][p.x + 1] == 'L' && passCheck[p.y][p.x + 1] > p.dist + 1)
		{
			q.push(Point(p.x + 1, p.y, p.dist + 1));
		}
		if (p.y - 1 >= 0 && map[p.y - 1][p.x] == 'L' && passCheck[p.y - 1][p.x] > p.dist + 1)
		{
			q.push(Point(p.x, p.y - 1, p.dist + 1));
		}
		if (p.y + 1 < m && map[p.y + 1][p.x] == 'L' && passCheck[p.y + 1][p.x] > p.dist + 1)
		{
			q.push(Point(p.x, p.y + 1, p.dist + 1));
		}
	}

	return dist;
}

/// <summary>
/// 보물이 있을 수 있는 땅 리스트를 찾는다.
/// </summary>
/// <param name="possibleList">보물이 있을 수 있는 땅 리스트</param>
void TreasureIsland::FindPossiblePosition(vector<Point>& possibleList)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 'L')
			{
				possibleList.push_back(Point(j, i));
			}
		}
	}
}