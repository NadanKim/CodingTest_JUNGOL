#include "FormativeArray201.h"

/// <summary>
/// 문제
/// 승지는 주사위 놀이를 하다가 주사위를 10번 던져서 각 숫자가 몇 번씩 나왔는지 알아보려고 한다.
/// 한번 던질 때마다 나온 주사위의 숫자를 입력받아서 각 숫자가 몇 번씩 나왔는지 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 5 6 3 4 5 5 2 2 4 6
/// 
/// 출력 예
/// 1 : 0
/// 2 : 2
/// 3 : 1
/// 4 : 2
/// 5 : 3
/// 6 : 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=60&sca=10a0
/// </summary>
void FormativeArray201::Code()
{
	int dice[6]{};

	int var;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> var;

		dice[var - 1]++;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << i + 1 << " : " << dice[i] << '\n';
	}
}