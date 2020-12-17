#include "FormativeStruct05.h"

/// <summary>
/// 문제
/// 10 이하의 정수 n을 입력받은 후 n명의 이름(영문자 20자 이하)과 세 과목의 점수를 입력받아 총점이 높은 순으로 정렬하여 출력하는
/// 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3
/// Chung 50 65 89
/// Nolbu 100 38 99
/// Hungbu 85 95 77
/// 
/// 출력 예
/// Hungbu 85 95 77 257
/// Nolbu 100 38 99 237
/// Chung 50 65 89 204
/// 
/// Hint!
/// 이름과 3과목의 성적 이외에 총점까지 포함하는 구조체를 정의하면 편리하다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=99&sca=10g0
/// </summary>
void FormativeStruct05::Code()
{
	int n;

	std::cin >> n;

	Person* arr = new Person[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_score1 >> arr[i].m_score2 >> arr[i].m_score3;
		arr[i].m_sumOfScore = arr[i].m_score1 + arr[i].m_score2 + arr[i].m_score3;
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j].m_sumOfScore < arr[j + 1].m_sumOfScore)
			{
				Person temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i].m_name << ' ' << arr[i].m_score1 << ' ' << arr[i].m_score2 << ' '
			<< arr[i].m_score3 << ' ' << arr[i].m_sumOfScore << '\n';
	}

	delete[] arr;
}