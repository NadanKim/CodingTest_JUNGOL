#include "BasicPointer01.h"

/// <summary>
/// 문제
/// 정수형 변수와 포인터 변수를 선언하고 정수를 입력받아 포인터 변수를 이용하여 정수형 변수의 메모리 주소와 값을 출력하는 프로그램을 작성하시오.
/// 
/// 주소 출력은 "%#p"를 이용하시오.아래는 메모리 주소가 "0X11110000"이라고 가정했을 때이다.
///
/// 입력 예
/// 20
///
/// 출력 예
/// 0X11110000 20
/// 
/// Hint!
/// [포인터 개념 Lecture](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=29&no=1)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=256&sca=10h0
/// </summary>
void BasicPointer01::Code()
{
	int var;

	std::cin >> var;

	int* p{ &var };

	std::cout << "0x" << p << ' ' << *p;
}