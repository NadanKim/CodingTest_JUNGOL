#include "MazeExploration.h"

/// <summary>
/// 문제
/// 동현이는 방이 N개인 미로의 지도를 갖고 있다. 
/// 각 방에는 1번부터 N번까지 번호가 매겨져 있고, N개의 방 사이에는 M개의 문이 있으며,
/// 각 문은 서로 다른 두 방을 연결한다.
/// 동현이는 1번 방에서 출발해서 N개의 방을 모두 탐색해 볼 것이다.
/// 
/// 동현이는 모험심이 강하기 때문에 항상 새로운 방을 찾기를 원한다.
/// 동현이는 자신이 위치한 방과 연결된 방 중 한 번도 들르지 않은 방이 있다면 그 중 가장 번호가 작은 방으로 가고,
/// 그렇지 않으면(연결된 방이 모두 전에 들렀던 방이면) 그냥 왔던 곳으로 되돌아가게 된다.
/// 
/// 동현이가 N개의 방을 모두 방문하고 1번 방으로 오면 동현이는 탐색을 끝낸다.
/// N개의 방을, 동현이가 먼저 방문한 순으로 정렬하는 프로그램을 작성하여라.
///
/// 입력 형식
/// 첫 번째 줄에는 방의 수 N과 문의 수 M이 주어진다. (2 ≤ N ≤ 100,000, 1 ≤ M ≤ 500,000) 
/// 두 번째 줄부터 M개의 줄에는 각 문이 연결하는 두 방의 번호가 입력된다.
/// 모든 방들은 문을 통해 연결되어 있고, 임의의 두 방 사이에는 최대 1개의 문이 있다.
/// 전체 데이터의 38 % 는 2 ≤ N ≤ 3, 000 이다.
/// 
/// 출력 형식
/// 첫 번째 줄에 동현이가 방문한 순서대로 N개의 방의 번호를 정렬하여 출력한다.
///
/// 입력 예
/// 5 6
/// 1 3
/// 3 4
/// 4 2
/// 2 1
/// 1 4
/// 4 5
///
/// 출력 예
/// 1 2 4 3 5
/// 
/// Hint!
/// 위 예제에 대한 미로의 지도는 다음과 같다.
/// 이 때, 동현이는 1→2→4→3→4→5→4→2→1 순으로 미로를 탐색하게 된다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1185&sca=3090
/// </summary>
void MazeExploration::Code()
{
	int n, m;
	std::cin >> n >> m;

	vector<Room> rooms;
	for (int i = 0; i <= n; i++)
	{
		rooms.push_back(Room(i));
	}

	int from, to;
	for (int i = 0; i < m; i++)
	{
		std::cin >> from >> to;
		rooms[from].linkedRooms.push_back(to);
		rooms[to].linkedRooms.push_back(from);
	}

	for (int i = 1; i <= n; i++)
	{
		std::sort(rooms[i].linkedRooms.begin(), rooms[i].linkedRooms.end());
	}

	vector<int> roomOrder;
	FindRoomOrder(rooms, n, roomOrder);

	for (int d : roomOrder)
	{
		std::cout << d << ' ';
	}
}

/// <summary>
/// 방의 방문 순서를 찾는다.
/// </summary>
/// <param name="rooms">방 정보</param>
/// <param name="n">방의 개수</param>
/// <param name="roomOrder">방문한 방 순서</param>
void MazeExploration::FindRoomOrder(vector<Room> rooms, int n, vector<int>& roomOrder)
{
	stack<int> s;
	int curRoom{ 1 };

	while (true)
	{
		if (!rooms[curRoom].visited)
		{
			rooms[curRoom].visited = true;
			roomOrder.push_back(rooms[curRoom].roomNumber);

			if (static_cast<int>(roomOrder.size()) == n)
			{
				break;
			}
		}

		bool hasValidRoom{ false };
		for (int linkedRoomNumber : rooms[curRoom].linkedRooms)
		{
			if (!rooms[linkedRoomNumber].visited)
			{
				s.push(curRoom);
				curRoom = linkedRoomNumber;
				hasValidRoom = true;
				break;
			}
		}

		if (!hasValidRoom)
		{
			curRoom = s.top();
			s.pop();
		}
	}
}