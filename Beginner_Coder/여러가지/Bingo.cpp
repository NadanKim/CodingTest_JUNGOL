#include "Bingo.h"

/// <summary>
/// 문제
/// 빙고 게임은 다음과 같은 방식으로 이루어진다.
/// 먼저 아래와 같이 25개의 칸으로 이루어진 빙고판에 1부터 25까지 자연수를 한 칸에 하나씩 쓴다.
/// 11	12	2	24	10
/// 16	1	13	3	25
/// 6	20	5	21	17
/// 19	4	8	14	9
/// 22	15	7	23	18
/// 
/// 다음은 사회자가 부르는 수를 차례로 지워나간다.
/// 예를 들어 5 10 7이 불렸다면 이 세 수를 지운 뒤 빙고판의 모습은 다음과 같다.
/// 11	12	2	24	|10
/// 16	1	13	3	25
/// 6	20	|5	21	17
/// 19	4	8	14	9
/// 22	15	|7	23	18
/// 
/// 차례로 수를 지워가다가 같은 가로줄 세로줄 또는 대각선 위에 있는 5개의 모든 수가 지워지는 경우 그 줄에 선을 긋는다.
/// 11	12	{2}	24	{10}
/// |16	1	{13}{3}	25
/// 6	20	{5}	21	|17
/// 19	{4} {8}	14	9
/// {22}15	{7}	23	18
/// 
/// 이러한 선이 세 개 이상 그어지는 순간 "빙고"라고 외치는데 가장 먼저 외치는 사람이 게임의 승자가 된다.
/// 11	12	{2}	24	{10}
/// {16}{1} {13}{3} {25}
/// 6	20	{5}	21 |17
/// 19	{4} {8}	14	9
/// {22}15	{7}	23	18
/// 
/// 철수는 친구들과 빙고 게임을 하고 있다.철수가 빙고판에 쓴 수들과 사회자가 부르는 수의 순서가 주어질 때
/// 사회자가 몇 번째 수를 부른 후 철수가 "빙고"를 외치게 되는지를 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄부터 다섯째 줄까지 빙고판에 쓰여진 수가 가장 위 가로줄부터 차례대로 한 줄에 다섯 개씩 빈 칸을 사이에 두고 주어진다.
/// 여섯째 줄부터 열째 줄까지 사회자가 부르는 수가 차례대로 한 줄에 다섯 개씩 빈 칸을 사이에 두고 주어진다.
/// 빙고판에 쓰여진 수와 사회자가 부르는 수는 각각 1부터 25까지의 수가 한 번씩 사용된다.
/// 
/// 출력 형식
/// 첫째 줄에 사회자가 몇 번째 수를 부른 후 철수가 "빙고"를 외치게 되는지 출력한다.
///
/// 입력 예
/// 11 12 2 24 10
/// 16 1 13 3 25
/// 6 20 5 21 17
/// 19 4 8 14 9
/// 22 15 7 23 18
/// 5 10 7 16 2
/// 4 22 8 17 13
/// 3 18 1 6 25
/// 12 19 23 14 21
/// 11 24 9 20 15
///
/// 출력 예
/// 15
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=310&sca=2060
/// </summary>
void Bingo::Code()
{
	unordered_map<int, Point> map;

	int num;
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			std::cin >> num;
			map[num] = Point(x, y);
		}
	}

	int inputArr[25]{};
	for (int i = 0; i < 25; i++)
	{
		std::cin >> inputArr[i];
	}

	int bingoCount{ 0 };
	int checkBoard[5][5]{};

	for (int i = 0; i < 25; i++)
	{
		if (CheckThreeBingo(map, inputArr[i], checkBoard, bingoCount))
		{
			std::cout << i + 1;
			break;
		}
	}
}

bool Bingo::CheckThreeBingo(unordered_map<int, Point> map, int input,
	int checkBoard[5][5], int& bingoCount)
{
	Point curPos{ map[input] };
	checkBoard[curPos.y][curPos.x] = input;

	// horizontal
	if (IsExistsValueToEdge(checkBoard, curPos, -1, 0)
		&& IsExistsValueToEdge(checkBoard, curPos, 1, 0))
	{
		bingoCount++;
	}
	// vertical
	if (IsExistsValueToEdge(checkBoard, curPos, 0, -1)
		&& IsExistsValueToEdge(checkBoard, curPos, 0, 1))
	{
		bingoCount++;
	}

	if (IsDiagonalToRU(curPos))
	{
		if (IsExistsValueToEdge(checkBoard, curPos, -1, 1)
			&& IsExistsValueToEdge(checkBoard, curPos, 1, -1))
		{
			bingoCount++;
		}
	}
	if (IsDiagonalToRD(curPos))
	{
		if (IsExistsValueToEdge(checkBoard, curPos, -1, -1)
			&& IsExistsValueToEdge(checkBoard, curPos, 1, 1))
		{
			bingoCount++;
		}
	}

	return bingoCount >= 3;
}

bool Bingo::IsDiagonalToRU(Point& pos)
{
	if (pos.x + pos.y == 4) return true;
	return false;
}

bool Bingo::IsDiagonalToRD(Point& pos)
{
	if (pos.x == pos.y) return true;
	return false;
}

bool Bingo::IsExistsValueToEdge(const int checkBoard[5][5], Point pos, int incX, int incY)
{
	bool result{ false };

	do
	{
		pos.x += incX;
		pos.y += incY;

		if (IsEdge(pos))
		{
			result = true;
			break;
		}
	} while (checkBoard[pos.y][pos.x] != 0);

	return result;
}

bool Bingo::IsEdge(Point& pos)
{
	if (pos.x < 0) return true;
	if (pos.x >= 5) return true;
	if (pos.y < 0) return true;
	if (pos.y >= 5) return true;
	return false;
}