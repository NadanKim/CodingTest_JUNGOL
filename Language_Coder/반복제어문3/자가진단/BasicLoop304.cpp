#include "BasicLoop304.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
/// ***
///  **
///   *
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=188&sca=1080
/// </summary>
void BasicLoop304::Code()
{
	int n;

	std::cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}