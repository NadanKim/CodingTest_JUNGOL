#include "FormativeLoop102.h"

/// <summary>
/// 문제
/// 0 이상의 정수들이 공백으로 구분되어 반복적으로 주어진다.
/// 0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여
/// 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 9 7 10 5 33 65 0
/// 
/// 출력 예
/// odd : 5
/// even : 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=26&sca=1060
/// </summary>
void FormativeLoop102::Code()
{
	int var;
	int odd{ 0 }, even{ 0 };

	while (true)
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		if (var % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	std::cout << "odd : " << odd << '\n';
	std::cout << "even : " << even;
}