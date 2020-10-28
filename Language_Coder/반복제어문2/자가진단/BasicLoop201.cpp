#include "BasicLoop201.h"

/// <summary>
/// 문제
/// 문자를 입력받아서 입력받은 문자를 20번 반복하여 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// A
/// 
/// 출력 예
/// AAAAAAAAAAAAAAAAAAAA
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=178&sca=1070
/// </summary>
void BasicLoop201::Code()
{
	char ch;

	std::cin >> ch;

	for (int i = 0; i < 20; i++)
	{
		std::cout << ch;
	}
}