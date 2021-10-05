#include "Sudoku.h"

/// <summary>
/// 문제
/// 스도쿠는 18세기 스위스 수학자가 만든 '라틴 사각형'이랑 퍼즐에서 유래한 것으로 현재 많은 인기를 누리고 있다. 
/// 이 게임은 아래 그림과 같이 가로, 세로 각각 9개씩 총 81개의 작은 칸으로 이루어진 정사각형 판 위에서 이뤄지는데,
/// 게임 시작 전 몇 몇 칸에는 1부터 9까지의 숫자 중 하나가 쓰여 있다.
/// 
/// 나머지 빈 칸을 채우는 방식은 다음과 같다.
/// 
/// (1) 각각의 가로줄과 세로줄에는 1부터 9까지의 숫자가 한 번씩만 나타나야 한다.
/// (2) 굵은 선으로 구분되어 있는 3x3 정사각형 안에도 1부터 9까지의 숫자가 한 번씩만 나타나야 한다.
/// 
/// 위의 예의 경우, 첫째 줄에는 1을 제외한 나머지 2부터 9까지의 숫자들이 이미 나타나 있으므로
/// 첫째 줄 빈칸에는 1이 들어가야 한다.
/// 
/// 또한 위쪽 가운데 위치한 3x3 정사각형의 경우에는 3을 제외한 나머지 숫자들이 이미 쓰여있으므로 
/// 가운데 빈 칸에는 3이 들어가야 한다.
///
/// 이와 같이 빈 칸을 차례로 채워 가면 다음과 같은 최종 결과를 얻을 수 있다. 
/// 
/// (위 사각형에 있는 음영은 문제의 편의상 표시한 것이다.)
/// 
/// 게임 시작 전 스도쿠 판에 쓰여 있는 숫자들의 정보가 주어질 때
/// 모든 빈 칸이 채워진 최종 모습을 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 아홉 줄에 걸쳐 한 줄에 9개씩 게임 시작 전 스도쿠판 각 줄에 쓰여 있는 숫자가 한 칸씩 띄워서 차례로 주어진다.
/// 스도쿠 판의 빈 칸의 경우에는 0이 주어진다.
/// 스도쿠 판을 규칙대로 채울 수 없는 경우의 입력은 주어지지 않는다.
/// 
/// 출력 형식
/// 모든 빈 칸이 채워진 스도쿠 판의 최종 모습을 아홉줄에 걸쳐 한 줄에 9개씩 한 칸씩 띄워서 출력한다.
/// 스도쿠 판을 채우는 방법이 여럿인 경우는 그 중 하나만을 출력한다.
///
/// 입력 예
/// 0 3 5 4 6 9 2 7 8
/// 7 8 2 1 0 5 6 0 9
/// 0 6 0 2 7 8 1 3 5
/// 3 2 1 0 4 6 8 9 7
/// 8 0 4 9 1 3 5 0 6
/// 5 9 6 8 2 0 4 1 3
/// 9 1 7 6 5 2 0 8 0
/// 6 0 3 7 0 1 9 5 2
/// 2 5 8 3 9 4 7 6 0
///
/// 출력 예
/// 1 3 5 4 6 9 2 7 8
/// 7 8 2 1 3 5 6 4 9
/// 4 6 9 2 7 8 1 3 5
/// 3 2 1 5 4 6 8 9 7
/// 8 7 4 9 1 3 5 2 6
/// 5 9 6 8 2 7 4 1 3
/// 9 1 7 6 5 2 3 8 4
/// 6 4 3 7 8 1 9 5 2
/// 2 5 8 3 9 4 7 6 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1097&sca=3030
/// </summary>
void Sudoku::Code()
{
	int arr[9][9];
	vector<Point> coords;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> arr[i][j];

			if (arr[i][j] == 0)
			{
				coords.push_back(Point(j, i));
			}
		}
	}

	PrintAnswer(arr, coords);
}

/// <summary>
/// 완성된 스도쿠를 출력한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="coords">빈 값의 좌표 리스트</param>
/// <param name="depth">깊이</param>
/// <returns>완료 여부</returns>
bool Sudoku::PrintAnswer(int arr[9][9], vector<Point>& coords, size_t depth)
{
	if (depth == coords.size())
	{
		PrintBoard(arr);
		return true;
	}

	Point p{ coords[depth] };

	for (int i = 1; i <= 9; i++)
	{
		if (IsUnique(arr, p, i))
		{
			int newArr[9][9];
			for (int j = 0; j < 9; j++)
			{
				std::copy_n(arr[j], 9, newArr[j]);
			}

			newArr[p.y][p.x] = i;

			bool isPrinted{ PrintAnswer(newArr, coords, depth + 1) };
			if (isPrinted)
			{
				return isPrinted;
			}
		}
	}

	return false;
}

/// <summary>
/// 스도쿠를 출력한다.
/// </summary>
/// <param name="arr">배열</param>
void Sudoku::PrintBoard(int arr[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}

/// <summary>
/// 현재 지점에 넣을 값이 유일한지 여부를 반환한다.
/// </summary>
/// <param name="arr">스도쿠 배열</param>
/// <param name="p">추가할 좌표</param>
/// <param name="num">추가할 값</param>
/// <returns>유일성 여부</returns>
bool Sudoku::IsUnique(int arr[9][9], Point p, int num)
{
	return CheckHorizontal(arr, p.y, num)
		&& CheckVertical(arr, p.x, num)
		&& CheckSquare(arr, p.x, p.y, num);
}

/// <summary>
/// 현재 지점에 값을 넣었을 때 가로를 검사하여 유일성 여부를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="y">값의 y좌표</param>
/// <param name="num">추가할 값</param>
/// <returns>유일성 여부</returns>
bool Sudoku::CheckHorizontal(int arr[9][9], int y, int num)
{
	for (int i = 0; i < 9; i++)
	{
		if (arr[y][i] == num)
		{
			return false;
		}
	}
	return true;
}

/// <summary>
/// 현재 지점에 값을 넣었을 때 세로를 검사하여 유일성 여부를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="x">값의 x좌표</param>
/// <param name="num">추가할 값</param>
/// <returns>유일성 여부</returns>
bool Sudoku::CheckVertical(int arr[9][9], int x, int num)
{
	for (int i = 0; i < 9; i++)
	{
		if (arr[i][x] == num)
		{
			return false;
		}
	}
	return true;
}

/// <summary>
/// 현재 지점에 값을 넣었을 때 해당 구역을 검사하여 유일성 여부를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="x">값의 x좌표</param>
/// <param name="y">값의 y좌표</param>
/// <param name="num">추가할 값</param>
/// <returns>유일성 여부</returns>
bool Sudoku::CheckSquare(int arr[9][9], int x, int y, int num)
{
	int sectionX{ x / 3 }, sectionY{ y / 3 };

	for (int i = sectionY * 3; i < sectionY * 3 + 3; i++)
	{
		for (int j = sectionX * 3; j < sectionX * 3 + 3; j++)
		{
			if (arr[i][j] == num)
			{
				return false;
			}
		}
	}
	return true;
}