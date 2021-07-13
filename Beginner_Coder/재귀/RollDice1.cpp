#include "RollDice1.h"

/// <summary>
/// 문제
/// 주사위를 던진 횟수 N과 출력형식 M을 입력 받아서 M의 값에 따라 각각 아래와 같이 출력하는 프로그램을 작성하시오.
/// 
/// M = 1 : 주사위를 N번 던져서 나올 수 있는 모든 경우
/// M = 2 : 주사위를 N번 던져서 중복이 되는 경우를 제외하고 나올 수 있는 모든 경우
/// M = 3 : 주사위를 N번 던져서 모두 다른 수가 나올 수 있는 모든 경우
/// 
/// * 중복의 예
/// 1 1 2 와 중복 : 1 2 1, 2 1 1
/// 1 2 3 과 중복 : 1 3 2, 2 1 3, 2 3 1, 3 1 2​
///
/// 입력 형식
/// 첫 줄에 주사위를 던진 횟수 N(2≤N≤5)과 출력모양 M(1≤M≤3)이 들어온다.
/// 
/// 출력 형식
/// 주사위를 던진 횟수 N에 대한 출력모양을 출력한다. 작은 숫자부터 출력한다.
///
/// 입력 예	/// 입력 예	/// 입력 예
/// 3 1		/// 3 2		/// 3 3
///
/// 출력 예	/// 출력 예	/// 출력 예
/// 1 1 1	/// 1 1 1	/// 1 2 3
/// 1 1 2	/// 1 1 2	/// 1 2 4
/// 1 1 3	/// ...		/// 1 2 5
/// 1 1 4	/// 1 1 6	/// 1 2 6
/// 1 1 5	/// 1 2 2	/// 1 3 2
/// 1 1 6	/// ...		/// 1 3 4
/// 1 2 1	/// 5 6 6	/// ...
/// …		/// 6 6 6	/// 6 5 3
/// 6 6 6	///			/// 6 5 4
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=449&sca=2080
/// </summary>
void RollDice1::Code()
{
	int n, m;

	std::cin >> n >> m;

	int* arr = new int[n];

	switch (m)
	{
	case 1:
		RollMode1(arr, n);
		break;
	case 2:
		RollMode2(arr, n);
		break;
	case 3:
		RollMode3(arr, n);
		break;
	}

	delete[] arr;
}

void RollDice1::RollMode1(int arr[], int n, int depth)
{
	if (depth == n)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = 1; i <= 6; i++)
	{
		arr[depth] = i;
		RollMode1(arr, n, depth + 1);
	}
}

void RollDice1::RollMode2(int arr[], int n, int depth)
{
	if (depth == n)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = (depth > 0 ? arr[depth - 1] : 1); i <= 6; i++)
	{
		arr[depth] = i;
		RollMode2(arr, n, depth + 1);
	}
}

void RollDice1::RollMode3(int arr[], int n, int depth)
{
	if (depth == n)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = 1; i <= 6; i++)
	{
		bool isDuplicated{ false };
		for (int j = 0; j < depth; j++)
		{
			if (arr[j] == i)
			{
				isDuplicated = true;
				break;
			}
		}

		if (!isDuplicated)
		{
			arr[depth] = i;
			RollMode3(arr, n, depth + 1);
		}
	}
}