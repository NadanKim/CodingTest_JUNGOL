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

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << GetHistogramMaxArea(arr, n);

	delete[] arr;
}

/// <summary>
/// 히스토그램으로 만들 수 있는 사각형 최대 면적을 반환환다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <returns>최대 넓이</returns>
long long Histogram::GetHistogramMaxArea(int arr[], int n)
{
	long long maxArea{ 0 };
	stack<int> idxStack;

	for (int i = 0; i < n; i++)
	{
		while (!idxStack.empty())
		{
			int idx{ idxStack.top() };
			if (arr[idx] < arr[i])
			{
				idxStack.push(i);
				break;
			}
			else if (arr[i] < arr[idx])
			{
				int leftIdx{ GetLeftIdx(arr, n, idx) };
				int area{ (i - leftIdx) * arr[idx] };
				if (area > maxArea)
				{
					maxArea = area;
				}
				idxStack.pop();
			}
			else
			{
				break;
			}
		}

		if (idxStack.empty())
		{
			idxStack.push(i);
		}
	}

	while (!idxStack.empty())
	{
		int idx{ idxStack.top() };
		int leftIdx{ GetLeftIdx(arr, n, idx) };
		int area{ (n - leftIdx) * arr[idx] };
		if (area > maxArea)
		{
			maxArea = area;
		}
		idxStack.pop();
	}

	return maxArea;
}

/// <summary>
/// 주어진 인덱스 기준 왼쪽으로 같거나 큰 높이를 가진 최초의 인덱스를 찾아 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="idx">기준 인덱스</param>
/// <returns>높이가 같은 최소 인덱스</returns>
int Histogram::GetLeftIdx(int arr[], int n, int idx)
{
	int left{ idx };
	while(left >= 0)
	{
		if (arr[left] < arr[idx])
		{
			break;
		}
		left--;
	}
	return left + 1;
}