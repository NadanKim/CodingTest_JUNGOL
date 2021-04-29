#include "Disguise.h"

/// <summary>
/// 문제
/// 정올이는 스파이 이다. 
/// 변장술의 달인으로 이전과 같은 조합의 의상을 입고 밖을 나가지 않는다.
/// 어제 안경, 코트, 신발을 입었다면 오늘은 안경대신에 썬그라스를 쓰거나
/// 바지를 추가로 입거나 한다.
/// 
/// 정올이가 가진 의상(장신구포함)​에 대한 정보를 입력받아
/// 정올이가 적어도 하나 이상의 의상(장신구포함)​을 갖춘 상태로
/// 밖을 나갈 수 있는 날은 며칠이나 될까 ?
/// 
/// 예를 들어 3개의 의상이 아래와 같이 주어졌다고 하자.
/// 
/// hat headgear
/// sunglasses eyewear
/// turban headgear​
/// 
/// 이 경우 ​headgear​에 해당하는 의상이 hat, turban이고
/// eyewear​에 해당하는 의상이 sunglasses​ 이므로 다음 5가지 조합이 가능하다.
/// (hat), (turban), (sunglasses), (hat, sunglasses), (turban, sunglasses)
/// 
/// 입력 형식
/// 첫 행에 테스트 케이스 TC( 1 <= TC <= 100)가 입력된다.
/// 각 테스트 케이스의 첫 행에는 정올이가 가진 의상의 수 N(0 <= N <= 30)이 입력된다.
/// 다음 N개의 행에 의상 이름과 의상 분류 이름이 각각 문자열로 주어진다.
/// 각 문자열의 길이는 1 ~20 이다.의상 이름은 유일하다.
/// 
/// 출력 형식
/// 각 테스트 케이스에 대하여 정올이가 밖에 나갈 수 있는 최대일수를 출력한다.
/// 
/// 입력 예
/// 2
/// 3
/// hat headgear
/// sunglasses eyewear
/// turban headgear
/// 3
/// mask face
/// sunglasses face
/// makeup face
/// 
/// 출력 예
/// 5
/// 3
/// 
/// Hint!
/// [ 문자열 비교 함수]
/// int strcmp(const char* s, const char* t) {
///     while (*s && *s == *t) ++s, ++t;
///     return *s - *t;
/// }​
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=3048&sca=2050
/// </summary>
void Disguise::Code()
{
	int tc;

	std::cin >> tc;

	for (int i = 0; i < tc; i++)
	{
		DoDisguise();
	}
}

void Disguise::DoDisguise()
{
	int itemCount;
	vector<string> keyList;
	unordered_map<string, int> items;

	string item, kind;

	std::cin >> itemCount;
	for (int i = 0; i < itemCount; i++)
	{
		std::cin >> item >> kind;
		if (items.find(kind) == items.end())
		{
			items[kind] = 1;
			keyList.push_back(kind);
		}
		items[kind]++;
	}

	int species{ 1 };

	for (int count{ static_cast<int>(keyList.size()) }, i = 0; i < count; i++)
	{
		species *= items[keyList[i]];
	}

	std::cout << species - 1 << '\n';
}