#include "BasicFunction103.h"

/// <summary>
/// 문제
/// 100 미만의 정수만 입력된다.정수 n을 입력받아 n x n 크기의 숫자사각형을 출력하는 프로그램을 작성하시오.
/// 
/// 이때 정수 n을 전달받아 숫자 정사각형을 출력하는 함수를 작성하고, 입력받은 정수 n을 함수로 전달하여 출력한다.
/// 
/// 입력 예
/// 4
/// 
/// 출력 예
/// 1 2 3 4
/// 5 6 7 8
/// 9 10 11 12
/// 13 14 15 16
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=210&sca=10b0
/// </summary>
void BasicFunction103::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void BasicFunction103::Function(int n)
{
	int num{ 1 };

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << num++ << ' ';
		}
		std::cout << '\n';
	}
}