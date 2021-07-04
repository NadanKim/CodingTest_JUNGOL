#include "SelectionSort.h"

/// <summary>
/// 문제
/// 선택 정렬(selection sort)이란 내부정렬 알고리즘의 하나로 다음 순서대로 실행하여 정렬을 한다.
/// 
/// 1. 주어진 수열 중에 최소값(같은 값이 여러 개 있는 경우 처음 값)을 찾는다.
/// 2. 찾은 최소값을 맨 앞의 값과 자리를 바꾼다.
/// 3. 맨 앞의 값을 뺀 나머지 수열을 같은 방법으로 전체 개수 - 1번 반복 실행한다.
/// 
/// n개의 주어진 수열을 위와 같은 방법으로 정렬한다.
/// 
/// 수열이 주어지면 선택정렬의 과정을 한 단계씩 출력한다.​
///
/// 입력 형식
/// 첫줄에 수열의 길이 N(4≤N≤100)이 주어진다. 두 번째 줄에 N개의 0이상 100이하의 정수가 주어진다.
/// 
/// 출력 형식
/// 처음 상태를 제외하고 정렬과정의 각 단계별 결과를 "출력형식"과 같이 출력한다.
///
/// 입력 예
/// 5
/// 6 4 8 3 1
///
/// 출력 예
/// 1 4 8 3 6
/// 1 3 8 4 6
/// 1 3 4 8 6
/// 1 3 4 6 8
/// 
/// Hint!
/// 처음상태에서 최솟값을 찾아 맨앞의 수와 자리를 바꾼다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=426&sca=2070
/// </summary>
void SelectionSort::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		int minIdx{ i };
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIdx])
			{
				minIdx = j;
			}
		}

		if (minIdx != i)
		{
			int temp{ arr[minIdx] };
			arr[minIdx] = arr[i];
			arr[i] = temp;
		}

		for (int j = 0; j < n; j++)
		{
			std::cout << arr[j] << ' ';
		}
		std::cout << '\n';
	}

	delete[] arr;
}