#include "GoodSequence.h"

/// <summary>
/// 문제
/// 숫자 1 2 3으로만 이루어지는 수열이 있다. 
/// 
/// 임의의 길이의 인접한 두 개의 부분 수열이 동일한 것이 있으면,
/// 그 수열을 나쁜 수열이라고 부른다.그렇지 않은 수열은 좋은 수열이다.
/// 
/// 다음은 나쁜 수열의 예이다. (밑줄 부분때문에 나쁜 수열이다.)
/// 33
/// 32121323
/// 123123213
/// 
/// 다음은 좋은 수열의 예이다.
/// 2
/// 32
/// 32123
/// 1232123
/// 
/// 길이가 N인 좋은 수열들을 N자리의 정수로 보아 그 중 가장 작은 수를 나타내는 수열을 구하는 프로그램을 작성하라.
/// 예를 들면 1213121과 2123212는 모두 좋은 수열이지만 그 중에서 작은 수를 나타내는 수열 1213121이다.​
///
/// 입력 형식
/// 입력파일은 숫자 N 하나로 이루어진다.
/// N은 1 이상 80 이하이다.
/// 
/// 출력 형식
/// 첫 번째 줄에 1, 2, 3으로만 이루어져 있는 길이가 N인 좋은 수열들 중에서 
/// 가장 작은 수를 나타내는 수열만 출력한다.
/// 수열을 이루는 1, 2, 3들 사이에는 빈칸을 두지 않는다.
///
/// 입력 예
/// 7
///
/// 출력 예
/// 1213121
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=306&sca=3030
/// </summary>
void GoodSequence::Code()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];
	
	FindGoodSequence(arr, n);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i];
	}

	delete[] arr;
}

/// <summary>
/// 좋은 수열을 찾아 반환한다.
/// </summary>
/// <param name="arr">배열(결과 수열)</param>
/// <param name="n">배열의 길이</param>
/// <param name="depth">깊이</param>
/// <returns>수열을 찾았는지 여부</returns>
bool GoodSequence::FindGoodSequence(int arr[], int n, int depth)
{
	if (depth == n)
	{
		return true;
	}

	for (int i = 1; i <= 3; i++)
	{
		arr[depth] = i;
		if (IsGoodPatern(arr, depth))
		{
			bool foundSequence{ FindGoodSequence(arr, n, depth + 1) };
			if (foundSequence)
			{
				return true;
			}
		}
	}

	return false;
}

/// <summary>
/// 현재 입력으로 패턴이 중복되는지 확인
/// </summary>
/// <param name="arr">배열</param>
/// <param name="idx">입력한 인덱스</param>
/// <returns>패턴이 중복이 없는지 여부</returns>
bool GoodSequence::IsGoodPatern(int arr[], int idx)
{
	// 첫 입력은 항상 참
	if (idx == 0) return true;
	// 직전 입력과 동일한 것 허용 X
	if (arr[idx - 1] == arr[idx]) return false;

	for (int i = idx - 1; i >= 0; i--)
	{
		// 패턴을 찾기 위해 입력된 값과 같은 값 위치 찾기
		if (arr[i] == arr[idx])
		{
			int leftIdx{ i }, rightIdx{ idx };
			int paternLength{ rightIdx - leftIdx };

			// 같은 값 위치에 패턴 길이 만큼이 안 나오면 참
			if (leftIdx + 1 < paternLength)
			{
				break;
			}

			// 패턴이 다르면 넘기기
			while (--paternLength > 0)
			{
				if (arr[--leftIdx] != arr[--rightIdx])
				{
					break;
				}
			}
			
			// 모든 패턴이 일치한 경우 X
			if (paternLength <= 0)
			{
				return false;
			}
		}
	}

	return true;
}