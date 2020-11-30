#include "FormativeFunction201.h"

/// <summary>
/// 문제
/// 정수 N을 입력받고 다시 N개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
/// (1 ≤ N ≤ 15, 입력과 출력, 정렬은 모두 함수를 이용할 것)
/// 
/// 입력 예
/// 5
/// 12 35 1 48 9
/// 
/// 출력 예
/// 48 35 12 9 1
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=75&sca=10c0
/// </summary>
void FormativeFunction201::Code()
{
	int n;

	int* arr = Input(n);
	Sort(n, arr);
	Print(n, arr);

	delete[] arr;
}

int* FormativeFunction201::Input(int& n)
{
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	return arr;
}

void FormativeFunction201::Sort(int n, int arr[])
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void FormativeFunction201::Print(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
}