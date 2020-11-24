#include "FormativeFunction102.h"

/// <summary>
/// 문제
/// 1부터 전달받은 수까지의 합을 출력하는 함수를 작성하고 1000 이하의 자연수를 입력받아 작성한 함수로 전달하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 100
/// 
/// 출력 예
/// 1050
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=71&sca=10b0
/// </summary>
void FormativeFunction102::Code()
{
	int var;
	
	std::cin >> var;

	Function(var);
}

void FormativeFunction102::Function(int var)
{
	int sum{ 0 };

	while (var > 0)
	{
		sum += var--;
	}

	std::cout << sum;
}