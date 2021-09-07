#include "ColoredPaper3.h"

/// <summary>
/// 문제
/// 가로, 세로의 크기가 각각 100인 정사각형 모양의 흰색 도화지가 있다. 
/// 이 도화지 위에 가로, 세로의 크기가 각각 10인 정사각형 모양의 검은색 색종이를 색종이의 변과 도화지의 변이 평행하도록 붙인다.
/// 이러한 방식으로 색종이를 한 장 또는 여러 장 붙인 후 도화지에서 검은색 직사각형을 잘라내려고 한다.
/// 직사각형 또한 그 변이 도화지의 변과 평행하도록 잘라내어야 한다.
/// 
/// 예를 들어 흰색 도화지 위에 세 장의 검은색 색종이를 <그림 1>과 같은 모양으로 붙였다.
/// <그림 1>에 표시된 대로 검은색 직사각형을 잘라내면 그 넓이는 22×5 = 110이 된다.
/// 
/// 반면 <그림 2>에 표시된 대로 검은색 직사각형을 잘라내면 그 넓이는 8×15 = 120이 된다.
/// 
/// 검은색 색종이의 수와 각 색종이를 붙인 위치가 주어질 때 잘라낼 수 있는 검은색 직사각형의 최대 넓이를 구하는 프로그램을 작성하시오.
/// 
/// * 주의.직사각형은 정사각형을 포함한다.
///
/// 입력 형식
/// 첫째 줄에 색종이의 수가 주어진다. 이어 둘째 줄부터 한 줄에 하나씩 색종이를 붙인 위치가 주어진다.
/// 색종이를 붙인 위치는 두 개의 자연수로 주어지는데 첫 번째 자연수는 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리이고, 
/// 두 번째 자연수는 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리이다.
/// 색종이의 수는 100 이하이며, 색종이가 도화지 밖으로 나가는 경우는 없다.
/// 
/// 출력 형식
/// 첫째 줄에 잘라낼 수 있는 검은색 직사각형의 최대 넓이를 출력한다.
///
/// 입력 예
/// 3
/// 3 7
/// 15 7
/// 5 2
///
/// 출력 예
/// 120
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=404&sca=3020
/// </summary>
void ColoredPaper3::Code()
{
	bool** arr = new bool*[101];
	for (int i = 0; i < 101; i++)
	{
		arr[i] = new bool[101];
		std::fill_n(arr[i], 101, false);
	}

	int n;
	std::cin >> n;

	Point* pointArr = new Point[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> pointArr[i].x >> pointArr[i].y;
		FillArr(arr, pointArr[i].x, pointArr[i].y);
	}

	int maxArea{ 100 };
	for (int i = 0; i < n; i++)
	{
		int area{ CheckArea(arr, pointArr[i].x, pointArr[i].y) };
		if (area > maxArea)
		{
			maxArea = area;
		}
	}

	std::cout << maxArea;

	delete[] pointArr;

	for (int i = 0; i < 101; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

/// <summary>
/// 입력된 위치에 색종이를 채워준다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
void ColoredPaper3::FillArr(bool** arr, int x, int y)
{
	for (int i = y; i < y + 10; i++)
	{
		for (int j = x; j < x + 10; j++)
		{
			arr[i][j] = true;
		}
	}
}

/// <summary>
/// 주어진 좌표에서 시작하는 최대 넓이를 확인하여 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
/// <returns>넓이</returns>
int ColoredPaper3::CheckArea(bool** arr, int x, int y)
{
	int width{ GetCurLineWidth(arr, x, y) };
	int count{ 0 };
	int area{ 100 };

	for (int i = y; ; i++)
	{
		if (!arr[i][x])
		{
			int curArea{ width * count };
			if (curArea > area)
			{
				area = curArea;
			}
			break;
		}

		int curWidth{ GetCurLineWidth(arr, x, i) };
		if (curWidth >= width)
		{
			count++;
		}
		else
		{
			int curArea{ width * count };
			if (curArea > area)
			{
				area = curArea;
			}
			width = curWidth;
			count++;
		}
	}

	return area;
}

/// <summary>
/// 주어진 좌표의 너비를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
/// <returns>해당 라인의 넓이</returns>
int ColoredPaper3::GetCurLineWidth(bool** arr, int x, int y)
{
	int width{ 0 };
	for (int i = x; ; i++)
	{
		if (!arr[y][i])
		{
			break;
		}

		width++;
	}
	return width;
}