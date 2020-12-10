#include "BasicString205.h"

/// <summary>
/// 문제
/// 20개 이하의 문자열로 된 이름을 입력받아서 그 뒤에 "fighting"을 붙여서 저장하고 출력하는 프로그램을
/// 작성하시오.
/// 
/// 입력 예
/// Korea
/// 
/// 출력 예
/// Koreafighting
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=243&sca=10f0
/// </summary>
void BasicString205::Code()
{
	string str;

	std::cin >> str;

	str += "fighting";

	std::cout << str;
}