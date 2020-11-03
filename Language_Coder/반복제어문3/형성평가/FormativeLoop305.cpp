#include "FormativeLoop305.h"

/// <summary>
/// 문제
/// 자연수 n을 입력받아 "출력 예"와 같이 n줄에 걸처 오른쪽으로 정렬된 삼각형이 출력되는 프로그램을 작성하시오.
/// 
/// 주의! '*'과 '*'사이에 공백이 없고 줄사이에도 빈줄이 없다.
/// 
/// 입력 예
/// 3
/// 
/// 출력 예
///     *
///   ***
/// *****
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=44&sca=1080
/// </summary>
void FormativeLoop305::Code()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}