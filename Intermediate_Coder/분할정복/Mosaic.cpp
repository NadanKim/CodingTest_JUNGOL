﻿#include "Mosaic.h"

/// <summary>
/// 문제
/// 수찬이는 선생님을 도와서 교실 벽면을 장식할 모자이크 그림을 그리기로 하였다. 
/// 이를 위하여 직사각형 모양의 큰 도화지를 준비하여 교실 벽에 붙이고 1cm 간격으로 가로선과 세로선을 그려서 정사각형 모양의 칸을 만들고,
/// 각 칸마다 같은 색의 물감으로 색칠을 하였다.
/// 그런데 잘못 칠해진 칸이 있음을 발견하게 되었다.
/// 
/// 수찬이는 도화지와 색깔이 같은 색종이를 사서 잘못 칠해진 칸에 색종이를 붙이고 다시 그리는 것이 좋겠다고 생각하고 선생님께 상의를 드렸다.
/// 선생님께서는 정해진 장수의 색종이를 사용하여 아래와 같은 조건을 따르면서 잘못 칠해진 칸을 모두 가리되,
/// 가장 작은 색종이의 크기를 구하는 새로운 문제를 내셨다.
/// 
/// (조건 1) 사용되는 색종이는 모두 크기가 같고 정사각형 모양이다.
/// (조건 2) 색종이 크기는 한 변의 길이로 나타내며, 원하는 크기의 색종이는 모두 구할 수 있다.
/// (조건 3) 모든 색종이는 반드시 도화지의 밑변에 맞추어 붙인다.이 때 색종이를 겹쳐서 붙일 수 있다.
/// 
/// 도화지 위의 행은 다음 그림과 같이 맨 아래에서 위쪽으로 1번부터 순서대로 번호가 매겨져 있고,
/// 열은 왼쪽에서 오른쪽으로 1번부터 번호가 매겨져 있다.
/// 이 그림은 도화지에 가로선과 세로선을 그어서 4개의 행과 14개의 열, 그리고 56개의 칸으로 나눈 모양을 보여준다.
/// 잘못 칠해진 칸은 회색으로 표시되어 있다.
/// 
/// 도화지 위의 칸은 행 번호와 열 번호로 나타낸다.예를 들어 위 그림에서 가장 왼쪽에 있는 잘못 칠해진 칸 A의 위치는(2, 1)이다.
/// 위 그림과 같이 도화지에서 잘못 칠해진 칸이 9개 주어지고 색종이 4장을 사용한다면 가장 작은 색종이의 크기는 3cm이다.
/// 
/// 도화지의 행의 개수와 열의 개수, 그리고 도화지에 잘못 칠해진 칸들의 위치가 주어질 때,
/// 주어진 장수의 색종이를 사용하여 앞의 세 가지 조건에 따라 모든 잘못 칠해진 칸을 가릴 수 있는 가장 작은 색종이의 크기를 구하는
/// 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄에는 도화지 위의 행의 개수와 열의 개수를 나타내는 자연수가 빈칸을 사이에 두고 주어진다. 
/// 행의 개수와 열의 개수는 모두 1,000,000 이하이다.
/// 둘째 줄에는 사용할 색종이의 장수를 나타내는 자연수가 주어진다.사용할 색종이는 100장 이하이다.
/// 셋째 줄에는 도화지에 잘못 칠해진 칸의 개수를 나타내는 자연수가 주어진다.잘못 칠해진 칸은 1,000개 이하이다.
/// 넷째 줄부터 마지막 줄까지 잘못 칠해진 칸의 위치가 한 줄에 하나씩 주어진다.
/// 잘못 칠해진 칸의 위치는 빈칸을 사이에 두고 행 번호가 주어진 다음 열 번호가 주어진다.
/// 
/// 출력 형식
/// 첫째 줄에 주어진 장수의 색종이를 사용하여 잘못 칠해진 칸을 모두 가릴 수 있는 가장 작은 색종이의 크기가 몇 cm인지를 나타내는
/// 자연수를 출력한다.
///
/// 입력 예
/// 4 14
/// 4
/// 9
/// 1 2
/// 2 1
/// 2 3
/// 1 6
/// 3 5
/// 1 10
/// 3 6
/// 1 12
/// 2 13
///
/// 출력 예
/// 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=502&sca=30
/// </summary>
void Mosaic::Code()
{
	int rowCnt, colCnt;
	std::cin >> rowCnt >> colCnt;

	int paperCnt;
	std::cin >> paperCnt;

	int wrongCnt;
	std::cin >> wrongCnt;

	if (wrongCnt == 0)
	{
		std::cout << 0;
	}

	int minSize{ 0 };
	set<int> colSet;
	for (int row, col, i = 0; i < wrongCnt; i++)
	{
		std::cin >> row >> col;

		colSet.insert(col);

		if (row > minSize)
		{
			minSize = row;
		}
	}
	
	std::cout << FindProperSize(colSet, paperCnt, minSize);
}

/// <summary>
/// 잘못된 부분을 잘 수정할 수 있는 적절한 종이 크기를 반환한다.
/// </summary>
/// <param name="colSet">틀린 부분의 x축 위치</param>
/// <param name="paperCnt">사용할 수 있는 종이의 개수</param>
/// <returns>종이의 크기</returns>
int Mosaic::FindProperSize(set<int> colSet, int paperCnt, int minSize)
{
	int maxSize{ *(--colSet.end()) };
	int result{ maxSize };

	while (minSize <= maxSize)
	{
		int curPaperCnt{ 1 };
		int midSize{ (minSize + maxSize) / 2 };
		int prev{ *colSet.begin() };
		for (int num : colSet)
		{
			if (num >= prev + midSize)
			{
				prev = num;
				curPaperCnt++;
			}
		}

		if (curPaperCnt > paperCnt)
		{
			minSize = midSize + 1;
		}
		else
		{
			maxSize = midSize - 1;
			result = midSize;
		}
	}

	return result;
}