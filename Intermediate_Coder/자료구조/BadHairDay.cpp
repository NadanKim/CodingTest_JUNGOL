#include "BadHairDay.h"

/// <summary>
/// 문제
/// 농부 시현이의 N(1≤N≤80,000)마리의 소들은 "bad hair day"를 맞이하였다. 
/// 
/// 각 소들이 자신들의 촌스런 머리 모양을 부끄러워 하자, 시현이는 소들이 다른 소들의 머리 모양을 얼마나 알 수 있는지를 알고자 했다.
/// i번째 소들은 키가 hi(1≤hi≤1, 000, 000, 000) 이며, 동쪽(오른쪽)을 바라보고 서있다.
/// 
/// 따라서, i번째 소는 자신의 앞(i + 1, i + 2, ...)의 소들의 머리 모양만 볼 수 있으며, 앞에 자신의 키보다 작은 소들만 볼 수 있다.​
/// 
/// 다음 예제를 고려해보자 : ()의 숫자는 키를 나타낸다.
/// 1번 소는 2, 3, 4번소의 머리 모양을 볼 수 있다.
/// 2번 소는 어떤 소의 머리 모양도 볼 수 없다.
/// 3번 소는 4번 소의 머리 모양을 볼 수 있다.
/// 4번 소는 어떤 소의 머리 모양도 볼 수 없다.
/// 5번 소는 6번 소의 머리 모양을 볼 수 있다.
/// 6번 소는 모든 소들의 머리 모양을 볼 수 없다!
/// 
/// i번 소들이 볼 수 있는 머리 모양의 수를 Ci 이라고 할 때, C1부터 CN 까지의 합을 출력하는 프로그램을 작성하라.
/// 
/// 위의 예제의 답은 3 + 0 + 1 + 0 + 1 + 0 = 5가 된다.​
///
/// 입력 형식
/// 입력의 첫 번째 행에는 N 이 입력된다.
/// 그 다음 줄부터 N 개의 숫자가 행을 구분하여 주어지며, 해당 행의 i번째 숫자는 hi를 뜻한다.
/// 
/// 출력 형식
/// C1 부터 CN 까지의 합을 한 줄에 출력한다.
///
/// 입력 예
/// 6
/// 5
/// 2
/// 4
/// 2
/// 6
/// 1
///
/// 출력 예
/// 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=421&sca=3020
/// </summary>
void BadHairDay::Code()
{
	int n;
	std::cin >> n;

	int height;
	CowStack cowStack;
	for (int i = 0; i < n; i++)
	{
		std::cin >> height;
		cowStack.AddData(height);
	}

	std::cout << cowStack.count;
}

/// <summary>
/// 입력된 키를 이용하여 기존 소들이 볼 수 있는 숫자를 파악한다.
/// </summary>
/// <param name="height">새로운 소의 키</param>
void BadHairDay::CowStack::AddData(int height)
{
	while (!heightStack.empty() && heightStack.top() <= height)
	{
		heightStack.pop();
	}
	count += heightStack.size();
	heightStack.push(height);
}