#include "BasicConditional01.h"

/// <summary>
/// 문제
/// 정수를 입력받아 첫 줄에 입력 받은 숫자를 출력하고 둘째 줄에 음수이면 “minus” 라고 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예	/// 입력 예
/// -5		/// 5
///			///
/// 출력 예	/// 출력 예
/// -5		/// 5
/// minus	///
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=165&sca=1050
/// </summary>
void BasicConditional01::Code()
{
	int var;

	std::cin >> var;

	std::cout << var << '\n';
	if (var < 0)
	{
		std::cout << "minus";
	}
}