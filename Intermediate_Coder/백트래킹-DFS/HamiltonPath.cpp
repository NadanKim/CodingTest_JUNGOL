#include "HamiltonPath.h"

/// <summary>
/// 문제
/// 태현이는 방학기간 동안 택배 알바를 해서 최고급 노트북을 장만하려고 한다.
/// 오늘 배달해야 하는 장소를 한 번씩만 방문해서 물건을 모두 배달하고 다시 회사로 돌아와야 한다.
/// 배달하는 장소에만 도착할 수 있다면 물건은 모두 배달할 수 있으므로 물건의 개수나 크기등은 고려하지 않아도 된다.
/// 
/// 그런데 문제는 방문하는 순서를 어떻게 정할지가 고민이다.
/// 어떤 장소에서 다른 장소로 이동하는 데에는 비용이 발생하는데 만약 방문하는 순서를 잘못 정하게 되면
/// 알바비로 받은 돈을 모두 이동비용으로 사용하고 눈물을 흘릴지도 모른다.
/// 
/// 태현이가 물건을 모두 배달하고 회사로 돌아오기 위한 최소의 비용을 계산하는 프로그램을 작성해 주자.
/// 
/// 입력 형식
/// 첫 줄은 배달해야 하는 장소의 수 N(1≤N≤12)이 주어진다. 이때, 출발지(회사)는 1번이다.
/// 둘째 줄은 N X N 크기의 장소와 장소를 이동하는 비용(0 ≤ 비용＜ 100)이 한 칸씩의 공백으로 구분하여 주어진다.
/// 비용은 양방향이 아니라 단방향으로 가기 위한 비용이다.
/// 
/// 예들 들어 첫 번째 행 두 번째 열에 적힌 비용은 1번 장소에서 2번 장소로 이동하기 위한 비용을 의미하며,
/// 2번 장소에서 1번 장소로 이동하기 위한 비용은 두 번째 행 첫 번째 열에 주어진다.
/// 
/// 장소 사이에 이동할 수 있는 방법이 없다면 비용을 0으로 표시한다.
/// 
/// 출력 형식
/// 회사에서 출발하여 오늘 배달해야 하는 모든 장소를 한 번씩 들러 물건을 배달하고 회사에 돌아오기 위한 최소의 비용을 출력한다.
///
/// 입력 예
/// 5 
/// 0 14 4 10 20
/// 14 0 7 8 7
/// 4 5 0 7 16
/// 11 7 9 0 2
/// 18 7 17 4 0
///
/// 출력 예
/// 30
/// 
/// Hint!
/// 예제의 비용 (경로)
/// 10(1->4)
/// + 2(4->5)
/// + 7(5->2)
/// + 7(2->3)
/// + 4(3->1)
/// = 30
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=954&sca=3030
/// </summary>
void HamiltonPath::Code()
{
	int n;
	std::cin >> n;

	short arr[12][12]{};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	std::cout << GetLeastCost(arr, n);
}

/// <summary>
/// 최소 이동 비용을 반환한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="locIdx">현재 지역 인덱스</param>
/// <param name="cost">누적 비용</param>
/// <param name="depth">깊이</param>
/// <returns>최소 이동 비용</returns>
int HamiltonPath::GetLeastCost(short arr[][12], int n, int locIdx, int cost, int depth)
{
	if (depth == n)
	{
		return cost;
	}

	int minCost{ 99999999 };
	for (int i = 0; i < n; i++)
	{
		// 갈 방법이 없는 경우 패스
		if (arr[locIdx][i] == 0)
		{
			continue;
		}

		short tempArr[12][12];
		for (int i = 0; i < n; i++)
		{
			std::copy_n(arr[i], n, tempArr[i]);
		}

		short curCost{ arr[locIdx][i] };

		BlockPrevLocation(tempArr, n, locIdx);
		BlockNextLocation(tempArr, n, i);

		int totalCost = GetLeastCost(tempArr, n, i, cost + curCost, depth + 1);
		if (totalCost < minCost)
		{
			minCost = totalCost;
		}
	}

	return minCost;
}

/// <summary>
/// 이전 도시의 인덱스를 다른 도시에서 제거
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="locIdx">다음 도시의 인덱스</param>
void HamiltonPath::BlockPrevLocation(short arr[][12], int n, int locIdx)
{
	for (int i = 0; i < n; i++)
	{
		arr[locIdx][i] = 0;
	}
}

/// <summary>
/// 다음 도시의 인덱스를 다른 도시에서 제거
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="locIdx">다음 도시의 인덱스</param>
void HamiltonPath::BlockNextLocation(short arr[][12], int n, int locIdx)
{
	for (int i = 0; i < n; i++)
	{
		arr[i][locIdx] = 0;
	}
}