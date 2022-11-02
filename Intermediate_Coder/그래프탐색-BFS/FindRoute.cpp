#include "FindRoute.h"

/// <summary>
/// 문제
/// 승길이가 같은 두 개의 이진수 코드 A와 B가 있다고 하자. 
/// 이 두 코드 사이의 해밍 거리는 A와 B의 각 비트를 왼쪽부터 오른쪽으로 차례대로 비교할 때 서로 다른 값을 가진 비트의 수이다. 
/// 예를 들어, A=010010, B=011011 이라고 하면, 세 번째 비트와 여섯 번째 비트만 서로 다르므로 이 두 코드 사이의 해밍 거리는 2이다.
/// 
/// 우리는 총 N개의 이진 코드를 가지고 있고, 각 코드의 길이는 K로 같다. 
/// 예를 들어, 다음과 같이 길이가 3인 5개의 이진 코드들이 있다. 
///  
/// A=000, B=111, C=010, D=110, E=001 
///  
/// 두 코드 와 사이의 해밍 거리를 H(A,B)로 표현한다. 그러면, H(A,B)=3, H(A,C)=1, H(A,D)=2, H(A,E)=1 이다. 
///  
/// 우리는 이진 코드들에 대해 해밍 경로를 찾고자 한다. 해밍 경로는 모든 인접한 두 코드사이의 해밍 거리가 1인 경로이다. 
/// 위의 예에서 (A,C,D)는 코드 A와 C의 해밍 거리가 1이고, 코드 C와 D의 해밍 거리가 1이므로 해밍 경로이다. 
/// (A,E,B)는 코드 A와 E의 해밍 거리는 1이지만, 코드 E와 B의 해밍 거리가 2이므로 해밍 경로가 아니다. 
///  
/// 이 문제는 주어진 두 코드 사이에 가장 짧은 해밍 경로를 구하는 프로그램을 작성하는 것이다.
///
/// 입력 형식
/// 첫째 줄에는 두 개의 정수 N과 K가 빈칸을 사이에 두고 주어진다(3≤N≤1,000, 2≤K≤30).
/// 둘째 줄부터 N개의 줄에는 각 줄마다 길이가 K인 이진 코드가 하나씩 주어진다. 
/// 하나의 코드는 빈칸이 없이 주어진다. 코드들은 주어진 순서대로 1부터 N까지의 번호로 구분된다. 
/// 코드가 같은 경우는 없다. 
/// 그 다음 줄에는 해밍 경로를 찾고자 하는 서로 다른 두 개의 코드 A와 B가 각각의 코드번호로 주어진다.
/// 
/// 출력 형식
/// 입력으로 주어진 두 코드 사이에 해밍 경로가 존재하면 
/// 그 경로 중 가장 짧은 경로를 코드 A부터 코드 B까지 경로상의 코드 번호로 출력한다.
/// 코드 번호를 출력할 경우에는 코드 번호 사이에 하나의 빈칸을 사이에 두고 출력한다. 
/// 만약 답이 여러 개 있으면 그 중에 하나만 출력하고, 경로가 존재하지 않으면 -1을 출력한다.
///
/// 입력 예
/// 5 3
/// 000
/// 111
/// 010
/// 110
/// 001
/// 1 2
///
/// 출력 예
/// 1 3 4 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1522&sca=3040
/// </summary>
void FindRoute::Code()
{
	std::cin >> n >> k;

	allData.reserve(n);
	for (int i = 0, data; i < n; i++)
	{
		std::cin >> data;
		allData.emplace_back(data);
	}

	std::cin >> a >> b;

	// a, b를 인덱스로 바꿔준다.
	a--; b--;

	if (FindHamingRoute())
	{
		for (int index : result.route)
		{
			std::cout << index + 1 << ' ';
		}
	}
	else
	{
		std::cout << -1;
	}
}

/// <summary>
/// a 번째에서 b로의 경로를 찾는다.
/// </summary>
/// <returns>경로 존재 여부</returns>
bool FindRoute::FindHamingRoute()
{
	q.push(Route(a));

	while (q.empty() == false)
	{
		Route curRoute = q.front();
		q.pop();

		for (int i = 0; i < n; i++)
		{
			if (curRoute.IsInRoute(i))
			{
				continue;
			}
			
			if(IsHamingDistance(curRoute.index, i))
			{
				Route newRoute(i, curRoute);

				if (i == b)
				{
					result = newRoute;
					return true;
				}

				q.push(newRoute);
			}
		}
	}

	return false;
}

/// <summary>
/// 두 코드간의 해밍 여부를 반환한다.
/// </summary>
/// <param name="index1">코드 1의 인덱스</param>
/// <param name="index2">코드 2의 인덱스</param>
/// <returns>해밍 경로인지 여부</returns>
bool FindRoute::IsHamingDistance(int index1, int index2)
{
	int hamingDistance = 0;

	int data1 = allData[index1];
	int data2 = allData[index2];
	for (int i = 0; i < k; i++)
	{
		int val1 = data1 % 10;
		int val2 = data2 % 10;

		hamingDistance += val1 != val2 ? 1 : 0;

		if (hamingDistance > 1)
		{
			break;
		}

		data1 /= 10;
		data2 /= 10;
	}

	return hamingDistance == 1;
}
