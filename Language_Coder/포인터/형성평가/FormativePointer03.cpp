#include "FormativePointer03.h"

/// <summary>
/// 문제
/// 세 개의 포인터 변수를 선언하고 메모리 공간을 확보하여 두 수를 입력받아 두 수의 차의 절대값을
/// 저장한 후 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 15 25
/// 
/// 출력 예
/// 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=102&sca=10h0
/// </summary>
void FormativePointer03::Code()
{
	int* var1 = new int;
	int* var2 = new int;

	std::cin >> *var1 >> *var2;

	int* result = new int{ std::abs(*var1 - *var2) };

	std::cout << *result;

	delete var1, var2;
	delete result;
}