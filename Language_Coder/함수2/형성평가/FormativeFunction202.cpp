#include "FormativeFunction202.h"

/// <summary>
/// 문제
/// 두 개의 실수를 입력받아 각각의 제곱근을 구하고 두 제곱근 사이에 존재하는 정수의 개수를 출력하는 프로그램을 작성하시오.
/// 단, 입력받는 두 실수는 양수이며 두 제곱근 사이라는 말은 두 제곱근을 포함한다.
/// 
/// 입력 예
/// 12.0 34.789
/// 
/// 출력 예
/// 2
/// 
/// Hint!
/// 두 수의 제곱근을 구하여 정수로 형변환을 한 후 생각해보자.
/// 두 수 사이의 수들은 모두 포함이 되면 작은 수의 경우 변환하기 전 원래의 제곱근과 같다면 개수에 포함을 시켜야 한다.
/// 큰 수는 원래의 수보다 작거나 같으므로 무조건 포함이 된다.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=76&sca=10c0
/// </summary>
void FormativeFunction202::Code()
{
	float var1, var2;
	
	std::cin >> var1 >> var2;

	Function(var1, var2);
}

void FormativeFunction202::Function(float var1, float var2)
{
	int num1{ static_cast<int>(ceil(sqrt(var1 < var2 ? var1 : var2))) };
	int num2{ static_cast<int>(floor(sqrt(var1 > var2 ? var1 : var2))) };

	std::cout << num2 - num1 + 1;
}