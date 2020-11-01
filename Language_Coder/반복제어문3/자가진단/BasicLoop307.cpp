#include "BasicLoop307.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받아서 n개의 줄에 n+1개의 숫자 혹은 문자로 채워서 다음과 같이 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 3
/// 
/// 출력 예
/// 1 2 3 A
/// 4 5 B C
/// 6 D E F
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=191&sca=1080
/// </summary>
void BasicLoop307::Code()
{
	int n;

	std::cin >> n;

	int num{ 1 };
	char ch{ 'A' };
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << num++ << ' ';
		}

		for (int j = i; j <= n; j++)
		{
			std::cout << ch++ << ' ';
		}
		std::cout << '\n';
	}
}