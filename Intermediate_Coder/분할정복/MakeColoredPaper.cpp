#include "MakeColoredPaper.h"

/// <summary>
/// 문제
/// 아래 <그림 1>과 같이 여러개의 정사각형칸들로 이루어진 정사각형 모양의 종이가 주어져 있고, 
/// 각 정사각형들은 하얀색으로 칠해져 있거나 파란색으로 칠해져 있다.
/// 주어진 종이를 일정한 규칙에 따라 잘라서 다양한 크기를 가진 정사각형 모양의 하얀색 또는 파란색 색종이를 만들려고 한다.
/// 
/// 전체 종이의 크기가 N×N(N=2k, k는 1 이상 7 이하의 자연수) 이라면 종이를 자르는 규칙은 다음과 같다.
/// 
/// 전체 종이가 모두 같은 색으로 칠해져 있지 않으면 가로와 세로로 중간 부분을 잘라서
/// <그림 2>의 I, II, III, IV와 같이 똑같은 크기의 네 개의 N / 2 × N / 2색종이로 나눈다.
/// 나누어진 종이 I, II, III, IV 각각에 대해서도 앞에서와 마찬가지로 모두 같은 색으로 칠해져 있지 않으면
/// 같은 방법으로 똑같은 크기의 네 개의 색종이로 나눈다.
/// 이와 같은 과정을 잘라진 종이가 모두 하얀색 또는 모두 파란색으로 칠해져 있거나,
/// 하나의 정사각형 칸이 되어 더 이상 자를 수 없을 때까지 반복한다.
/// 
/// 위와 같은 규칙에 따라 잘랐을 때 <그림 3>은 <그림 1>의 종이를 처음 나눈 후의 상태를,
/// <그림 4>는 두 번째 나눈 후의 상태를,
/// <그림 5>는 최종적으로 만들어진 다양한 크기의 9장의 하얀색 색종이와 7장의 파란색 색종이를 보여주고 있다.
/// 
/// 입력으로 주어진 종이의 한 변의 길이 N과 각 정사각형칸의 색(하얀색 또는 파란색)이 주어질 때 
/// 잘라진 하얀색 색종이와 파란색 색종이의 개수를 구하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 입력 파일의 첫째 줄에는 전체 종이의 한 변의 길이 N이 주어져 있다. N은 2, 4, 8, 16, 32, 64, 128 중 하나이다.
/// 색종이의 각 가로줄의 정사각형칸들의 색이 윗줄부터 차례로 입력 파일의 둘째 줄부터 마지막 줄까지 주어진다.
/// 하얀색으로 칠해진 칸은 0, 파란색으로 칠해진 칸은 1로 주어지며, 각 숫자 사이에는 빈칸이 하나씩 있다.
/// 
/// 출력 형식
/// 첫째 줄에는 잘라진 햐얀색 색종이의 개수를 출력하고, 둘째 줄에는 파란색 색종이의 개수를 출력한다.
///
/// 입력 예
/// 8
/// 1 1 0 0 0 0 1 1
/// 1 1 0 0 0 0 1 1
/// 0 0 0 0 1 1 0 0
/// 0 0 0 0 1 1 0 0
/// 1 0 0 0 1 1 1 1
/// 0 1 0 0 1 1 1 1
/// 0 0 1 1 1 1 1 1
/// 0 0 1 1 1 1 1 1
///
/// 출력 예
/// 9
/// 7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=614&sca=30
/// </summary>
void MakeColoredPaper::Code()
{
	int n;

	std::cin >> n;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	int cntArr[2]{ 0, 0 };
	CountColoredPapers(arr, n, 0, 0, cntArr);

	std::cout << cntArr[0] << '\n' << cntArr[1];

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

/// <summary>
/// 잘라진 색종이의 개수를 세어 cntArr에 각각의 개수를 넣어 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">영역의 크기</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
/// <param name="cntArr">색종이 색상별 개수</param>
void MakeColoredPaper::CountColoredPapers(int** arr, int n, int x, int y, int* cntArr)
{
	if (IsAllSame(arr, n, x, y))
	{
		cntArr[arr[y][x]]++;
		return;
	}

	int curSize{ n / 2 };
	CountColoredPapers(arr, curSize, x, y, cntArr);
	CountColoredPapers(arr, curSize, x + curSize, y, cntArr);
	CountColoredPapers(arr, curSize, x, y + curSize, cntArr);
	CountColoredPapers(arr, curSize, x + curSize, y + curSize, cntArr);
}

/// <summary>
/// 주어진 배열의 범위 내의 색상이 모두 동일한지 여부를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">영역의 크기</param>
/// <param name="x">x 시작 인덱스</param>
/// <param name="y">y 시작 인덱스</param>
/// <returns>모든 생상이 동일한지 여부</returns>
bool MakeColoredPaper::IsAllSame(int** arr, int n, int x, int y)
{
	int val{ arr[y][x] };
	for (int i = y; i < y + n; i++)
	{
		for (int j = x; j < x + n; j++)
		{
			if (arr[i][j] != val)
			{
				return false;
			}
		}
	}
	return true;
}