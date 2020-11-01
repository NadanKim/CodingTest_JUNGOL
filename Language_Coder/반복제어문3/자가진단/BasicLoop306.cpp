#include "BasicLoop306.h"

/// <summary>
/// 문제
/// 자연수 n( 3 <= n <= 10) 을 입력받아 다음과 같이 영문자를 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
/// ABC
/// DE
/// F
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=190&sca=1080
/// </summary>
void BasicLoop306::Code()
{
	int n;

	std::cin >> n;

	char ch{ 'A' };
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << ch++;
		}
		std::cout << '\n';
	}
}