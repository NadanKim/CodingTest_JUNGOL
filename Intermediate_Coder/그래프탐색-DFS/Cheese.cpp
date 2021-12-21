#include "Cheese.h"

/// <summary>
/// 문제
/// 아래 <그림 1>과 같이 정사각형 칸들로 이루어진 사각형 모양의 판이 있고, 
/// 그 위에 얇은 치즈(회색으로 표시된 부분)가 놓여 있다.
/// 판의 가장자리(<그림 1>에서 네모칸에 엑스친 부분)에는 치즈가 놓여 있지 않으며 치즈에는 하나 이상의 구멍이 있을 수 있다.
/// 
/// 이 치즈를 공기 중에 놓으면 녹게 되는데 공기와 접촉된 칸은 한 시간이 지나면 녹아 없어진다.
/// 치즈의 구멍 속에는 공기가 없지만 구멍을 둘러싼 치즈가 녹아서 구멍이 열리면 구멍 속으로 공기가 들어 가게 된다.
/// <그림 1>의 경우, 치즈의 구멍을 둘러싼 치즈는 녹지 않고 ‘c’로 표시된 부분만 한 시간 후 에 녹아 없어져서 <그림 2>와 같이 된다.
/// 
/// 다시 한 시간 후에는 <그림 2>에서 ‘c’로 표시된 부분이 녹아 없어져서 <그림 3>과 같이 된다.
/// 
/// <그림 3>은 원래 치즈의 두 시간 후 모양을 나타내고 있으며, 남은 조각들은 한 시간이 더 지나면 모 두 녹아 없어진다.
/// 그러므로 처음 치즈가 모두 녹아 없어지는 데는 세 시간이 걸린다.
/// <그림 3>과 같이 치즈가 녹는 과정에서 여러 조각으로 나누어 질 수도 있다.
/// 
/// 입력으로 사각형 모양의 판의 크기와 한 조각의 치즈가 판 위에 주어졌을 때,
/// 공기 중에서 치즈가 모 두 녹아 없어지는 데 걸리는 시간과
/// 모두 녹기 한 시간 전에 남아있는 치즈 조각이 놓여 있는 칸의 개수를 구하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 입력 파일의 첫째 줄에는 사각형 모양 판의 세로와 가로의 길이가 양의 정수로 주어진다.
/// 세로와 가로의 길이는 최대 100이다.판의 각 가로 줄의 모양이 윗 줄부터 차례로 입력 파일의 둘째 줄부터 마지막 줄까지 주어진다.
/// 치즈가 없는 칸은 0, 치즈가 있는 칸은 1로 주어 지며 각 숫자 사이에는 빈칸이 하나씩 있다.
/// 
/// 출력 형식
/// 첫째 줄에는 치즈가 모두 녹아서 없어지는 데 걸리는 시간을 출력하고, 둘째 줄에는 모두 녹기 한 시간 전에 남아있는 치즈 조각이 놓여 있는 칸의 개수를 출력한다.
///
/// 입력 예
/// 13 12
/// 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0
/// 0 0 0 0 0 0 0 1 1 0 0 0
/// 0 1 1 1 0 0 0 1 1 0 0 0
/// 0 1 1 1 1 1 1 0 0 0 0 0
/// 0 1 1 1 1 1 0 1 1 0 0 0
/// 0 1 1 1 1 0 0 1 1 0 0 0
/// 0 0 1 1 0 0 0 1 1 0 0 0
/// 0 0 1 1 1 1 1 1 1 0 0 0
/// 0 0 1 1 1 1 1 1 1 0 0 0
/// 0 0 1 1 1 1 1 1 1 0 0 0
/// 0 0 1 1 1 1 1 1 1 0 0 0
/// 0 0 0 0 0 0 0 0 0 0 0 0
///
/// 출력 예
/// 3
/// 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=729&sca=3090
/// </summary>
void Cheese::Code()
{
	int n, m;

	std::cin >> n >> m;

	char** arr = new char* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[m];
		for (int j = 0; j < m; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	int hour{ 0 }, count{ 0 };
	while (true)
	{
		hour++;
		int curCount{ GetCheeseMeltingCount(arr, n, m) };
		if (curCount == 0)
		{
			break;
		}
		count = curCount;
	}

	std::cout << hour << '\n' << count;

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

/// <summary>
/// 주어진 치즈가 녹는 시간과 마지막 개수를 출력한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열 세로 길이</param>
/// <param name="m">배열 가로 길이</param>
int Cheese::GetCheeseMeltingCount(char** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == '1' && IsSideCheese(arr, n, m, j, i))
			{
				CheckSideCheese(arr, n, m, j, i);
			}
		}
	}
	std::cout << "------------------\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == '0')
				std::cout << "  ";
			else if (arr[i][j] == '1')
				std::cout << "1 ";
			else
				std::cout << "C ";
		}
		std::cout << '\n';
	}
	std::cout << "------------------\n\n";
	MeltCheese(arr, n, m);
	return CountCheese(arr, n, m);
}

/// <summary>
/// 해당 위치의 치즈가 외곽에 있는 것인지 여부를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열 세로 길이</param>
/// <param name="m">배열 가로 길이</param>
/// <param name="x">확인할 x 좌표</param>
/// <param name="y">확인할 y 좌표</param>
/// <returns>외곽에 있는지 여부</returns>
bool Cheese::IsSideCheese(char** arr, int n, int m, int x, int y)
{
	if (x >= m || y >= n)
	{
		return false;
	}

	if (x == 0 || x == m - 1 || y == 0 || y == n - 1)
	{
		return true;
	}

	bool result{ false };
	if (arr[y][x - 1] == '0')
	{
		arr[y][x - 1] = 't';
		result = IsSideCheese(arr, n, m, x - 1, y);
		arr[y][x - 1] = '0';
	}
	if (!result && arr[y][x + 1] == '0')
	{
		arr[y][x + 1] = 't';
		result = IsSideCheese(arr, n, m, x + 1, y);
		arr[y][x + 1] = '0';
	}
	if (!result && arr[y - 1][x] == '0')
	{
		arr[y - 1][x] = 't';
		result = IsSideCheese(arr, n, m, x, y - 1);
		arr[y - 1][x] = '0';
	}
	if (!result && arr[y + 1][x] == '0')
	{
		arr[y + 1][x] = 't';
		result = IsSideCheese(arr, n, m, x, y + 1);
		arr[y + 1][x] = '0';
	}
	return result;
}

/// <summary>
/// 주어진 지점에 연결된 외곽 치즈를 찾아 표시한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열 세로 길이</param>
/// <param name="m">배열 가로 길이</param>
/// <param name="x">확인할 x 좌표</param>
/// <param name="y">확인할 y 좌표</param>
void Cheese::CheckSideCheese(char** arr, int n, int m, int x, int y)
{
	stack<Point> s;
	s.push(Point(x, y));

	while (!s.empty())
	{
		Point p = s.top();
		s.pop();

		arr[p.y][p.x] = 'c';

		for (int i = -1; i <= 1; i += 2)
		{
			if (IsSideCheese(arr, n, m, p.x + i, p.y))
			{
				s.push(Point(p.x + i, p.y));
			}
			if (IsSideCheese(arr, n, m, p.x, p.y + i))
			{
				s.push(Point(p.x, p.y + i));
			}
		}
	}
}

/// <summary>
/// 현재 남은 치즈의 개수를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열 세로 길이</param>
/// <param name="m">배열 가로 길이</param>
/// <returns>치즈의 개수</returns>
int Cheese::CountCheese(char** arr, int n, int m)
{
	int count{ 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

/// <summary>
/// 배열 내 녹일 치즈를 제거한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열 세로 길이</param>
/// <param name="m">배열 가로 길이</param>
void Cheese::MeltCheese(char** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'c')
			{
				arr[i][j] = '0';
			}
		}
	}
}