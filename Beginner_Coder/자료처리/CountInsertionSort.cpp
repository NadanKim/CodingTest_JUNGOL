#include "CountInsertionSort.h"

/// <summary>
/// 문제
/// 임의의 서로 같지 않은 수로 이루어진 수열 A를 삽입정렬을 하고자 한다.
/// 만약 배열 A에 20, 40, 30, 10 이 들어갈 경우 다음과 같이 삽입정렬이 이루어진다.
/// 
/// i = 1 일 때 20, 40, 30, 10 이동수 : 0
/// i = 2 일 때 20, 40, 30, 10 이동수 : 0
/// i = 3 일 때 20, 30, 40, 10 이동수 : 1 (40이 움직이고 30이 들어감)
/// i = 4 일 때 10, 20, 30, 40 이동수 : 3 (20, 30, 40 이 움직이고 10이 들어감)
/// 
/// 총 4번의 밀어내기를 통하여 삽입정렬이 완료된다.
/// 임의의 수열 A가 주어질 경우, 수열의 숫자가 얼마나 이동하는지 출력하는 프로그램을 작성하시오.
///
/// 입력 형식
/// 처음 줄에는 수열의 개수 N(1≤N≤50)이 입력된다. 다음 줄에는 N개의 -1000 이상 1000 이하의 정수가 입력된다.
/// 이 수들은 서로 다르다고 가정한다.
/// 
/// 출력 형식
/// 입력된 수열에 대한 전체 이동 횟수를 출력하시오.
///
/// 입력 예		/// 출력 예
/// 4			/// 3
/// 20 40 30 10	/// -1 1 0
///
/// 출력 예		/// 출력 예
/// 4			/// 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1087&sca=2070
/// </summary>
void CountInsertionSort::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int count{ 0 };

	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				count++;
			}
			else
			{
				break;
			}
		}
	}

	std::cout << count;

	delete[] arr;
}