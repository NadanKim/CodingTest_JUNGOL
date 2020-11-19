#include "BasicFunction107.h"

/// <summary>
/// 문제
/// 서로 다른 두 개의 정수가 주어진다.
/// 두 정수를 입력받아 큰 수는 2로 나눈 몫을 저장하고 작은 수는 2를 곱하여 저장한 후 출력하는 프로그램을 작성하시오.
/// (참조에 의한 호출을 이용한 함수를 작성하여 값을 수정하고 출력은 메인함수에서 한다.)
/// 
/// 입력 예
/// 100 500
/// 
/// 출력 예
/// 200 250
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=214&sca=10b0
/// </summary>
void BasicFunction107::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	Function(var1, var2);

	std::cout << var1 << ' ' << var2;
}

void BasicFunction107::Function(int& var1, int& var2)
{
	if (var1 < var2)
	{
		var1 *= 2;
		var2 /= 2;
	}
	else
	{
		var1 /= 2;
		var2 *= 2;
	}
}