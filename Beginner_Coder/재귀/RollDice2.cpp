#include "RollDice2.h"

/// <summary>
/// 문제
/// 자연수 N과 M을 입력 받아서 주사위를 N번 던져서 나온 눈의 합이 M이 나올 수 있는 모든 경우를 출력하는
/// 프로그램을 작성하시오.
///
/// 입력 형식
/// 첫 줄에 주사위를 던진 횟수 N(2≤N≤7)과 눈의 합 M(1≤M≤40)이 들어온다.
/// 
/// 출력 형식
/// 주사위를 던진 횟수의 합이 M이 되는 경우를 모두 출력한다.
/// 작은 숫자 부터 출력한다.
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
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=458&sca=2080
/// </summary>
void RollDice2::Code()
{
	int n, m;

	std::cin >> n >> m;

	int* arr = new int[n];

	AllNumbersSameTotal(arr, n, m);

	delete[] arr;
}

void RollDice2::AllNumbersSameTotal(int arr[], int n, int m, int depth, int total)
{
	if (depth == n)
	{
		if (total == m)
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
		arr[depth] = i;
		AllNumbersSameTotal(arr, n, m, depth + 1, total + i);
	}
}