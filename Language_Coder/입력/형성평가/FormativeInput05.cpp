#include "FormativeInput05.h"

/// <summary>
/// 문제
/// 실수의 yard(야드)를 입력받아 cm(센티미터)로 환산하여 입력값과 환산한 값을 출력 예와 같이 소수 둘째자리에서 반올림하여 첫째자리까지 출력하는 프로그램을 작성하시오. (단 1야드 = 91.44cm로 한다.)
/// 입력은 "yard? "라고 먼저 출력하고, 실수를 입력받는다.실수는 "double"로 한다.
/// 
/// 입력 예
/// yard? 10.1
/// 
/// 출력 예
/// 10.1yard = 923.5cm
/// 
/// Hint!
/// 입력을 받기 위한 지문 뒤에는 꼭! 공백을 넣어야한다. printf("yard? ");
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=10&sca=1020
/// </summary>
void FormativeInput05::Code()
{
	double var;

	std::cout << "yard? ";
	std::cin >> var;

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << var << "yard = " << var * 91.44 << "cm";
}