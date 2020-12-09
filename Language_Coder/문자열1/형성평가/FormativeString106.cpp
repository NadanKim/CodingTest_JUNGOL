#include "FormativeString106.h"

/// <summary>
/// 문제
/// 문자열(100자 이하)을 입력받은 후 정수를 입력받아 해당위치의 문자를 제거하고 출력하는 작업을 반복하다가
/// 문자 1개가 남으면 종료하는 프로그램을 작성하시오.
/// 
/// 첫 번째 문자의 위치는 1이며 만약 입력받은 번호가 문자열의 길이 이상이면 마지막 문자를 제거한다.
/// 
/// * 입출력예에서 진한글씨가 출력
/// 
/// 입·출력 예
/// word
/// 3
/// wod
/// 1
/// od
/// 10
/// o
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=87&sca=10e0
/// </summary>
void FormativeString106::Code()
{
	string str;

	std::cin >> str;

	size_t n;

	do
	{
		std::cin >> n;

		if (n <= 0)
		{
			n = 1;
		}
		else if (n > str.size())
		{
			n = str.size();
		}

		str.replace(n - 1, 1, "");

		std::cout << str << '\n';
	} while (str.size() > 1);
}