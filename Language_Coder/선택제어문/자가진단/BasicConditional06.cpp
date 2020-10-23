#include "BasicConditional06.h"

/// <summary>
/// 문제
/// 남자는 'M' 여자는 'F'로 나타내기로 하고 18세 이상을 성인이라고 하자.
/// 
/// 성별('M', 'F')과 나이를 입력받아 "MAN"(성인남자), "WOMAN"(성인여자), "BOY"(미성년남자), "GIRL"(미성년여자)을
/// 구분하여 출력하는 프로그램을 작성하시오.
/// 
/// 입력 예
/// F 15
/// 
/// 출력 예
/// GIRL
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=170&sca=1050
/// </summary>
void BasicConditional06::Code()
{
	char sex;
	int age;

	std::cin >> sex >> age;

	bool isAdult = (age >= 18);
	if (sex == 'M')
	{
		if (isAdult)
		{
			std::cout << "MAN";
		}
		else
		{
			std::cout << "BOY";
		}
	}
	else
	{
		if (isAdult)
		{
			std::cout << "WOMAN";
		}
		else
		{
			std::cout << "GIRL";
		}
	}
}