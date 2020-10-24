﻿#include "FormativeConditional04.h"

/// <summary>
/// 문제
/// 1번은 개, 2번은 고양이, 3번은 병아리로 정하고 번호를 입력하면 번호에 해당하는 동물을 영어로 출력하는 프로그램을 작성하시오.
/// 해당 번호가 없으면 "I don't know."라고 출력한다.
/// 개 - dog
/// 고양이 - cat
/// 병아리 - chick​
/// 
/// 입력 예
/// Number? 2
/// 
/// 출력 예
/// cat
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=23&sca=1050
/// </summary>
void FormativeConditional04::Code()
{
	int num;

	std::cout << "Number? ";
	std::cin >> num;

	switch (num)
	{
	case 1:
		std::cout << "dog";
		break;
	case 2:
		std::cout << "cat";
		break;
	case 3:
		std::cout << "chick";
		break;
	default:
		std::cout << "I don't know.";
		break;
	}
}