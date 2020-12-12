#include "FormativeString208.h"

/// <summary>
/// 문제
/// 한 개의 단어를 입력받아서 거꾸로 뒤집어 출력하는 작업을 반복하다가 "END"라고 입력이 되면 종료하는 프로그램을 작성하시오.
/// 입력받는 단어의 길이는 20이하이다.
///
/// 입력 예
/// Jungol
/// jjang
/// END
/// 
/// 출력 예
/// lognuJ
/// gnajj
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=116&sca=10f0
/// </summary>
void FormativeString208::Code()
{
	string str;

	while (true)
	{
		std::cin >> str;

		if (str == "END")
		{
			break;
		}

		std::reverse(str.begin(), str.end());
		std::cout << str << '\n';
	}
}