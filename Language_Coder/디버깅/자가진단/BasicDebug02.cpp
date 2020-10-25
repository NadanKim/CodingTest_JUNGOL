#include "BasicDebug02.h"

/// <summary>
/// 문제
/// 2개의 정수를 입력받아서 첫 번째 수를 두 번째 수로 나눈 몫을 출력하고 첫 번째 수를 실수로 변환하여
/// 두 번째 수로 나눈 값을 구한 후 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하고 
/// 프로그램내용에 관한 설명을 주석으로 표시하시오.
/// 
/// 입력 예
/// 11 3
/// 
/// 출력 예
/// 3 3.67
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=164&sca=1040
/// </summary>
void BasicDebug02::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	// 소수점 이하 2자리 출력 설정
	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	// 첫 번째 수를 두 번째 수로 나누기
	int result1{ var1 / var2 };
	// 첫 번째 수를 실수로 변환 후 두 번째 수로 나누기
	float result2{ static_cast<float>(var1) / var2 };

	std::cout << result1 << ' ' << result2;
}