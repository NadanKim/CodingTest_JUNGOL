#include "BasicArray101.h"

/// <summary>
/// 문제
/// 문자 10개를 저장할 수 있는 배열을 만들고 10개의 문자를 입력받아 입력받은 문자를 이어서 출력하는 프로그램을 작성하시오.
///
/// 입력 예
/// A B C D E F G H I J
/// 
/// 출력 예
/// ABCDEFGHIJ
/// 
/// Hint!
/// 문자를 입력받을 때는 %c 앞에 반드시 공백이 필요함을 잊지 말자.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=192&sca=1090
/// </summary>
void BasicArray101::Code()
{
	char arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i];
	}
}