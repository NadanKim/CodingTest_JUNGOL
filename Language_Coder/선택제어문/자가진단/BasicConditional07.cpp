#include "BasicConditional07.h"

/// <summary>
/// 문제
/// 영문 대문자를 입력받아 
/// 'A'이면 “Excellent”,
/// 'B'이면 “Good”,
/// 'C'이면 “Usually”,
/// 'D'이면 “Effort”,
/// 'F'이면 “Failure”,
/// 그 외 문자이면 “error” 라고 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// B
/// 
/// 출력 예
/// Good
/// 
/// Hint!
/// Python의 경우 문자열 입력시 앞뒤에 공백이 포함될 경우가 있는데 strip() 함수를 사용하여 문제를 해결할 수 있다.
/// 예) str = input().strip()
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=171&sca=1050
/// </summary>
void BasicConditional07::Code()
{
	char ch;

	std::cin >> ch;

	switch (ch)
	{
	case 'A':
		std::cout << "Excellent";
		break;
	case 'B':
		std::cout << "Good";
		break;
	case 'C':
		std::cout << "Usually";
		break;
	case 'D':
		std::cout << "Effort";
		break;
	case 'F':
		std::cout << "Failure";
		break;
	default:
		std::cout << "error";
		break;
	}
}