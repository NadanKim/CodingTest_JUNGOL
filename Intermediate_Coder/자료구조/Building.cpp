#include "Building.h"

/// <summary>
/// 문제
/// N개의 빌딩이 있다. 
/// 빌딩은 1번부터 N번까지 번호가 붙어 있다.
/// 빌딩은 X좌표 상에 위치해 있으며 i번 빌딩은 i좌표 상에 위치해 있다.그리고 각 빌딩은 Hi 만큼의 높이를 가지고 있다.
/// i < j 이고 Hi < Hj 일 경우, i번 빌딩에서 j번 빌딩을 볼 수 있다.
/// 각 빌딩에서 현재 빌딩의 좌표보다 오른쪽에 있는 빌딩을 보고자 할 때, 가장 가까이 보이는 빌딩이 어딘지 찾는 프로그램을 작성하라.
///
/// 입력 형식
/// 입력의 첫 번째 줄에는 N이 입력된다(1≤N≤100,000).
/// 그리고 그 다음 줄부터는 Hi(1≤Hi≤1, 000, 000)가 순서대로 한 줄에 하나씩 입력된다.
/// 
/// 출력 형식
/// 총 N개의 줄에 출력을 하게 되며, i번째 줄에는 i번 빌딩에서 보이는 가장 가까운 빌딩의 번호를 출력한다. 
/// 만약에 보이는 빌딩이 없을 경우에는 0을 출력한다.
///
/// 입력 예
/// 6 
/// 3
/// 2
/// 6
/// 1
/// 1
/// 2
///
/// 출력 예
/// 3
/// 3
/// 0
/// 6
/// 6
/// 0
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=607&sca=3020
/// </summary>
void Building::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n + 1];
	for (int i = 1; i <= n; i++)
	{
		std::cin >> arr[i];
	}

	CalculateVisualBuilding(arr, n);

	for (int i = 1; i <= n; i++)
	{
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}

void Building::CalculateVisualBuilding(int arr[], int n)
{
	stack<int> indexStack;

	for (int i = 1; i <= n; i++)
	{
		while (true)
		{
			if (indexStack.empty())
			{
				indexStack.push(i);
				break;
			}

			int idx{ indexStack.top() };
			if (arr[i] > arr[idx])
			{
				arr[idx] = i;
				indexStack.pop();
			}
			else
			{
				indexStack.push(i);
				break;
			}
		}
	}

	while (!indexStack.empty())
	{
		int idx{ indexStack.top() };
		arr[idx] = 0;
		indexStack.pop();
	}
}