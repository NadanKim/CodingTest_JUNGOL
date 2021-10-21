#include "CupoardDoor.h"

/// <summary>
/// 문제
/// n개의 같은 크기의 벽장들이 일렬로 붙어져 있고 벽장의 문은 n-2개만이 있다. 
/// 한 벽장 앞에 있는 문은 이웃 벽장 앞에 문이 없다면(즉, 벽장이 열려있다면) 그 벽장 앞으로 움직일 수 있다.
/// 
/// 그림은 7개의 벽장의 예이다.그림에서 2번 벽장과 5번 벽장이 열려있고, 나머지 벽장은 닫혀 있다.
/// 벽장 문은 좌우 어느 쪽이든 그 이웃 벽장이 열려 있다면 그 쪽으로 한 칸씩 이동할 수 있다.
/// 그림에서 주어진 상태에서는 1번 벽장을 닫고 있는 벽장문을 오른쪽으로 한 칸 이동함으로써 1번 벽장을 사용할 수 있다.
/// 이때 2번 벽장은 닫혀져 사용할 수 없다.
/// 역시 5번 벽장이 열려 있으므로 4번 벽장 또는 6번 벽장 앞의 벽장문을 5번 벽장 앞으로 이동시킬 수 있다.
/// 
/// 풀어야 할 문제는 입력으로 주어지는 사용할 벽장의 순서에 따라서 벽장문을 이동하는 순서를 찾는 것이다.
/// 이때 벽장문의 이동횟수를 최소로 하여야 한다.입력은 다음과 같이 주어지며, 열려있는 벽장의 개수는 항상 2개이다.
/// 
/// 예를 들어 사용할 벽장 순서가 3 1 6 5이면, 3번 앞의 문을 2번으로 옮겨서 3번 벽장을 사용하고(문 이동회수 = 1),
/// 다음에 1번과 2번 앞에 있는 문을 오른쪽으로 하나씩 옮겨서(문 이동회수 = 2) 1번 벽장을 사용하며,
/// 6번 앞에 있는 문을 왼쪽으로 옮겨서 6번 벽장을 사용하고(문 이동회수 = 1),
/// 다시 그 문을 오른쪽으로 옮겨서 5번 벽장을 사용한다(문 이동회수 = 1),
/// 따라서 문이 이동한 회수의 합은 5이다.
/// 
/// 또한 같은 벽장을 여러 번 사용할 수도 있다.
///
/// 입력 형식
/// 입력의 첫 번째 줄에 벽장의 개수를 나타내는 2보다 크고 20보다 작거나 같은 하나의 정수,
/// 두 번째 줄에 초기에 열려있는 두 개의 벽장을 나타내는 두 개의 정수,
/// 그리고 세 번째줄에는 사용할 벽장들의 순서의 길이(최대 20),
/// 그리고 그 다음줄부터 사용할 벽장의 번호가 한줄에 하나씩 순서대로 주어진다.
/// 
/// 출력 형식
/// 벽장문의 최소 이동횟수를 화면에 출력한다.
///
/// 입력 예
/// 7
/// 2 5
/// 4
/// 3
/// 1
/// 6
/// 5
///
/// 출력 예
/// 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=685&sca=3030
/// </summary>
void CupoardDoor::Code()
{
	int n;
	std::cin >> n;

	int openDoor1, openDoor2;
	std::cin >> openDoor1 >> openDoor2;

	int m;
	std::cin >> m;

	int usingDoors[20];
	for (int i = 0; i < m; i++)
	{
		std::cin >> usingDoors[i];
	}

	std::cout << GetLeastMoveCount(openDoor1, openDoor2, usingDoors, m);
}

/// <summary>
/// 문을 최소로 이동하는 횟수를 구하여 반환한다.
/// </summary>
/// <param name="openDoor1">열린 문 1번</param>
/// <param name="openDoor2">열린 문 2번</param>
/// <param name="usingDoors">사용할 문 배열</param>
/// <param name="m">사용할 문 개수</param>
/// <param name="depth">깊이</param>
/// <returns>최소 이동 횟수</returns>
int CupoardDoor::GetLeastMoveCount(int openDoor1, int openDoor2, int usingDoors[20], int m, int depth)
{
	if (depth == m)
	{
		return 0;
	}

	// 1번 문 사용
	int moveCount1{ std::abs(openDoor1 - usingDoors[depth]) };
	moveCount1 += GetLeastMoveCount(usingDoors[depth], openDoor2, usingDoors, m, depth + 1);

	// 2번 문 사용
	int moveCount2{ std::abs(openDoor2 - usingDoors[depth]) };
	moveCount2 += GetLeastMoveCount(openDoor1, usingDoors[depth], usingDoors, m, depth + 1);

	return moveCount1 < moveCount2 ? moveCount1 : moveCount2;
}