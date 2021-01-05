#include "FormativeFileProcess10.h"

/// <summary>
/// 문제
/// 10개의 단어를 입력받고 문자 하나를 더 입력 받는다.
/// 
/// 문자를 포함하는 단어를 모두 찾아 사전 순으로 출력하시오.
/// 단어는 100자 이하다.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// hancom
/// korea
/// information
/// monitor
/// class
/// member
/// internet
/// bible
/// friends
/// forever
/// i
/// 
/// 출력 예
/// bible
/// friends
/// information
/// internet
/// monitor
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=114&sca=10i0
/// </summary>
void FormativeFileProcess10::Code()
{
	string arr[10];
	char ch;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> ch;

	vector<string> results;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i].find(ch) < arr[i].size())
		{
			results.push_back(arr[i]);
		}
	}

	for (int i = 1; i < results.size(); i++)
	{
		for (size_t j = 0; j < results.size() - i; j++)
		{
			if (results[j] > results[j + 1])
			{
				string temp{ results[j] };
				results[j] = results[j + 1];
				results[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < results.size(); i++)
	{
		std::cout << results[i] << '\n';
	}
}