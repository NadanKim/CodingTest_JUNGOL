#include "BasicString103.h"

/// <summary>
/// 문제
/// 문자열을 “Hong Gil Dong”으로 초기화 한 후 3번부터 6번까지의 문자를 차례로 출력하시오.
///
/// 출력 예
/// g Gi
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=232&sca=10e0
/// </summary>
void BasicString103::Code()
{
	string str{ "Hong Gil Dong" };

	std::cout << str.substr(3, 4);
}