#include "BasicStruct06.h"

/// <summary>
/// 문제
/// 5명의 이름과 키, 몸무게를 입력받아 이름순으로 정렬하여 출력하고,
/// 몸무게가 무거운 순으로 정렬하여 출력하는 프로그램을 작성하시오.
/// 몸무게는 소수점이하 1자리까지 출력한다.
/// 
/// 입력 예
/// Lee 150 35.6
/// Kim 155 28.9
/// Sin 148 32.7
/// Jung 160 41.2
/// Park 165 38.7
/// 
/// 출력 예
/// name
/// Jung 160 41.2
/// Kim 155 28.9
/// Lee 150 35.6
/// Park 165 38.7
/// Sin 148 32.7
/// 
/// weight
/// Jung 160 41.2
/// Park 165 38.7
/// Lee 150 35.6
/// Sin 148 32.7
/// Kim 155 28.9
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=255&sca=10g0
/// </summary>
void BasicStruct06::Code()
{
	Person arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_height >> arr[i].m_weight;
	}

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (arr[j].m_name > arr[j + 1].m_name)
			{
				Person temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	std::cout << "name\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i].m_name << ' ' << arr[i].m_height << ' ' << arr[i].m_weight << '\n';
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (arr[j].m_weight < arr[j + 1].m_weight)
			{
				Person temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	std::cout << "\nweight\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i].m_name << ' ' << arr[i].m_height << ' ' << arr[i].m_weight << '\n';
	}
}