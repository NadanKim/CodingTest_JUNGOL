#include "BasicStruct04.h"

/// <summary>
/// 문제
/// 삼각형의 세 꼭지점의 정수 좌표를 입력받아 삼각형의 무게중심의 실수 좌표를 구하여
/// 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 0 0 1 2 10 15
/// 
/// 출력 예
/// (3.7, 5.7)
/// 
/// Hint!
/// 세 꼭지점이 (x1 y1), (x2 y2), (x3 y3)인 삼각형의 무게중심 = ((x1+x2+x3)/3 (y1+y2+y3)/3)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=253&sca=10g0
/// </summary>
void BasicStruct04::Code()
{
	Point points[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> points[i].x >> points[i].y;
	}

	float x{ 0 }, y{ 0 };

	for (int i = 0; i < 3; i++)
	{
		x += points[i].x;
		y += points[i].y;
	}

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << '(' << x / 3 << ", " << y / 3 << ')';
}