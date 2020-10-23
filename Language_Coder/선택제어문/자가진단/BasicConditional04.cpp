#include "BasicConditional04.h"

/// <summary>
/// 문제
/// 복싱체급은 몸무게가 
/// 50.80kg 이하를 Flyweight,
/// 61.23kg 이하를 Lightweight,
/// 72.57kg 이하를 Middleweight,
/// 88.45kg 이하를 Cruiserweight,
/// 88.45kg 초과를 Heavyweight
/// 라고 하자.
/// 
/// 몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// 87.3
/// 
/// 출력 예
/// Cruiserweight
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=168&sca=1050
/// </summary>
void BasicConditional04::Code()
{
	float weight;

	std::cin >> weight;

	if (weight <= 50.80f)
	{
		std::cout << "Flyweight";
	}
	else if (weight <= 61.23f)
	{
		std::cout << "Lightweight";
	}
	else if (weight <= 72.57f)
	{
		std::cout << "Middleweight";
	}
	else if (weight <= 88.45f)
	{
		std::cout << "Cruiserweight";
	}
	else
	{
		std::cout << "Heavyweight";
	}
}