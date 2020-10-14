#include "BasicOperator03.h"

/// <summary>
/// 문제
/// 한 개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후 전치 증가 연산자를 사용하여 출력하는프로그램을 작성하시오.
/// 
/// 입력 예
/// 5
/// 
/// 출력 예
/// 5
/// 7
/// 
/// Hint!
/// 첫번째 줄은 후치증가 연산자를 사용한 결과 두번째 줄은 전치증가 연산자를 사용한 결과
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=157&sca=1030
/// </summary>
void BasicOperator03::Code()
{
	int var;

	std::cin >> var;

	std::cout << var++ << '\n';
	std::cout << ++var;
}