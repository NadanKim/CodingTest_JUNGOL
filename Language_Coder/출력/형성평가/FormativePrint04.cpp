#include "FormativePrint04.h"

/// <summary>
/// 문제
/// 다음 "출력 예"와 같이 출력하는 프로그램을 작성하시오.
/// 합계와 평균은 수식을 이용하세요. 
/// 
/// 출력 예
/// kor 90
/// mat 80
/// eng 100
/// sum 270
/// avg 90
/// 
/// Hint!
/// 합계와 평균을 구하는 수식은 다음과 같다.
/// sum 90 + 80 + 100
/// avg(90 + 80 + 100) / 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=4
/// </summary>
void FormativePrint04::Code()
{
	std::cout << "kor " << 90 << "\n";
	std::cout << "mat " << 80 << "\n";
	std::cout << "eng " << 100 << "\n";
	std::cout << "sum " << 90 + 80 + 100 << "\n";
	std::cout << "avg " << (90 + 80 + 100) / 3 << "\n";
}