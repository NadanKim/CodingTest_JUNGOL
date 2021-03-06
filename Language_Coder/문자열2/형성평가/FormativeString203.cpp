#include "FormativeString203.h"

/// <summary>
/// 문제
/// 단어를 입력받다가 "0"을 입력받으면 입력을 종료하고 그 때까지 입력받은 단어의 개수를 출력하고 홀수 번째 입력받은 단어를 
/// 한 줄에 1개씩 출력하는 프로그램을 작성하시오.
/// 단어의 개수는 50개를 넘지 않고, 단어의 길이는 100자 이하이다.
/// 
/// 입력 예
/// keyboard
/// mouse
/// monitor
/// 0
/// 
/// 출력 예
/// 3
/// keyboard
/// monitor
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=91&sca=10f0
/// </summary>
void FormativeString203::Code()
{
	int count{ 0 };
	string arr[50];

	for (; count < 50; count++)
	{
		std::cin >> arr[count];

		if (arr[count] == "0")
		{
			break;
		}
	}

	std::cout << count << '\n';

	for (int i = 0; i < count; i += 2)
	{
		std::cout << arr[i] << '\n';
	}
}