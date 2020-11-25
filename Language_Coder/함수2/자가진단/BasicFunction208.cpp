#include "BasicFunction208.h"

/// <summary>
/// 문제
/// 정수 두 개를 입력받고 계산식을 매크로 함수로 작성하여 두 수의 차를 제곱한 값과 합을 세제곱한 값을 각각 출력하는 프로그램을 작성하시오.
/// ('^'는 연산자가 아니고 거듭제곱을 뜻하는 표시이므로 거듭제곱은 별도로 계산해야함)
/// 
/// 입력 예
/// 5 10
/// 
/// 출력 예
/// (5 - 10) ^ 2 = 25
/// (5 + 10) ^ 3 = 3375
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=223&sca=10c0
/// </summary>
void BasicFunction208::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;
	
	std::cout << Function1(var1, var2) << '\n';
	std::cout << Function2(var1, var2) << '\n';
}