#include "TravelWithPrimeNumber.h"

/// <summary>
/// 문제
/// 뉴욕으로 날아간 원더걸스를 찾기 위해서 태현이도 뉴욕에 가게 되었다.
/// 뉴욕에 도착하여 입국  마친 태현이는 막상 도착하고 보니 아무것도 할 수 없었다.
/// 다행스럽게 공항에 있는 사람들에게 손짓 발짓으로 버스를 타는 방법을 알게 되었다.
/// 
/// 뉴욕의 정류장은 각각 번호가 붙어 있는데, 이는 네 자리의 소수로 이루어져 있다.
/// 한 정류장의 번호와, 다른 정류장의 번호의 각 자리들을 비교 했을 때, 자리가 하나만 다른 경우는 이동하는 버스가 존재 하므로 이동이 가능하다.
/// 가령 '1033'번 정류장과 '1733'번 정류장의 경우 차이 나는 경우가 1개 밖에 없기 때문에 버스가 존재 하므로 이동이 가능하나,
/// '1033'번에서 '3733'번의 경우에는 차이가 2개 이상 나기 때문에 버스가 존재하지 않는다.
/// 한 정류장에서 다른 정류장으로 이동 할 때는 반드시 버스를 타야하고, 요금을 내야 한다.
/// 
/// 태현이가 지금 '1033'번 정류장에서 '8179' 정류장으로 이동하기 위해서 거쳐야하는 정류장은 다음과 같다.
/// 
/// 1033 -> 1733 -> 3733 -> 3739 -> 3779 -> 8779 -> 8179
/// 
/// 위의 경우에 태현이가 도착지까지 다다르기 위해서 총 6대의 버스를 타야 한다.
/// 태현이는 비행기를 타는데 돈을 거의 다 썼기 때문에 거쳐 가는 정류장의 개수를 최소한도로 줄여서
/// 태현이가 원더걸스가 묵고 있는 숙소까지 효율적으로 갈 수 있게 도와주자.
///
/// 입력 형식
/// 입력은 한줄로 이루어져 있고, 두 개의 숫자가 공백을 사이에 두고 입력된다.
/// 첫 번째 숫자는 태현이가 위치한 정류장의 번호고,
/// 두 번째 숫자는 태현이가 도착하고자 하는 정류장의 번호이다.
/// 두 숫자는 반드시 4자리의 0으로 시작 되지 않는 소수로 이루어져야 한다.
/// 
/// 출력 형식
/// 태현이가 도착지 까지 가기위해 타게 되는 버스의 대수를 출력한다.
///
/// 입력 예
/// 1033 8179
///
/// 출력 예
/// 6
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=615&sca=3040
/// </summary>
void TravelWithPrimeNumber::Code()
{
	std::cin >> a >> b;
}

/// <summary>
/// a 번째에서 b로의 경로를 찾는다.
/// </summary>
/// <returns>경로 존재 여부</returns>
bool TravelWithPrimeNumber::FindHamingRoute()
{
	q.push(Route(a));
	checkList[a] = true;

	while (q.empty() == false)
	{
		Route curRoute = q.front();
		q.pop();

		for (int i = 0; i < n; i++)
		{
			if(checkList[i] == false && IsHamingDistance(curRoute.index, i))
			{
				Route newRoute(i, curRoute);
				checkList[i] = true;

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
bool TravelWithPrimeNumber::IsHamingDistance(int index1, int index2)
{
	int hamingDistance = 0;

	const string& data1 = allData[index1];
	const string& data2 = allData[index2];
	for (int i = 0; i < k; i++)
	{
		hamingDistance += data1[i] ^ data2[i];

		if (hamingDistance > 1)
		{
			break;
		}
	}

	return hamingDistance == 1;
}
