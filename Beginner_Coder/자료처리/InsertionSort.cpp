#include "InsertionSort.h"

/// <summary>
/// 문제
/// 삽입정렬(Insertion sort)은 자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교하여, 
/// 자신의 위치를 찾아 삽입하는 방법이다.
/// 
/// 수열이{ 5 4 3 7 6 }이 있을 경우의 삽입정렬 과정은 다음과 같다.
/// 
/// 처음상태에서 처음 값 5 앞에 아무것도 없으므로 5는 이미 정렬된 상태가 되므로, 이후 4부터 정렬과정을 살펴보자.
/// 
/// ※ 3단계의 경우 7은 앞의 "3 4 5"보다 크므로 제자리에 삽입된다.
/// n개의 수열이 주어지면 위와 같은 방법으로 정렬하는 과정 각 단계를 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫줄에 수열의 길이 N(4≤N≤100)이 주어진다. 두 번째 줄에 N개의 0이상 100이하의 정수가 주어진다.
/// 
/// 출력 형식
/// 처음 상태를 제외하고 정렬과정의 각 단계별 결과를 "출력예"와 같이 출력한다.
///
/// 입력 예
/// 5
/// 5 4 3 7 6
///
/// 출력 예
/// 4 5 3 7 6
/// 3 4 5 7 6
/// 3 4 5 7 6
/// 3 4 5 6 7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=438&sca=2070
/// </summary>
void InsertionSort::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		int minIdx{ i };
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else
			{
				break;
			}
		}

		for (int j = 0; j < n; j++)
		{
			std::cout << arr[j] << ' ';
		}
		std::cout << '\n';
	}

	delete[] arr;
}