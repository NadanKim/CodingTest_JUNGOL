#include "FormativeOperator01.h"

/// <summary>
/// 문제
/// 국어 영어 수학 컴퓨터 과목의 점수를 정수로 입력받아서 총점과 평균을 구하는 프로그램을 작성하시오.
/// (단 평균의 소수점 이하는 버림 한다.)
/// 
/// 입력 예
/// 70 95 63 100
/// 
/// 출력 예
/// sum 328
/// avg 82
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=11&sca=1030
/// </summary>
void FormativeOperator01::Code()
{
	int kor, eng, math, com;

	std::cin >> kor >> eng >> math >> com;

	int sum{ kor + eng + math + com };
	int avg{ sum / 4 };

	std::cout << "sum " << sum << '\n';
	std::cout << "avg " << avg;
}