#include "ColoredPaper2.h"

/// <summary>
/// 문제
/// 가로, 세로의 크기가 각각 100인 정사각형 모양의 흰색 도화지가 있다. 
/// 이 도화지 위에 가로, 세로의 크기가 각각 10인 정사각형 모양의 검은색 색종이를 색종이의 변과 도화지의 변이 평행하도록 붙인다.
/// 이러한 방식으로 색종이를 한 장 또는 여러 장 붙인 후 색종이가 붙은 검은 영역의 둘레의 길이를 구하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄에 색종이의 수가 주어진다. 이어 둘째 줄부터 한 줄에 하나씩 색종이를 붙인 위치가 주어진다.
/// 색종이를 붙인 위치는 두 개의 자연수로 주어지는데 첫 번째 자연수는 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리이고,
/// 두 번째 자연수는 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리이다.
/// 색종이의 수는 100 이하이며, 색종이가 도화지 밖으로 나가는 경우는 없다.
/// 
/// 출력 형식
/// 첫째 줄에 색종이가 붙은 검은 영역의 둘레의 길이를 출력한다.
///
/// 입력 예
/// 4
/// 3 7
/// 5 2
/// 15 7
/// 13 14
///
/// 출력 예
/// 96
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=944&sca=2060
/// </summary>
void ColoredPaper2::Code()
{
	int n;

	std::cin >> n;

	bool** arr = new bool* [101];
	for (int i = 0; i < 101; i++)
	{
		arr[i] = new bool[101]{};
	}

	int xBeg, yBeg;
	for (int i = 0; i < n; i++)
	{
		std::cin >> xBeg >> yBeg;
		for (int yMax{ yBeg + 10 }, y = yBeg; y < yMax; y++)
		{
			for (int xMax{ xBeg + 10 }, x = xBeg; x < xMax; x++)
			{
				arr[y][x] = true;
			}
		}
	}
	
	int perimeter{ 0 };
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			if (!arr[i][j])
			{
				continue;
			}

			if (j == 0 || !arr[i][j - 1])
			{
				perimeter++;
			}
			if (j == 100 || !arr[i][j + 1])
			{
				perimeter++;
			}
			if (i == 0 || !arr[i - 1][j])
			{
				perimeter++;
			}
			if (i == 100 || !arr[i + 1][j])
			{
				perimeter++;
			}
		}
	}

	std::cout << perimeter;

	for (int i = 0; i < 101; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}