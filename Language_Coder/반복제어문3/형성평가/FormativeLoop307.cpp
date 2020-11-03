#include "FormativeLoop307.h"

/// <summary>
/// 문제
/// 자연수 n(n≤6)을 입력받아 "출력 예"와 같이 공백으로 구분하여 출력되는 프로그램을 작성하시오.
/// 
/// 주의!문자는 공백으로 구분하되 줄사이에 빈줄은 없다.
///
/// 입력 예
/// 3
/// 
/// 출력 예
/// A B C
/// D E 0
/// F 1 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=46&sca=1080
/// </summary>
void FormativeLoop307::Code()
{
	int n;

	std::cin >> n;

	int num{ 0 };
	char ch{ 'A' };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			std::cout << ch++ << ' ';
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << num++ << ' ';
		}
		std::cout << '\n';
	}
}