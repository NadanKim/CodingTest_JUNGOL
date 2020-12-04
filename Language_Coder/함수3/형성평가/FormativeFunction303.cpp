#include "FormativeFunction303.h"

/// <summary>
/// 문제
/// 자연수 N과 M을 입력받아서 주사위를 N번 던져서 나온 눈의 합이 M이 나올 수 있는 모든 경우를 출력하는 프로그램을 작성하시오.
/// 단, N은 10 이하의 정수이다.
/// 
/// 입력 예
/// 3 10
/// 
/// 출력 예
/// 1 3 6
/// 1 4 5
/// 1 5 4
/// 1 6 3
/// 2 2 6
/// 2 3 5
/// …
/// 6 2 2
/// 6 3 1
/// 
/// Hint!
/// 재귀함수에 레벨(level)과 합계(sum) 두 개의 인수를 전달하여 sum이 M과 같은 경우에만 출력하도록 한다.
/// (정의 : void dice(int level int sum) 호출 : dice(level+1 sum+i))
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=133&sca=10d0
/// </summary>
void FormativeFunction303::Code()
{
	int arr[10];
	int n, m;

	std::cin >> n >> m;

	std::fill_n(arr, n, 1);

	Function(arr, 0, 0, n, m);
}

void FormativeFunction303::Function(int arr[], int curIdx, int sum, int n, int m)
{
	if (curIdx == n)
	{
		if (sum == m)
		{
			for (int i = 0; i < n; i++)
			{
				std::cout << arr[i] << ' ';
			}
			std::cout << '\n';
		}
		return;
	}

	for (int i = 1; i <= 6; i++)
	{
		arr[curIdx] = i;
		Function(arr, curIdx + 1, sum + i, n, m);
	}
}