#include "BasicFunction305.h"

/// <summary>
/// 문제
/// 10 이하의 자연수 N을 입력받아 주사위를 N번 던져서 나올 수 있는 모든 경우를 출력하되 중복되는 경우에는
/// 앞에서부터 작은 순으로 1개만 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
/// 1 1 1
/// 1 1 2
/// ...
/// 1 1 6
/// 1 2 2
/// 1 2 3
/// ...
/// 5 6 6
/// 6 6 6
/// 
/// Hint!
/// "1 1 2", "1 2 1", "2 1 1"은 모두 1이 두 번 2가 한 번 나온 경우이므로 중복이다.
/// 이러한 경우 앞에서부터 작은순으로"1 1 2"한 가지만 출력해야 한다.
/// 현재의 레벨(arr[i])에 담을 값을 1부터가 아니라 이전 레벨에 담겨있는 값(arr[level - 1])부터로 정하면 된다.
/// 이 경우 level[0]에는 어떤 값을 넣어야 할지 잘 생각해 보자.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=227&sca=10d0
/// </summary>
void BasicFunction305::Code()
{
	int n;
	int arr[10]{};

	std::cin >> n;

	std::fill_n(arr, 10, 1);

	Function(arr, 0, n);
}

void BasicFunction305::Function(int arr[], int curIdx, int n)
{
	if (curIdx == n)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	int beg{ curIdx > 0 ? arr[curIdx - 1] : 1 };
	for (int i = beg; i <= 6; i++)
	{
		arr[curIdx] = i;

		Function(arr, curIdx + 1, n);
	}
}