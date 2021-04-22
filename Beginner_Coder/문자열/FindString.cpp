#include "FindString.h"

/// <summary>
/// 문제
/// 주어진 문자열에서 연속 3개의 문자가 IOI 이거나 KOI인 문자열이 각각 몇 개 있는지 찾는 프로그램을 작성하라.
/// 
/// 문자열은 알파벳의 대문자로만 이루어진다.
/// 예를 들어 "KOIOIOI"라는 문자열은 KOI 1개, IOI 2개가 포함되어있다.
///
/// 입력 형식
/// 입력은 한 줄이며 10,000자 이하의 알파벳 대문자로 구성된다.
/// 
/// 출력 형식
/// 출력은 2줄이며, 첫 번째 줄에는 KOI의 개수, 두 번째 줄에는 IOI의 개수를 각각 출력하라.
///
/// 입력 예		/// 입력 예
/// KOIOIOI		/// KORKDIOIDXHKOIOIOIOPKOI
///
/// 출력 예		/// 출력 예
/// 1			/// 2
/// 2			/// 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1775&sca=2050
/// </summary>
void FindString::Code()
{
	string str;

	std::cin >> str;

	int koiCount{ 0 }, ioiCount{ 0 };

	for (int i = 0, count{ static_cast<int>(str.size()) }; i < count; i++)
	{
		if (str[i] == 'K' || str[i] == 'I')
		{
			if (str[i + 1] != 'O')
			{
				continue;
			}

			if (str[i + 2] == 'I')
			{
				if (str[i] == 'K')
				{
					koiCount++;
				}
				else
				{
					ioiCount++;
				}
			}

			i++;
		}
	}

	std::cout << koiCount << '\n';
	std::cout << ioiCount;
}