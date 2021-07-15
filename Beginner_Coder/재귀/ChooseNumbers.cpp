#include "ChooseNumbers.h"

/// <summary>
/// 문제
/// 세로 두 줄, 가로로 N개의 칸으로 이루어진 표가 있다. 
/// 첫째 줄의 각 칸에는 정수 1, 2, …, N이 차례대로 들어 있고 둘째 줄의 각 칸에는 1이상 N이하인 정수가 들어 있다.
/// 첫째 줄에서 숫자를 적절히 뽑으면, 그 뽑힌 정수들이 이루는 집합과,
/// 뽑힌 정수들의 바로 밑의 둘째 줄에 들어있는 정수들이 이루는 집합이 일치한다.
/// 이러한 조건을 만족시키도록 정수들을 뽑되, 최대로 많이 뽑는 방법을 찾는 프로그램을 작성하시오.
/// 
/// 예를 들어, N = 7인 경우 아래와 같이 표가 주어졌다고 하자.
/// 
/// 1 2 3 4 5 6 7
/// 3 1 1 5 5 4 6
/// 
/// 이 경우에는 첫째 줄에서 1, 3, 5를 뽑는 것이 답이다.
/// 첫째 줄의 1, 3, 5밑에는 각각 3, 1, 5가 있으며 두 집합은 일치한다.
/// 이 때 집합의 크기는 3이다.만약 첫째 줄에서 1과 3을 뽑으면, 이들 바로 밑에는 정수 3과 1이 있으므로 두 집합이 일치한다.
/// 그러나, 이 경우에 뽑힌 정수의 개수는 최대가 아니므로 답이 될수 없다.
///
/// 입력 형식
/// 입력의 첫째 줄에는 N(1≤N≤100)을 나타내는 정수 하나가 주어진다. 
/// 그 다음 줄부터는 표의 둘째 줄에 들어가는 정수들이 순서대로 한 줄에 하나씩 입력된다.
/// 
/// 출력 형식
/// 첫째 줄에 뽑힌 정수들의 개수를 출력하고 그 다음 줄부터는 뽑힌 정수들을 작은 수부터 큰 수의 순서로 한 줄에 하나씩 출력한다.
///
/// 입력 예
/// 7
/// 3
/// 1
/// 1
/// 5
/// 5
/// 4
/// 6
///
/// 출력 예
/// 3
/// 1
/// 3
/// 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=731&sca=2080
/// </summary>
void ChooseNumbers::Code()
{
	int n;

	std::cin >> n;
	
	int* arr = new int[n + 1];

	for (int i = 1; i <= n; i++)
	{
		std::cin >> arr[i];
	}

	int resultCount{ 0 };
	int* resultArr = new int[n];
	for (int i = 1; i <= n; i++)
	{
		if (IsLinkedNumber(arr, n, i, i))
		{
			resultArr[resultCount++] = i;
		}
	}

	std::cout << resultCount << '\n';
	for (int i = 0; i < resultCount; i++)
	{
		std::cout << resultArr[i] << '\n';
	}

	delete[] arr;
	delete[] resultArr;
}

bool ChooseNumbers::IsLinkedNumber(int arr[], int n, int curIdx, int number, int depth)
{
	if (depth == n)
	{
		return false;
	}

	if (arr[curIdx] == number)
	{
		return true;
	}

	return IsLinkedNumber(arr, n, arr[curIdx], number, depth + 1);
}