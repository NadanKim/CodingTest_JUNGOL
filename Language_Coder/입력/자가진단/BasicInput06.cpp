#include "BasicInput06.h"

/// <summary>
/// 문제
/// 키를 입력받아 출력하는 프로그램을 작성하라.
/// (입력할때 "height = " 문장을 먼저 출력하고 키를 입력 받아야 합니다.)
/// 
/// 입력 예
/// height = 170
/// 
/// 출력 예
/// Your height is 170cm.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=151&sca=1020
/// </summary>
void BasicInput06::Code()
{
	int height;

	std::cout << "height = ";
	std::cin >> height;

	std::cout << "Your height is " << height << "cm.";
}