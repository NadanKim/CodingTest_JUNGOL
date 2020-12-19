#include "BasicPointer03.h"

/// <summary>
/// 문제
/// 포인터 변수 두 개를 이용하여 두 수를 입력받고 사칙 연산을 수행하여 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 35 6
/// 
/// 출력 예
/// 35 + 6 = 41
/// 35 - 6 = 29
/// 35 * 6 = 210
/// 35 / 6 = 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=258&sca=10h0
/// </summary>
void BasicPointer03::Code()
{
	int* p1 = new int;
	int* p2 = new int;

	std::cin >> *p1 >> *p2;

	std::cout << *p1 << " + " << *p2 << " = " << *p1 + *p2 << '\n';
	std::cout << *p1 << " - " << *p2 << " = " << *p1 - *p2 << '\n';
	std::cout << *p1 << " * " << *p2 << " = " << *p1 * *p2 << '\n';
	std::cout << *p1 << " / " << *p2 << " = " << *p1 / *p2;

	delete p1, p2;
}