#include "FormativeStruct03.h"

/// <summary>
/// 문제
/// 직사각형의 왼쪽 아래의 좌표(x, y)와 오른쪽 위의 좌표(x2, y2)를 저장할 수 있는 구조체 자료형을 만들고 두 개의 직사각형 자료를
/// 입력받아 두 직사각형을 포함하는 최소의 직사각형 자료를 구하여 구조체 변수에 저장하고 출력하는 프로그램을 작성하시오.
/// 단, 모든 입력값은 100을 넘지 않는다.
/// 
/// 입력 예
/// 1 1 6 5
/// 2 0 7 3
/// 
/// 출력 예
/// 1 0 7 5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=97&sca=10g0
/// </summary>
void FormativeStruct03::Code()
{
	Point lb1, rt1;
	Point lb2, rt2;

	std::cin >> lb1.x >> lb1.y >> rt1.x >> rt1.y;
	std::cin >> lb2.x >> lb2.y >> rt2.x >> rt2.y;

	Point minLb;
	minLb.x = (lb1.x < lb2.x ? lb1.x : lb2.x);
	minLb.y = (lb1.y < lb2.y ? lb1.y : lb2.y);

	Point maxRt;
	maxRt.x = (rt1.x > rt2.x ? rt1.x : rt2.x);
	maxRt.y = (rt1.y > rt2.y ? rt1.y : rt2.y);

	std::cout << minLb.x << ' ' << minLb.y << ' ' << maxRt.x << ' ' << maxRt.y;
}