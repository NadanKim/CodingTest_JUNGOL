#include "FormativeString205.h"

/// <summary>
/// 문제
/// 5개의 단어(각 단어는 100자 이하)를 입력받은 후 문자와 문자열(100자 이하)을 한 개씩 입력받아 나중에 입력받은 문자나 문자열이
/// 포함된 단어를 모두 출력하는 프로그램을 작성하시오.
/// 찾는 단어가 없으면 “none”이라고 출력한다.
/// 
/// 입력 예
/// banana
/// apple
/// melon
/// tomato
/// pear
/// n
/// to
/// 
/// 출력 예
/// banana
/// melon
/// tomato
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=93&sca=10f0
/// </summary>
void FormativeString205::Code()
{
	string arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	char ch;
	string str;

	std::cin >> ch >> str;
	
	bool hasFound{ false };
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].find(ch) != SIZE_MAX || arr[i].find(str) != SIZE_MAX)
		{
			hasFound = true;

			std::cout << arr[i] << '\n';
		}
	}

	if (!hasFound)
	{
		std::cout << "none";
	}
}