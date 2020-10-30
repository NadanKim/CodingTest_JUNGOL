#include "FormativeLoop201.h"

/// <summary>
/// 문제
/// 10 이하의 자연수 n을 입력받아 "JUNGOL​"을 n번 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 4
/// 
/// 출력 예
/// JUNGOL​
/// JUNGOL​
/// JUNGOL​
/// JUNGOL​
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=30&sca=1070
/// </summary>
void FormativeLoop201::Code()
{
	int n;

	std::cin >> n;

	while (n--)
	{
		std::cout << "JUNGOL" << '\n';
	}
}