#include "BasicLoop106.h"

/// <summary>
/// 문제
/// 아래와 같이 나라 이름을 출력하고 숫자를 입력받아 해당하는 나라의 수도를 출력하는 작업을 반복하다가 해당하는 번호 이외의 숫자가 입력되면 "none"라고 출력한 후 종료하는 프로그램을 작성하시오.
/// 
/// * 각 나라의 수도 :
/// 대한민국 = 서울(Seoul)
/// 미국 = 워싱턴(Washington)
/// 일본 = 동경(Tokyo)
/// 중국 = 북경(Beijing)
/// 
/// 입·출력 예
/// 1. Korea
/// 2. USA
/// 3. Japan
/// 4. China
/// number ? 1
/// 
/// Seoul	- 출력
/// 
/// 1. Korea
/// 2. USA
/// 3. Japan
/// 4. China
/// number ? 5
/// 
/// none	- 출력
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2077&sca=1060
/// </summary>
void BasicLoop106::Code()
{
	int num;

	do
	{
		std::cout << "1. Korea\n"
			"2. USA\n"
			"3. Japan\n"
			"4. China\n"
			"number? ";
		std::cin >> num;

		std::cout << '\n';
		switch (num)
		{
		case 1:
			std::cout << "Seoul\n";
			break;
		case 2:
			std::cout << "Washington\n";
			break;
		case 3:
			std::cout << "Tokyo\n";
			break;
		case 4:
			std::cout << "Beijing\n";
			break;
		default:
			std::cout << "none\n";
			break;
		}
		std::cout << '\n';
	} while (1 <= num && num <= 4);
}