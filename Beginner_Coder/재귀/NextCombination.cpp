#include "NextCombination.h"

/// <summary>
/// 문제
/// 1부터 N까지의 N개의 정수 중에서 K개를 뽑아낼 때 가능한 경우들을 조합이라고 한다.
/// 
/// 예를 들어 N = 5고 K = 3일 경우 가능한 모든 조합은 다음과 같다
/// 
/// 1 2 3
/// 1 2 4
/// 1 2 5
/// 1 3 4
/// 1 3 5
/// 1 4 5
/// 2 3 4
/// 2 3 5
/// 2 4 5
/// 3 4 5
/// 
/// [1 2 3] 과[3 1 2] 와 같이 순서는 다르나 뽑힌수가 같은 경우는 한가지로 간주한다.
/// 다시 말해서 뽑힌 순서는 고려하지 않는다는 것이다.
/// 
/// N과 K가 입력되고 N과 K에서 가능한 조합 중 하나가 입력될 경우,
/// 
/// 조합들을 오름차순으로 정렬 했을 때 다음으로 나오는 조합을 출력하는 프로그램을 작성하라.
///
/// 입력 형식
/// 입력의 첫번째 줄에는 N과 K가 입력된다(5≤N≤10,1≤K≤N).
/// 그리고 그 다음 줄에는 K개의 숫자가 입력되는데 이는 조합을 의미한다.
/// 
/// 출력 형식
/// 입력된 조합의 다음 조합을 주어진 양식에 맞게 출력한다.
/// 만약 가능한 다음 조합이 없을 경우 'NONE'을 출력한다.
///
/// 입력 예		/// 입력 예
/// 5 3			/// 5 3
/// 1 4 5		/// 3 4 5
///
/// 출력 예		/// 출력 예
/// 2 3 4		/// NONE
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=762&sca=2080
/// </summary>
void NextCombination::Code()
{
	int n, k;

	std::cin >> n >> k;

	int* arr = new int[k];
	int* numbers = new int[k];

	for (int i = 0; i < k; i++)
	{
		std::cin >> numbers[i];
	}

	bool result{ false };
	if (!GetNextCombination(arr, numbers, n, k, result))
	{
		std::cout << "NONE";
	}

	delete[] arr, numbers;
}

bool NextCombination::GetNextCombination(int arr[], int numbers[], int n, int k,
	bool& found, int depth)
{
	if (depth == k)
	{
		if (!found)
		{
			bool isAllSame = true;
			for (int i = 0; i < k; i++)
			{
				if (arr[i] != numbers[i])
				{
					isAllSame = false;
					break;
				}
			}

			if (isAllSame)
			{
				found = true;
			}

			return false;
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				std::cout << arr[i] << ' ';
			}
			std::cout << '\n';

			return true;
		}
	}

	bool result{ false };
	for (int i = 1; i <= n; i++)
	{
		if (depth == 0 || arr[depth - 1] < i)
		{
			arr[depth] = i;
			result = GetNextCombination(arr, numbers, n, k, found, depth + 1);

			if (result)
			{
				break;
			}
		}
	}

	return result;
}