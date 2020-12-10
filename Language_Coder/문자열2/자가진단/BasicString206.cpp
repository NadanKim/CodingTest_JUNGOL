#include "BasicString206.h"

/// <summary>
/// 문제
/// 20자 이하인 두 개의 문자열을 입력받아 첫 번째 문자열의 앞부분 두자를 두 번째 문자열의 앞부분에 복사하고
/// 다시 뒷부분에 이어 붙여서 저장한 후 두 번째 문자열을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// ABCDE QWERTY
/// 
/// 출력 예
/// ABERTYAB
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=244&sca=10f0
/// </summary>
void BasicString206::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	str2 = str1.substr(0, 2) + str2.substr(2) + str1.substr(0, 2);

	std::cout << str2;
}