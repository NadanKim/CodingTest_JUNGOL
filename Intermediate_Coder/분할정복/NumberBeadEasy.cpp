#include "NumberBeadEasy.h"

/// <summary>
/// 문제
/// N개의 숫자 구슬이 <그림 1>과 같이 막대에 꿰어져 일자로 놓여 있다. 
/// 이들 구슬은 막대에서 빼낼수 없고 따라서 바꿀 수 없다.
/// 
/// | 5 - 4 - 2 - 6 - 9 - 3 - 8 - 7 |
/// < 그림 1 >
/// 
/// 이 숫자 구슬을 M개의 그룹으로 나누었을 때 각각의 그룹의 합 중 최대값이 최소가 되도록 하려 한다.
/// 예를 들어 세 그룹으로 나눈다고 할 때 <그림 2>와 같이 그룹을 나누면
/// 그룹의 합은 각각 11, 15, 18이 되어 그 중 최대값은 18이 되고,
/// <그림 3>과 같이 나누면 각 그룹의 합은 각각 17, 12, 15가 되어 그 중 최대값은 17이 된다.
/// 숫자 구슬의 배열이 위와 같을 때는 그룹의 합 중 최대값이 17보다 작게 만들 수는 없다.
/// 
/// | 5 - 4 - 2 - - 6 - 9 - - 3 - 8 - 7 |
/// < 그림 2 >
/// 
/// | 5 - 4 - 2 - 6 - - 9 - 3 - - 8 - 7 |
/// < 그림 3 >
/// 
/// 각 그룹의 합 중 최대값이 최소가 되도록 M개의 그룹으로 나누었을 때,
/// 그 최대값을 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫째 줄에 구슬의 개수 N과 그룹의 수 M이 주어진다.
/// 둘째 줄에는 각 구슬이 적혀진 숫자가 왼쪽부터 차례로 주어진다.
/// N은 300 이하의 자연수, M은 N이하의 자연수이며, 구슬에 적혀진 숫자는 100 이하의 자연수이다.
/// 
/// 출력 형식
/// 각 그룹의 합 중 최대값이 최소가 되도록 M개의 그룹으로 나누었을 때 그 최대값을 첫째 줄에 출력한다.
/// 
/// *** M개의 각 그룹에 적어도 하나의 구슬이 포함되어야 함에 유의한다.***
///
/// 입력 예
/// 8 3
/// 5 4 2 6 9 3 8 7
///
/// 출력 예
/// 17
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=4300&sca=30
/// </summary>
void NumberBeadEasy::Code()
{
	int n, m;

	std::cin >> n >> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << FindMinTotal(arr, n, m, GetMaxNum(arr, n), GetTotal(arr, n));

	delete[] arr;
}

/// <summary>
/// 주어진 배열의 값을 m개로 나눴을 때 각 그룹의 최댓값을 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="m">분할 개수</param>
/// <param name="beg">나올 수 있는 합의 최솟값</param>
/// <param name="end">나올 수 있는 합의 최댓값</param>
/// <returns></returns>
int NumberBeadEasy::FindMinTotal(int arr[], int n, int m, int beg, int end)
{
	if (beg > end)
	{
		return beg;
	}

	int mid{ (beg + end) / 2 };
	int groupCount{ GetGroupCount(arr, n, mid) };

	if (groupCount <= m)
	{
		return FindMinTotal(arr, n, m, beg, mid - 1);
	}
	else
	{
		return FindMinTotal(arr, n, m, mid + 1, end);
	}
}

/// <summary>
/// 각 그룹의 합이 max를 넘지 않도록 할 때의 그룹의 개수를 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="max">각 그룹의 합의 최댓값</param>
/// <returns>그룹의 개수</returns>
int NumberBeadEasy::GetGroupCount(int arr[], int n, int max)
{
	int groupCount{ 1 };
	int curTotal{ 0 };
	for (int i = 0; i < n; i++)
	{
		curTotal += arr[i];
		if (curTotal > max)
		{
			curTotal = arr[i];
			groupCount++;
		}
	}
	return groupCount;
}

/// <summary>
/// 주어진 배열의 최댓값을 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <returns>배열의 최댓값</returns>
int NumberBeadEasy::GetMaxNum(int arr[], int n)
{
	int maxNum{ arr[0] };

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxNum)
		{
			maxNum = arr[i];
		}
	}

	return maxNum;
}

/// <summary>
/// 주어진 배열의 모든 원소의 합을 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <returns>배열의 원소의 합</returns>
int NumberBeadEasy::GetTotal(int arr[], int n)
{
	int total{ 0 };

	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;
}