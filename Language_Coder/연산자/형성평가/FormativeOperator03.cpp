#include "FormativeOperator03.h"

/// <summary>
/// 문제
/// 직사각형의 가로와 세로의 길이를 정수형 값으로 입력받은 후 가로의 길이는 5 증가시키고 세로의 길이는 2배하여 저장한 후 가로의 길이 세로의 길이 넓이를 차례로 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 20 15
/// 
/// 출력 예
/// width = 25
/// length = 30
/// area = 750
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=13&sca=1030
/// </summary>
void FormativeOperator03::Code()
{
	int width, length;

	std::cin >> width >> length;

	width += 5;
	length *= 2;

	std::cout << "width = " << width << '\n';
	std::cout << "length = " << length << '\n';
	std::cout << "area = " << width * length;
}