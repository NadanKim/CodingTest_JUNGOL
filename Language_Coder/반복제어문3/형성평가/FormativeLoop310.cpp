#include "FormativeLoop310.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받아 "출력 예"와 같이 n x n크기에 공백으로 구분하여 출력되는 프로그램을 작성하시오.
/// 
/// 10 미만의 홀수만 출력하시오.주의!숫자는 공백으로 구분하되 줄사이에 빈줄은 없다.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
/// 1 3 5
/// 7 9 1
/// 3 5 7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=49&sca=1080
/// </summary>
void FormativeLoop310::Code()
{
	int n;

	std::cin >> n;

	int num{ 1 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << num << ' ';
			num += 2;

			if (num > 9)
			{
				num = 1;
			}
		}
		std::cout << '\n';
	}
}