#include "BasicFunction201.h"

/// <summary>
/// 문제
/// 10 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
/// (배열을 전달하는 함수를 이용한다.)
///
/// 입력 예
/// 4
/// 10 9 2 15
/// 
/// 출력 예
/// 15 10 9 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=216&sca=10c0
/// </summary>
void BasicFunction201::Code()
{
	int n;
	int arr[10]{};
	
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	Function(n, arr);
}

void BasicFunction201::Function(int n, int arr[])
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

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
