#include "BasicStruct05.h"

/// <summary>
/// 문제
/// 5명의 이름과 키를 입력받아 키가 가장 작은 사람의 이름과 키를 출력하는 프로그램을 작성하시오.
/// 이름은 20자 이하이다.
/// 
/// 입력 예
/// Park 175
/// Lee 180
/// Choo 185
/// Son 193
/// Kim 188
/// 
/// 출력 예
/// Park 175
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=254&sca=10g0
/// </summary>
void BasicStruct05::Code()
{
	Person arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_height;
	}

	Person& shortest{ arr[0] };
	for (int i = 1; i < 5; i++)
	{
		if (shortest.m_height > arr[i].m_height)
		{
			shortest = arr[i];
		}
	}

	std::cout << shortest.m_name << ' ' << shortest.m_height;
}