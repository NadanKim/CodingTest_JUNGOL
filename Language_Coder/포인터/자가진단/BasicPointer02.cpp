#include "BasicPointer02.h"

/// <summary>
/// 문제
/// 정수형 포인터를 이용하여 값을 입력받고 입력받은 값을 10으로 나눈 몫과 나머지를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 123
/// 
/// 출력 예
/// 12...3
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=257&sca=10h0
/// </summary>
void BasicPointer02::Code()
{
	int* p = new int;

	std::cin >> *p;

	std::cout << *p / 10 << "..." << *p % 10;

	delete p;
}