#include "CheckArea.h"

/// <summary>
/// 문제
/// 눈금의 간격이 1인 M×N(M,N≤100)크기의 모눈종이가 있다. 
/// 이 모눈종이 위에 눈금에 맞추어 K개의 직사각형을 그릴 때, 이들 K개의 직사각형의 내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 나누어진다.
/// 
/// 예를 들어 M = 5, N = 7 인 모눈종이 위에 <그림 1>과 같이 직사각형 3개를 그렸다면, 그 나머지 영역은 <그림 2>와 같이 3개의 분리된 영역으로 나누어지게 된다.
/// 
/// <그림 2>와 같이 분리된 세 영역의 넓이는 각각 1, 7, 13이 된다.
/// 
/// M, N과 K 그리고 K개의 직사각형의 좌표가 주어질 때, K개의 직사각형 내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 나누어지는지, 
/// 그리고 분리된 각 영역의 넓이가 얼마인지를 구하여 이를 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄에 M과 N, 그리고 K가 빈칸을 사이에 두고 차례로 주어진다. M, N, K는 모두 100 이하의 자연수이다.
/// 둘째 줄부터 K개의 줄에는 한 줄에 하나씩 직사각형의 왼쪽 아래 꼭짓점의 x, y좌표값과 오른쪽 위 꼭짓점의 x, y좌표값이 빈칸을 사이에 두고 차례로 주어진다.
/// 모눈종이의 왼쪽 꼭짓점의 좌표는(0, 0)이고, 오른쪽 위 꼭짓점의 좌표는(N, M)이다.
/// 입력되는 K개의 직사각형들이 모눈종이 전체를 채우는 경우는 없다.
/// 
/// 출력 형식
/// 첫째 줄에 분리되어 나누어지는 영역의 개수를 출력한다.
/// 둘째 줄에는 각 영역의 넓이를 오름차순으로 정렬하여 빈칸을 사이에 두고 출력한다.
///
/// 입력 예
/// 5 7 3
/// 0 2 4 4
/// 1 1 2 5
/// 4 0 6 2
///
/// 출력 예
/// 3
/// 1 7 13
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=729&sca=3090
/// </summary>
void CheckArea::Code()
{
	int m, n, k;
	std::cin >> m >> n >> k;

	int** arr = new int*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n] {};
	}

	// 주어진 영역을 채워준다.
	for (int i = 0; i < k; i++)
	{
		int x1, y1, x2, y2;

		std::cin >> x1 >> y1 >> x2 >> y2;

		SetArr(arr, x1, y1, x2, y2);
	}

	// 채워지지 않은 영역을 찾아 연결된 개수를 확인한다.
	std::vector<int> areaCounts;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0)
			{
				areaCounts.push_back(GetAreaCount(arr, n, m, j, i));
			}
		}
	}
	
	std::sort(areaCounts.begin(), areaCounts.end());

	std::cout << areaCounts.size() << '\n';
	for (int num : areaCounts)
	{
		std::cout << num << ' ';
	}

	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

/// <summary>
/// 배열에 주어진 영역을 채운다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="x1">좌하단 x</param>
/// <param name="y1">좌하단 y</param>
/// <param name="x2">우상단 x</param>
/// <param name="y2">우상단 y</param>
void CheckArea::SetArr(int** arr, int x1, int y1, int x2, int y2)
{
	for (int i = y1; i < y2; i++)
	{
		for (int j = x1; j < x2; j++)
		{
			arr[i][j] = 1;
		}
	}
}

/// <summary>
/// 주어진 좌표를 기준으로 연속된 영역의 개수를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 x 길이</param>
/// <param name="m">배열의 y 길이</param>
/// <param name="x">최초 x 좌표</param>
/// <param name="y">최초 y 좌표</param>
/// <returns></returns>
int CheckArea::GetAreaCount(int** arr, int n, int m, int x, int y)
{
	int areaCount{ 0 };

	stack<Point> s;
	s.push(Point(x, y));

	while (!s.empty())
	{
		Point p = s.top();
		s.pop();

		if (arr[p.y][p.x] == 0)
		{
			arr[p.y][p.x] = 1;
			areaCount++;

			for (int i = -1; i <= 1; i += 2)
			{
				int newX{ p.x + i }, newY{ p.y + i };
				if (0 <= newX && newX < n)
				{
					if (arr[p.y][newX] == 0)
					{
						s.push(Point(newX, p.y));
					}
				}
				if (0 <= newY && newY < m)
				{
					if (arr[newY][p.x] == 0)
					{
						s.push(Point(p.x, newY));
					}
				}
			}
		}
	}

	return areaCount;
}