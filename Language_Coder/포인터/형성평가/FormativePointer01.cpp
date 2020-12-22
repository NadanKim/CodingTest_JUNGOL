#include "FormativePointer01.h"

/// <summary>
/// 문제
/// 문자와 실수를 각각 선언 하고 그 주소를 출력하는 프로그램을 작성하시오.
/// 
/// 출력 예
/// 11111 22222
/// 
/// Hint!
/// [포인터](http://www.jungol.co.kr/bbs/download.php?bo_table=pds&wr_id=29&no=1)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=100&sca=10h0
/// </summary>
void FormativePointer01::Code()
{
	char* ch = new char;
	float* var = new float;

	std::cout << &ch << ' ' << var;

	delete ch;
	delete var;
}