#include "BasicOperator06.h"

/// <summary>
/// 문제
/// 두 개의 정수를 입력받아서 다음과 같이 4가지 관계연산자의 결과를 출력하시오.
/// 이때 입력받은 두 정수를 이용하여 출력하시오. (JAVA는 1이면 true, 0이면 false를 출력한다.)
/// 
/// 입력 예
/// 4 5
/// 
/// 출력 예
/// 4 > 5 --- 0
/// 4 < 5 --- 1
/// 4 >= 5 --- 0
/// 4 <= 5 --- 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=160&sca=1030
/// </summary>
void BasicOperator06::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << var1 << " > " << var2 << " --- " << (var1 > var2) << '\n';
	std::cout << var1 << " < " << var2 << " --- " << (var1 < var2) << '\n';
	std::cout << var1 << " >= " << var2 << " --- " << (var1 >= var2) << '\n';
	std::cout << var1 << " <= " << var2 << " --- " << (var1 <= var2);
}