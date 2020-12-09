#include "FormativeString102.h"

/// <summary>
/// 문제
/// 5개 이상 100개 이하의 문자로 된 단어를 입력받은 후 앞에서부터 5자를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// AbCdEFG
/// 
/// 출력 예
/// AbCdE
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=83&sca=10e0
/// </summary>
void FormativeString102::Code()
{
	string str;

	std::cin >> str;

	std::cout << str.substr(0, 5);
}