#include "BasicFunction206.h"

/// <summary>
/// 문제
/// main() 함수 내에는 숫자를 사용하지 말고 즉, #define 을 이용하여 1, 2, 3 세 개의 숫자를 조합하여 가능한 한 모든 합을
/// 출력하는 프로그램을 작성하시오.
///
/// 출력예와 같이 출력하시오.
/// 
/// 출력 예
/// 1 + 1 = 2
/// 1 + 2 = 3
/// 1 + 3 = 4
/// 2 + 1 = 3
/// 2 + 2 = 4
/// 2 + 3 = 5
/// 3 + 1 = 4
/// 3 + 2 = 5
/// 3 + 3 = 6
/// 
/// Hint!
/// #define one 1....
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=221&sca=10c0
/// </summary>
void BasicFunction206::Code()
{
	std::cout << one << " + " << one << " = " << one + one << '\n';
	std::cout << one << " + " << two << " = " << one + two << '\n';
	std::cout << one << " + " << three << " = " << one + three << '\n';
	std::cout << two << " + " << one << " = " << two + one << '\n';
	std::cout << two << " + " << two << " = " << two + two << '\n';
	std::cout << two << " + " << three << " = " << two + three << '\n';
	std::cout << three << " + " << one << " = " << three + one << '\n';
	std::cout << three << " + " << two << " = " << three + two << '\n';
	std::cout << three << " + " << three << " = " << three + three;
}