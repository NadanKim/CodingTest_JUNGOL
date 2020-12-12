#include "FormativeString202.h"

/// <summary>
/// 문제
/// "flower" "rose" "lily" "daffodil" "azalea" 5개의 단어를 초기화한 후 한 개의 문자를 입력받아서 입력받은 문자가 두 번째나
/// 세 번째에 포함된 단어를 모두 출력하고 마지막 줄에 출력한 단어의 개수를 출력하는 프로그램을 작성하시오.
///
/// 해당되는 단어가 없으면 "0"만 첫 줄에 출력한다.
/// 
/// 입력 예
/// l
/// 
/// 출력 예
/// flower
/// lily
/// 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=90&sca=10f0
/// </summary>
void FormativeString202::Code()
{
	string str;

	std::cin >> str;

	std::cout << str.substr(0, 5);
}