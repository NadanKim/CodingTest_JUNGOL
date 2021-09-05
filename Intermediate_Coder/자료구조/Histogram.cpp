#include "Histogram.h"

/// <summary>
/// 문제
/// 히스토그램이란 보통 분포의 정도를 알기 위해 사각형의 서열을 기준선에 맞춰 늘어놓은 다각형을 말한다. 
/// 만약 임의의 수열이 2, 1, 4, 5, 1, 3, 3일 경우 사각형의 너비를 1로 맞추어 히스토그램으로 만들면 다음과 같다.
/// 
/// 우리가 하고자 하는 것은 임의의 히스토그램이 주어졌을 때 히스토그램 내에서 사각형으로 이루어진 가장 큰 면적의 크기를 알고자 한다.
/// 왼쪽 의 히스토그램에서 가장 큰 사각형의 영역은 오른쪽에 밑줄이 쳐진 영역과 같다
///
/// 입력 형식
/// 입력 첫 번째는 히스토그램을 이루는 사각형의 개수 n(n≤100,000)이 입력되고 
/// 그 뒤로 히스토그램을 이루는 사각형의 높이가 순서대로 n개 입력이 된다.
/// 사각형의 높이 k는 0 ≤ k ≤ 1, 000, 000, 000 이다.사각형의 너비는 모두 1이다.
/// 
/// 출력 형식
/// 입력된 히스토그램으로 만들 수 있는 사각형의 최대 면적을 출력하라.
///
/// 입력 예
/// 7 2 1 4 5 1 3 3
///
/// 출력 예
/// 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=497&sca=3020
/// </summary>
void Histogram::Code()
{
	int n;
	std::cin >> n;

	long long maxArea{ 0 };
	map<int, int> accCount;
	int prevHeight{ 0 }, curHeight;
	for (int i = 0; i < n; i++)
	{
		std::cin >> curHeight;

		// 기존 높이보다 작은 경우
		if (curHeight < prevHeight)
		{
			// 더 이상 진행 불가능한 높은 높이들은 정산한다.
			for (int j = curHeight + 1; j < prevHeight; j++)
			{
				long long area{ accCount.at(j) * j };
				if (area > maxArea)
				{
					maxArea = area;
				}
				accCount.at(j) = 0;
			}

			// 나머지 낮은 높이는 계속 누적한다.
			for (int j = 1; j <= curHeight; j++)
			{
				if (accCount.find(j) == accCount.end())
				{
					accCount[j] = 0;
				}

				accCount[j]++;
			}
		}
		// 새로 들어온 높이가 이전과 같거나 더 높은 경우
		else
		{
			// 높이를 누적한다.
			for (int j = 1; j <= curHeight; j++)
			{
				if (accCount.find(j) == accCount.end())
				{
					accCount[j] = 0;
				}

				accCount[j]++;
			}
		}

		prevHeight = curHeight;
	}

	// 최종 결과를 누적하여 결과를 파악한다.
	for (auto ic = accCount.begin(); ic != accCount.end(); ic++)
	{
		long long area{ (*ic).first * (*ic).second };
		if (area > maxArea)
		{
			maxArea = area;
		}
	}

	std::cout << maxArea;
}