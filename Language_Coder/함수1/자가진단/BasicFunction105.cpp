#include "BasicFunction105.h"

/// <summary>
/// 문제
/// 10 이하의 두 정수가 주어진다.
/// 이를 입력 받아서 첫 번째 수를 두 번째 수만큼 거듭제곱하여 나온 값을 리턴하는 함수를 작성하여
/// 다음과 같이 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 2 10
/// 
/// 출력 예
/// 1024
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=212&sca=10b0
/// </summary>
void BasicFunction105::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	Function(var1, var2);
}

void BasicFunction105::Function(int var1, int var2)
{
	int result{ 1 };

	for (int i = 0; i < var2; i++)
	{
		result *= var1;
	}

	std::cout << result;
}