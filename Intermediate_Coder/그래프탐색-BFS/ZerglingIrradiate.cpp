#include "ZerglingIrradiate.h"

/// <summary>
/// 문제
/// 승훈이는 심심한 시간에 스타크래프트(Starcraft) 게임을 하며 놀고 있었다. 
/// 스타크래프트 유닛중 하나인 저글링을 한 곳에 몰아세운 뒤, 방사능 오염 공격으로 없애보려고 했다.
/// 그런데 좀 더 재미있게 게임을 하기 위해서 게임을 개조하여 방사능 오염 공격을 가하면 방사능은 1초마다 이웃한 저글링에 오염된다.
/// 그리고 방사능에 오염된 저글링은 3초 후에 죽게 된다.
/// 
/// 예를 들어 아래 왼쪽그림과 같이 모여 있는 저글링 중에 빨간 동그라미 표시를 한 저글링에게 방사능 오염공격을 가하면,
/// 총 9초 후에 저글링들이 죽게 된다.아래 오른쪽에 있는 그림의 숫자들은 각 저글링들이 죽는 시간이다.
/// 
/// 저글링을 모아놓은 지도의 크기와 지도상에 저글링들이 놓여 있는 격자 위치가 주어질 때,
/// 총 몇 초 만에 저글링들을 모두 없앨 수 있는지 알아보는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄은 지도의 열의 크기와 행의 크기가 주어진다.지도는 격자 구조로 이루어져 있으며 크기는 100×100칸을 넘지 않는다.
/// 둘째 줄부터는 지도상에 저글링들이 놓여있는 상황이 주어진다. 1은 저글링이 있는 곳의 표시이고 0은 없는 곳이다.
/// 마지막 줄에는 방사능오염을 가하는 위치가 열 번호 행 번호 순으로 주어지며 x, y 좌표의 시작은 1이다.
/// 
/// 출력 형식
/// 죽을 수 있는 저글링들이 모두 죽을 때까지 몇 초가 걸리는지 첫 번째 줄에 출력하고 둘째 줄에는 죽지 않고 남아 있게 되는 저글링의 수를 출력하시오.
///
/// 입력 예
/// 7 8 
/// 0010000
/// 0011000
/// 0001100
/// 1011111
/// 1111010
/// 0011110
/// 0011100
/// 0001000
/// 3 5
///
/// 출력 예
/// 9
/// 0
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=358&sca=3040
/// </summary>
void ZerglingIrradiate::Code()
{
	Point mapSize;
	std::cin >> mapSize.x >> mapSize.y;

	// 맵 생성 및 초기화
	int** map = new int* [mapSize.y];
	for (int i = 0; i < mapSize.y; i++)
	{
		map[i] = new int[mapSize.x];
		std::cin >> map[i][0];
	}

	// 맵 분해 및 적용
	for (int i = 0; i < mapSize.y; i++)
	{
		int mapInfo{ map[i][0] };
		for (int j = mapSize.x - 1; j >= 0; j--)
		{
			map[i][j] = mapInfo % 10;
			mapInfo /= 10;
		}
	}

	Point atkCoord;
	std::cin >> atkCoord.x >> atkCoord.y;

	// 배열이 0부터 시작하므로 좌표 조정
	atkCoord.x -= 1;
	atkCoord.y -= 1;

	std::cout << Irradiate(map, mapSize, atkCoord) << '\n';
	std::cout << CountZerglins(map, mapSize);
}

/// <summary>
/// 주어진 위치에 전염성 방사능 공격을 한다.
/// </summary>
/// <param name="map">맵 배열</param>
/// <param name="mapSize">맵 크기</param>
/// <param name="atkCoord">공격 좌표</param>
/// <returns>공격이 지속된 시간</returns>
int ZerglingIrradiate::Irradiate(int** map, Point mapSize, Point atkCoord)
{
	// 최초 공격 지점에 저글링이 없으면 0을 반환한다.
	if (!IsZergling(map, atkCoord.x, atkCoord.y))
	{
		return 0;
	}

	// 최초 공격 시간 3초
	atkCoord.time = 3;

	queue<Point> q;
	q.push(atkCoord);

	int totalAtkTime{ 0 };
	while (!q.empty())
	{
		Point p{ q.front() };
		q.pop();

		if (!IsZergling(map, p.x, p.y))
		{
			continue;
		}

		if (p.time > totalAtkTime)
		{
			totalAtkTime = p.time;
		}

		map[p.y][p.x] = 0;

		// 4 방향에 대해서 전염을 진행한다.
		if (IsInMap(mapSize, p.x - 1, p.y) && IsZergling(map, p.x - 1, p.y))
		{
			q.push(Point(p.x - 1, p.y, p.time + 1));
		}
		if (IsInMap(mapSize, p.x + 1, p.y) && IsZergling(map, p.x + 1, p.y))
		{
			q.push(Point(p.x + 1, p.y, p.time + 1));
		}
		if (IsInMap(mapSize, p.x, p.y - 1) && IsZergling(map, p.x, p.y - 1))
		{
			q.push(Point(p.x, p.y - 1, p.time + 1));
		}
		if (IsInMap(mapSize, p.x, p.y + 1) && IsZergling(map, p.x, p.y + 1))
		{
			q.push(Point(p.x, p.y + 1, p.time + 1));
		}
	}
	
	return totalAtkTime;
}

/// <summary>
/// 주어진 좌표가 맵 범위에 포함되는지 여부를 반환한다.
/// </summary>
/// <param name="mapSize">맵 크기</param>
/// <param name="x">확인 할 x 좌표</param>
/// <param name="y">확인 할 y 좌표</param>
/// <returns>맵 포함 여부</returns>
bool ZerglingIrradiate::IsInMap(Point mapSize, int x, int y)
{
	if (x < 0 || mapSize.x <= x) return false;
	if (y < 0 || mapSize.y <= y) return false;
	return true;
}

/// <summary>
/// 해당 좌표에 저글링이 있는지 여부를 반환한다.
/// </summary>
/// <param name="map">맵 배열</param>
/// <param name="x">공격 x 좌표</param>
/// <param name="y">공격 y 좌표</param>
/// <returns>저글링 있는지 여부</returns>
bool ZerglingIrradiate::IsZergling(int** map, int x, int y)
{
	return map[y][x] == 1;
}

/// <summary>
/// 에 남아있는 저글링의 수를 반환한다.
/// </summary>
/// <param name="map">맵 배열</param>
/// <param name="mapSize">맵 크기</param>
/// <returns>저글리의 수</returns>
int ZerglingIrradiate::CountZerglins(int** map, Point mapSize)
{
	int count{ 0 };
	for (int i = 0; i < mapSize.y; i++)
	{
		for (int j = 0; j < mapSize.x; j++)
		{
			if (map[i][j] > 0)
			{
				count++;
			}
		}
	}
	return count;
}