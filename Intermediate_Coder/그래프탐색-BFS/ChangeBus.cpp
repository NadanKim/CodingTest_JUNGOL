#include "ChangeBus.h"

/// <summary>
/// 문제
/// 2차원 평면상에 m개의 수직선과 n개의 수평선으로 이루어진 격자 형태의 도로망이 있다. 
//아래 그림은 7개의 수직선과 6개의 수평선으로 이루어진 도로망의 예이다.
//
//수직선과 수평선이 만나는 교차점들 중 가장 왼쪽 아래 점의 위치는(1, 1)이고, 가장 오른쪽 위 점의 좌표는(m, n)이다.
//이 도로망을 운행하는 버스들이 k개 있고, 각 버스는 하나의 수평선 상의 두 교차점 사이 선분이나 하나의 수직선 상의 두 교차점 사이 선분을 왕복 운행한다.
//각 버스는 운행하는 선분 사이의 모든 교차점(선분의 양 끝 교차점 포함)에서 정차한다.
//
//출발지 교차점과 목적지 교차점(출발지와 목적지는 다름)이 주어질 때, 출발지에서 목적지로 버스만을 이용하여 가려고 한다.
//이용하는 버스의 최소 수를 구하는 프로그램을 작성하시오.
//
//예를 들어, 8대의 버스가 다음과 같이 운행한다고 하자.
//
//1번 버스 : (2, 1) - (2, 2)
//2번 버스 : (1, 1) - (5, 1)
//3번 버스 : (3, 2) - (6, 2)
//4번 버스 : (5, 6) - (5, 1)
//5번 버스 : (1, 5) - (7, 5)
//6번 버스 : (7, 3) - (7, 6)
//7번 버스 : (2, 1) - (2, 6)
//8번 버스 : (3, 5) - (6, 5)
//
//출발지가(2, 1)이고 목적지가(7, 4)라 하자.
//한 가지 방법으로, 처음에 2번 버스를 타고 교차점(5, 1)에서 내려, 4번 버스를 타고(5, 5)에서 내리고, 5번 버스를 탄 후(7, 5)에서 내려, 마지막으로 6번 버스를 타서 목적지(7, 4)에서 내린다.
//그러면 이용하는 버스 수는 4이다.
//
//다른 방법으로, 7번 버스를 타고(2, 5)에서 내려, 5번 버스를 타고(7, 5)에서 내린 후, 마지막으로 6번 버스를 타서 목적지(7, 4)에서 내린다.
//그러면 이용하는 버스 수는 3이고 이것이 최소이다.
///
/// 입력 형식
/// 첫 번째 줄에 수직선의 수 m과 수평선의 수 n이 빈칸을 사이에 두고 주어진다(1 ≤ m,n ≤ 100,000).
/// 두 번째 줄에 버스의 수(1≤k≤5, 000)가 주어진다.
/// 세 번째 줄부터 k줄에 걸쳐 각 줄에 버스의 운행구간을 나타내는 5개의 수 b, x1, y1, x2, y2가 빈칸을 사이에 두고 주어진다.
/// 여기서 b(1≤b≤k)는 버스의 번호, (x1, y1)과(x2, y2)는 이 버스가 운행하는 양쪽 끝 교차점의 좌표를 나타낸다.
/// 마지막 줄에 출발지와 목적지 좌표를 나타내는 네 개의 수 sx, sy, dx, dy가 빈칸을 사이에 두고 주어진다.
/// 여기서(sx, sy)는 출발지 좌표이고(dx, dy)는 목적지 좌표이다. 1≤x1, x2, sx, dx≤m이고, 1≤y1, y2, sy, dy≤n이다.
/// 모든 입력에 대하여, 출발지와 목적지는 다르게 주어지며 출발지에서 목적지로 가는 방법은 한 가지 이상 존재한다.
/// 
/// <제약조건>
/// m 혹은 n이 1인 테스트데이터가 전체의 20 % 이다.
/// 
/// 출력 형식
/// 첫째 줄에 이용하는 최소 버스 수를 출력한다.
///
/// 입력 예
/// 7 6
/// 8
/// 1 2 1 2 2
/// 2 1 1 5 1
/// 6 7 3 7 6
/// 7 2 1 2 6
/// 3 3 2 6 2
/// 4 5 6 5 1
/// 5 1 5 7 5
/// 8 3 5 6 5
/// 2 1 7 4
///
/// 출력 예
/// 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1839&sca=3040
/// </summary>
void ChangeBus::Code()
{
	Ready();
	std::cout << GetLeastBusCnt();
	Finish();
}

void ChangeBus::Ready()
{
	std::cin >> n >> m;

	std::cin >> k;
	// 가/세 따로 분리해서 체크할 수 있도록 로직 수정 필요
	horizontalBusRangeList.resize(k);
	verticalBusRangeList.resize(k);
	for (int i = 0; i < k; i++)
	{
		busList.push_back(BusLine());
		std::cin >> busList[i];

		BusLine& curBus = busList[i];
		if (curBus.dir == BusLine::MoveDirection::Horizontal)
		{
			horizontalBusRangeList[curBus.start.y].push_back(BusRange());
			BusRange& curRange = *horizontalBusRangeList[curBus.start.y].rbegin();
			curRange.busIdx = i;
			curRange.range.x1 = curBus.start.x;
			curRange.range.x2 = curBus.end.x;
		}
		else
		{
			horizontalBusRangeList[curBus.start.x].push_back(BusRange());
			BusRange& curRange = *horizontalBusRangeList[curBus.start.x].rbegin();
			curRange.busIdx = i;
			curRange.range.y1 = curBus.start.y;
			curRange.range.y2 = curBus.end.y;
		}
	}

	std::cin >> ps >> pe;

	// 시작 점을 지나는 버스를 다 체크해준다.
	for (int i = 0; i < k; i++)
	{
		if (busList[i].IsInWay(ps))
		{
			q.push(CheckInfo(i, 1));

			busList[i].checked = true;
		}
	}
}

void ChangeBus::Finish()
{
	busList.clear();

	while (q.empty() == false)
	{
		q.pop();
	}
}

/// <summary>
/// 버스를 갈아타는 최소 횟수를 찾아 반환한다.
/// </summary>
/// <returns>버스 횟수</returns>
int ChangeBus::GetLeastBusCnt()
{
	int leastCnt{ 999'999'999 };

	while (q.empty() == false)
	{
		CheckInfo curInfo = q.front();
		q.pop();

		const BusLine& curBus = busList[curInfo.busIdx];
		if (curBus.IsInWay(pe))
		{
			if (curInfo.cnt < leastCnt)
			{
				leastCnt = curInfo.cnt;
			}

			break;
		}

		if (curBus.dir == BusLine::MoveDirection::Horizontal)
		{
			Point newPos;
			newPos.y = curBus.start.y;
			for (newPos.x = curBus.start.x; newPos.x <= curBus.end.x; newPos.x++)
			{
				for (int i = 0; i < k; i++)
				{
					if (busList[i].checked)
					{
						continue;
					}

					if (busList[i].IsInWay(newPos))
					{
						q.push(CheckInfo(i, curInfo.cnt + 1));

						busList[i].checked = true;
					}
				}
			}
		}
		else
		{
			Point newPos;
			newPos.x = curBus.start.x;
			for (newPos.y = curBus.start.y; newPos.y <= curBus.end.y; newPos.y++)
			{
				for (int i = 0; i < k; i++)
				{
					if (busList[i].checked)
					{
						continue;
					}

					if (busList[i].IsInWay(newPos))
					{
						q.push(CheckInfo(i, curInfo.cnt + 1));

						busList[i].checked = true;
					}
				}
			}
		}
	}

	return leastCnt;
}
