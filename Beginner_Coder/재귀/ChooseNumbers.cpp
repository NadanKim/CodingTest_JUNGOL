#include "ChooseNumbers.h"

/// <summary>
/// 문제
/// 1부터 어떤 양의 정수 n까지의 정수를 모두 곱한 것을 말하며 n!로 나타낸다.
/// 
/// 0!= 1
/// 1!= 1
/// 2!= 2
/// n!= n * (n - 1)!
/// ：
/// 와 같이 정의된다.
/// 
/// 예로 4!= 4×3×2×1 = 24 이다.
/// 
/// n!이 주어졌을 때 결과를 출력하는 프로그램을 작성하라.
/// 
/// * 결과가 int범위를 넘는 경우
/// 자료형 long long
/// 입력 / 출력 서식문자 % lld
/// 를 사용한다.
///
/// 입력 형식
/// 입력은 한 줄로 이뤄지며 팩토리얼의 숫자 n(1≤n≤15)이 입력된다.
/// 
/// 출력 형식
/// n!에 대한 계산 결과를 "출력예"처럼 과정을 출력하고 마지막에 결과를 출력한다.
///
/// 입력 예
/// 4
///
/// 출력 예
/// 4! = 4 * 3!
/// 3! = 3 * 2!
/// 2! = 2 * 1!
/// 1! = 1
/// 24
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=589&sca=2080
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