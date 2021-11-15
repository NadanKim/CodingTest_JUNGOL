#include "Janggi.h"

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
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=386&sca=3030
/// </summary>
void Janggi::Code()
{
	int n, m;
	std::cin >> n >> m;

	int r, c, s, k;
	std::cin >> r >> c >> s >> k;

	int xMoveDir[8]{ -2, -1, 1, 2, 2, 1, -1, -2 };
	int yMoveDir[8]{ -1, -2, -2, -1, 1, 2, 2, 1 };

	bool visited[101][101]{};
	std::cout << GetLeastMoveCount(xMoveDir, yMoveDir, 
		visited, 
		n, m, r, c, s, k);
}

int Janggi::GetLeastMoveCount(int xMoveDir[8], int yMoveDir[8], 
	bool visited[101][101],
	int n, int m, int r, int c, int s, int k, int count)
{
	if (r == s && c == k)
	{
		return count;
	}

	int leastCount{ 999'999'999 };
	for (int i = 0; i < 8; i++)
	{
		int newR{ r + xMoveDir[i] }, newC{ c + yMoveDir[i] };
		if (newR < 1 || newR > n || newC < 1 || newC > m
			|| visited[newR][newC])
		{
			continue;
		}

		visited[newR][newC] = true;

		int curCount{ GetLeastMoveCount(xMoveDir, yMoveDir,
			visited,
			n, m, newR, newC, s, k, count + 1) };
		if (curCount < leastCount)
		{
			leastCount = curCount;
		}

		visited[newR][newC] = false;
	}
	
	return leastCount;
}