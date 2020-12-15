#include "BasicStruct03.h"

/// <summary>
/// 문제
/// 두 명의 이름과 국어, 영어 점수를 입력받아 과목별 점수의 평균을 구하여 출력하는 프로그램을 작성해 보시오.
/// (이름은 20자 이하이고 평균의 소수점 이하는 버림한다.)
///
/// 입력 예
/// Junho 88 100
/// Seonbin 95 96
/// 
/// 출력 예
/// Junho 88 100
/// Seonbin 95 96
/// avg 91 98
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=252&sca=10g0
/// </summary>
void BasicStruct03::Code()
{
	Student arr[2];

	for (int i = 0; i < 2; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_koreanScore >> arr[i].m_englishScore;
	}

	int sumKR{ 0 }, sumEN{ 0 };

	for (int i = 0; i < 2; i++)
	{
		sumKR += arr[i].m_koreanScore;
		sumEN += arr[i].m_englishScore;

		std::cout << arr[i].m_name << ' ' << arr[i].m_koreanScore << ' '
			<< arr[i].m_englishScore << '\n';
	}

	std::cout << "avg " << sumKR / 2 << ' ' << sumEN / 2;
}