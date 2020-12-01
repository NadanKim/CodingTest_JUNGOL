#include "BasicFunction304.h"

/// <summary>
/// 문제
/// 9자리 이하의 자연수를 입력받아 재귀함수를 이용하여 각 자리 숫자의 제곱의 합을 출력하는 프로그램을 작성하시오.
/// 
/// (main()함수에 변수 하나, 재귀함수에 매개변수 하나만을 사용할 수 있다.)
/// 
/// 입력 예
/// 12345
/// 
/// 출력 예
/// 55
/// 
/// Hint!
/// 끝자리(1의 자리)에 있는 숫자와 마지막 자리를 뺀 수의 각자리의 제곱을 더하면 된다. (n%10 + n/10의 각자리의 합)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=229&sca=10d0
/// </summary>
void BasicFunction304::Code()
{
	int var;
	
	std::cin >> var;

	std::cout << Function(var);
}

int BasicFunction304::Function(int var)
{
	if (var <= 0)
	{
		return 0;
	}

	int num{ var % 10 };

	return num * num + Function(var / 10);
}