#include "FindMaximumSubarray.h"

/// <summary>
/// 문제
/// N개의 정수를 담고 있는 배열이 주어졌을 때, 
/// 여기서 가능한 연속 부분합의 최댓값을 구하는 프로그램을 작성하라.
/// 
/// 여기서 연속 부분합이라는 것은 배열에서 연속된 숫자들을 선택해서 합하였을 때의 값을 말한다.
/// 아무 배열도 택하지 않는 경우도 연속 부분합에 포함됨을 유의하자.
///
/// 입력 형식
/// 입력의 첫 번째 줄에는 정수 N(1≤N≤105)가 입력된다.
/// 그리고 그 다음 줄에는 N개의 배열에 담긴 숫자가 순서대로 입력된다.
/// 숫자의 범위는 - 100이상 100이하의 정수다.
/// 
/// 출력 형식
/// 입력에 대한 가장 큰 연속 부분합을 출력한다.
///
/// 입력 예		/// 입력 예
/// 4			/// 10
/// 1 2 -2 4	/// 3 -4 0 1 7 -4 13 -9 8 -3
///
/// 출력 예		/// 출력 예
/// 5			/// 17
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1109&sca=2060
/// </summary>
void FindMaximumSubarray::Code()
{
	int n;

	std::cin >> n;

	int maxSum{ 0 }, tempMaxSum{ 0 }, num;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> num;
		tempMaxSum += num;
		if (tempMaxSum < 0)
		{
			tempMaxSum = 0;
		}
		else if (tempMaxSum > maxSum)
		{
			maxSum = tempMaxSum;
		}
	}

	std::cout << maxSum;
}