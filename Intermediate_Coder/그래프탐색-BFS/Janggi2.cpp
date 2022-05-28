#include "Janggi2.h"

/// <summary>
/// 문제
/// N×M장기판에 졸 한개와 말 한개가 놓여 있다. 말의 이동 방향이 다음과 같다고 할 때, 말이 최소의 이동횟수로 졸을 잡으려고 한다.
/// 말이 졸을 잡기 위한 최소 이동 횟수를 구하는 프로그램을 작성해보자.
///
/// 입력 형식
/// 첫 줄은 장기판 행의 수(N)와 열의 수(M)를 받는다(1≤N, M≤100).
/// 둘째 줄은 말이 있는 위치의 행(R), 열(C)의 수와 졸이 있는 위치의 행(S), 열(K)의 수를 입력받는다.
/// 단, 장기판의 제일 왼쪽 위의 위치가(1, 1)이다.
/// 각 행과 열은 R(1≤R≤N), C(1≤C≤M), S(1≤S≤N), K(1≤K≤M)이다.
/// 
/// 출력 형식
/// 말이 졸을 잡기 위한 최소 이동 횟수를 출력한다.
///
/// 입력 예
/// 9 9
/// 3 5 2 8
///
/// 출력 예
/// 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&code=4189&sca=3040
/// </summary>
void Janggi2::Code()
{
	int n, m;
	std::cin >> n >> m;

	Point horse, soldier;
	std::cin >> horse >> soldier;

	int** visited = new int* [m + 1];
	for (int i = 1; i <= m; i++)
	{
		visited[i] = new int[n + 1];
		for (int j = 1; j <= n; j++)
		{
			visited[i][j] = 999'999'999;
		}
	}

	std::cout << GetLeastMoveCount(visited, n, m, horse, soldier);

	for (int i = 1; i <= m; i++)
	{
		delete[] visited[i];
	}
	delete[] visited;
}

/// <summary>
/// 말이 병사를 잡는 최소 이동 횟수를 반환한다.
/// </summary>
/// <param name="visited">말이 방문한 위치 정보</param>
/// <param name="n">판의 행의 수</param>
/// <param name="m">판의 열의 수</param>
/// <param name="horse">말의 위치</param>
/// <param name="soldier">병사의 위치</param>
/// <param name="count">이동 횟수</param>
/// <returns>최소 이동 횟수</returns>
int Janggi2::GetLeastMoveCount(int** visited, int n, int m, Point horse, const Point& soldier)
{
	static int xMoveDir[8]{ -2, -1, 1, 2, 2, 1, -1, -2 };
	static int yMoveDir[8]{ -1, -2, -2, -1, 1, 2, 2, 1 };

	queue<Point> q;

	q.push(horse);

	int leastCount{ 999'999'999 };
	while (!q.empty())
	{
		Point p{ q.front() };
		q.pop();

		if (p == soldier)
		{
			if (p.count < leastCount)
			{
				leastCount = p.count;
			}
		}

		for (int i = 0; i < 8; i++)
		{
			Point newPos{ p };
			newPos.x += xMoveDir[i];
			newPos.y += yMoveDir[i];
			newPos.count = p.count + 1;

			if (IsOutOfBoard(newPos, n, m)
				|| visited[newPos.y][newPos.x] <= newPos.count)
			{
				continue;
			}

			q.push(newPos);

			visited[newPos.y][newPos.x] = newPos.count;
		}
	}

	return leastCount;
}

/// <summary>
/// 말이 보드 밖으로 나갔는지 여부를 반환한다.
/// </summary>
/// <param name="p">확인할 말의 좌표</param>
/// <returns>보드 밖으로 나갔는지 여부</returns>
bool Janggi2::IsOutOfBoard(const Point& p, int n, int m)
{
	if (p.x < 1) return true;
	if (n < p.x) return true;
	if (p.y < 1) return true;
	if (m < p.y) return true;
	return false;
}