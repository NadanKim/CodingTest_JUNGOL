#include "FormativePointer02.h"

/// <summary>
/// 문제
/// 정수형 변수를 선언하고 포인터 변수를 사용하여 100 이하의 수를 입력받은 후 입력받은 수만큼 ‘*’을
/// 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 10
/// 
/// 출력 예
/// **********
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=101&sca=10h0
/// </summary>
void FormativePointer02::Code()
{
	int* var = new int;

	std::cin >> *var;

	for (int i = 0; i < *var; i++)
	{
		std::cout << '*';
	}

	delete var;
}