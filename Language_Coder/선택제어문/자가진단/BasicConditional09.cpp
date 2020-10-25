#include "BasicConditional09.h"

/// <summary>
/// 문제
/// 3개의 정수를 입력 받아 첫 번째 수가 가장 크면 1 아니면 0을 출력하고
/// 세 개의 수가 모두 같으면 1 아니면 0을 출력하는 프로그램을 작성하시오.
/// (JAVA는 1이면 true, 0이면 false를 출력한다.)
/// 
/// 입력 예
/// 18 -5 10
/// 
/// 출력 예
/// -5
/// 
/// Hint!
/// 두 수중 먼저 작은 값을 구한 후 나머지 수와 비교하여 구하면 된다.
/// 예)
/// min = (a < b) ? a : b;
/// min = (min < c) ? min : c;
///
/// 또는 아래 예와 같이 조건 연산자를 중첩하여 한 번에 구하는 방법도 있지만
/// 식이 너무 복잡해지므로 참고는 하되 프로그램 작성할 때에는 가능한 쉬운 방법으로 작성할 것을 권장한다.
/// 예)
/// (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
/// 또는
/// (a < b&& a < c) ? a : (b < c) ? b : c;
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=660&sca=1050
/// </summary>
void BasicConditional09::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int minimum{ (var1 < var2 ? (var1 < var3 ? var1 : var3) : (var2 < var3 ? var2 : var3)) };

	std::cout << minimum;
}