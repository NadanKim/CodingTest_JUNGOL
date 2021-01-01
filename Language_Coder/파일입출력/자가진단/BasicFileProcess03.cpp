#include "BasicFileProcess03.h"

/// <summary>
/// 문제
/// 10명의 학생 이름과 점수를 입력받아 이름과 점수, 등수를 입력받은 순서대로 출력하는 프로그램을 작성하시오.
/// 단, 출력시 "이름", "점수", "등수"는 한 칸의 공백으로 구분을 하며, Name은 4칸(% 4s), Score는 5칸(% 5d),
/// Rank는 각 4칸(% 4d)으로 출력한다.
/// 
/// * 표준입출력방식으로 작성하세요.
///
/// 입력 예
/// Hong 90
/// Lim 85
/// Park 88
/// Gong 75
/// Lee 100
/// Seo 90
/// Jang 75
/// Song 90
/// Kim 95
/// Sung 60
/// 
/// 출력 예
/// Name Score Rank
/// Hong    90    3
/// Lim    85    7
/// Park    88    6
/// Gong    75    8
/// Lee   100    1
/// Seo    90    3
/// Jang    75    8
/// Song    90    3
/// Kim    95    2
/// Sung    60   10
/// 
/// Hint!
/// 멤버변수에 번호를 추가하여 초기화 했다가 등수를 확정한 후 번호 순으로 다시 정렬하여 출력한다.
/// 또는 자신보다 점수가 높은 개수를 구한 후 1을 더하여 자신의 등수를 구할 수도 있다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=265&sca=10i0
/// </summary>
void BasicFileProcess03::Code()
{
	Student arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_score;
		arr[i].m_number = i;
	}

	// sort by score
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (arr[j].m_score < arr[j + 1].m_score)
			{
				Student temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	int rank{ 1 };
	for (int i = 0; i < 10; )
	{
		int rankAdder{ 1 };

		arr[i].m_rank = rank;
		while (i < 9 && arr[i].m_score == arr[i + 1].m_score)
		{
			arr[i + 1].m_rank = rank;

			i++;
			rankAdder++;
		}

		i++;
		rank += rankAdder;
	}

	// sort by number
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (arr[j].m_number > arr[j + 1].m_number)
			{
				Student temp{ arr[j] };
				arr[j] = Student{ arr[j + 1] };
				arr[j + 1] = temp;
			}
		}
	}

	std::cout << "Name Score Rank\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(4) << arr[i].m_name
			<< std::setw(6) << arr[i].m_score
			<< std::setw(5) << arr[i].m_rank << '\n';
	}
}