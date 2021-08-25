#include "PrintSquare.h"

/// <summary>
/// 문제
/// X를 Y번 곱한 값을 찾는 프로그램을 작성하라. 
/// 결과가 클 수 있기 때문에 결과 값은 20091024로 나눈 나머지를 출력하라.
///
/// 입력 형식
/// 입력의 첫 번째 줄에는 X와 Y가 입력된다. 
/// X와 Y는 모두 0 이상 2³¹ - 1 이하의 정수이다.
/// 
/// 출력 형식
/// X를 Y번 곱한 값을 20091024로 나눈 나머지를 출력하라. 
/// 단, 0를 0번 곱한것은 편의상 1로 정한다.
///
/// 입력 예
/// 2 10
///
/// 출력 예
/// 1024
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=372&sca=30
/// </summary>
void PrintSquare::Code()
{
	int x, y;
	std::cin >> x >> y;

	std::cout << PrintSquareModuler(x, y);
}

/// <summary>
/// 주어진 값의 제곱수를 20091024로 나눈 나머지를 반환한다.
/// </summary>
/// <param name="x">곱할 값</param>
/// <param name="pow">곱해지는 횟수</param>
/// <returns>제곱수를 20091024로 나눈 나머지</returns>
long long PrintSquare::PrintSquareModuler(long long x, long long pow)
{
	if (pow == 0)
	{
		return 1;
	}

	long long modNum{ x % 20091024 };
	return modNum * PrintSquareModuler(x, pow - 1);
}