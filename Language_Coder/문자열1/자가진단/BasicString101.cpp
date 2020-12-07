#include "BasicString101.h"

/// <summary>
/// 문제
/// 33부터 127 까지의 숫자를 계속 입력받아 입력받은 숫자의 아스키코드에 해당하는 문자를 출력하다가 범위를 벗어나는
/// 입력이 들어오면 종료하는 프로그램을 작성하시오.
///
/// 입·출력 예
/// ASCII code = ? 66
/// B
/// ASCII code = ? 122
/// z
/// ASCII code = ? 0
/// 
/// Hint!
/// [문자열 개념 Lecture](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=29&no=3)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=230&sca=10e0
/// </summary>
void BasicString101::Code()
{
	int var;

	while (true)
	{
		std::cout << "ASCII code =? ";
		std::cin >> var;

		if (var < 33 || 127 < var)
		{
			break;
		}

		std::cout << static_cast<char>(var) << '\n';
	}
}