#include "BasicFunction301.h"

/// <summary>
/// 문제
/// 20 이하의 자연수 N을 입력받아 재귀함수를 이용해서 문자열 “recursive”를 N번 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// 3
/// 
/// 출력 예
/// recursive
/// recursive
/// recursive
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=224&sca=10d0
/// </summary>
void BasicFunction301::Code()
{
	int n;
	
	std::cin >> n;

	Function(n);
}

void BasicFunction301::Function(int n)
{
	if (n <= 0)
	{
		return;
	}

	std::cout << "recursive\n";

	Function(n - 1);
}