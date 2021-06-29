#include "CollectBalls.h"

/// <summary>
/// 문제
/// 빨간색 볼과 파란색 볼이 <그림 1>에서 보인 것처럼 일직선상에 섞여 놓여 있을때, 
/// 볼을 옮겨서 같은 색 볼끼리 인접하게 놓이도록 하려고 한다.
/// 
/// 볼을 옮기는 규칙은 다음과 같다.
/// 
/// 1. 바로 옆에 다른 색깔의 볼이 있으면 그 볼을 모두 뛰어 넘어 옮길 수 있다.
/// 즉, 빨간색 볼은 옆에 있는 파란색 볼 무더기를 한 번에 뛰어 넘어 옮길 수 있다.
/// 유사하게, 파란색 볼은 옆에 있는 빨간색 볼 무더기를 한 번에 뛰어 넘어 옮길 수 있다.
/// 2. 옮길 수 있는 볼의 색깔은 한 가지이다.
/// 즉, 빨간색 볼을 처음에 옮겼으면 다음에도 빨간색 볼만 옮길 수 있다.
/// 유사하게, 파란색 볼을 처음에 옮겼으면 다음에도 파란색 볼만 옮길 수 있다.
/// 
/// 예를 들어, 처음에 볼이 <그림 1>에서 보인 것처럼 있을 때, 빨간 볼을 <그림 2>에서 보인 것처럼 옮긴 후,
/// <그림 3>에서 보인 것처럼 옮긴다면 두 번 만에 같은색끼리 모을 수 있다.​
/// 
/// 반면에 파란색 볼을 선택하여 <그림 4>에서 보인 것처럼 옮기면
/// (화살표에 있는 수는 옮기는 순서를 나타낸다) 네 번을 옮겨야 같은 색의 볼끼리 모을 수 있다.​
/// 
/// 일직선상에 놓여 있는 볼에 관한 정보가 주어질 때, 규칙에 따라 볼을 이동하여
/// 같은 색끼리 모으되 최소 이동횟수를 찾는 프로그램을 작성하시오.​
/// 
/// 입력 형식
/// 표준 입력으로 다음 정보가 주어진다.
/// 첫 번째 줄에는 볼의 총 개수 N이 주어진다.(1 ≤ N ≤ 500, 000)
/// 다음 줄에는 볼의 색깔을 나타내는 문자 R(빨간색 볼) 또는 B(파란색 볼)가 공백 없이 주어진다.
/// 문자열에는 R 또는 B 중 한 종류만 주어질 수도 있으며, 이 경우 답은 0이 된다.
/// 
/// 출력 형식
/// 표준 출력으로 최소 이동횟수를 출력한다.
/// 
/// [부분문제의 제약 조건]
/// * 부분문제 1: 전체 점수 100점 중 15점에 해당하며 N ≤ 10.
/// * 부분문제 2 : 전체 점수 100점 중 22점에 해당하며 N ≤ 1, 000.
/// * 부분문제 3 : 전체 점수 100점 중 14점에 해당하며 N ≤ 500, 000 이고, 처음 상태에서 모든 파란 공은 연속해서 존재한다.
/// * 부분문제 4 : 전체 점수 100점 중 49점에 해당하며 원래의 제약조건 이외에 아무 제약조건이 없다.
///
/// 입력 예		/// 입력 예
/// 9			/// 8
/// RBBBRBRRR	/// BBRBBBBR
///
/// 출력 예		/// 출력 예
/// 2			/// 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2749&sca=2060
/// </summary>
void CollectBalls::Code()
{
	int n;

	std::cin >> n;

	vector<char> originList, workingList;
	originList.reserve(n);
	workingList.reserve(n);

	char ch;
	for (int i = 0; i < n; i++)
	{
		std::cin >> ch;
		originList.emplace_back(ch);
		workingList.emplace_back(ch);
	}
	
	char targetArr[2]{ 'R', 'B' };
	int minCount{ INT_MAX };

	for (int i = 0; i < 2; i++)
	{
		for (int j = -1; j <= 1; j += 2)
		{
			int curCount{ CountToCollect(workingList, n, targetArr[i], j) };
			if (curCount < minCount)
			{
				minCount = curCount;
			}

			Copy(originList, workingList, n);
		}
	}

	std::cout << minCount;

	originList.clear();
}

int CollectBalls::CountToCollect(vector<char>& workingList, int n,
	char target, int direction)
{
	int countToCollect{ 0 };

	int addVal{ direction < 0 ? 1 : -1 };
	int startIdx{ direction < 0 ? 0 : n - 1 };
	int idx{ startIdx };
	while (0 <= idx && idx < n)
	{
		// 시작 인덱스는 어차피 끝에 붙어 있으므로 무시
		// 이동 방향 바로 오른쪽에 다른 색이 붙어있는 것 찾기
		if (workingList[idx] == target && idx != startIdx &&
			workingList[idx + direction] != target)
		{
			// 다른 색 건너 뛰기
			int targetIdx{ idx + direction };
			while (0 < targetIdx && targetIdx < n - 1)
			{
				int tempIdx{ targetIdx + direction };
				if (tempIdx == 0 || tempIdx == n - 1)
				{
					break;
				}
				if (workingList[tempIdx] == target)
				{
					break;
				}
				targetIdx = tempIdx;
			}

			std::swap(workingList[idx], workingList[targetIdx]);
			countToCollect++;
		}
		idx += addVal;
	}

	return countToCollect;
}

void CollectBalls::Copy(const vector<char>& srcList, vector<char>& dstList, int n)
{
	for (int i = 0; i < n; i++)
	{
		dstList[i] = srcList[i];
	}
}