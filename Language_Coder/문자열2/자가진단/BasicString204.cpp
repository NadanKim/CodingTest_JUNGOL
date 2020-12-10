#include "BasicString204.h"

/// <summary>
/// 문제
/// 문자열을 선언하고 다음과 같이 "Hong Gil Dong"이라는 이름을 복사하여 저장한 후 출력하는 프로그램을
/// 작성하시오.
/// 
/// 출력 예
/// Hong Gil Dong
/// 
/// Hint!
/// strcpy(문자열변수, "Hong Gil Dong");
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=242&sca=10f0
/// </summary>
void BasicString204::Code()
{
	string str1{ "Hong Gil Dong" };
	string str2;

	str2 = str1;
	
	std::cout << str2;
}