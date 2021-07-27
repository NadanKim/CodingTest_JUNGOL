#include "FormativeFileProcess09.h"

/// <summary>
/// 문제
/// 공백을 포함한 한 문장을 입력받아서 전체 길이와 가장 긴 단어를 출력하시오.
/// 단, 문장의 길이는 최대 100자 이내이고, 길이가 가장 긴 단어가 여러 개인 경우 공백으로 분리하여 한 줄에 입력 받은
/// 순서대로 모두 출력하시오.
/// 
/// 이 문제에서의 단어란 ? 공백으로 분리하는 문자열을 뜻한다.
/// "i am a boy." 문자열의 경우 "i", "am", "a", "boy."가 각각 단어이다.
/// 
/// * 표준입출력방식으로 작성하세요.
/// 
/// 입력 예
/// The largest organ in the body is the liver.
/// 
/// 출력 예
/// 43
/// largest
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=113&sca=10i0
/// </summary>
void FormativeFileProcess09::Code()
{
	string str;

	std::getline(std::cin, str);

	vector<string> allWords;
	stringstream ss{ str };
	string word;

	ss >> word;
	allWords.push_back(word);

	size_t longest{ word.size() };

	while (ss >> word)
	{
		allWords.push_back(word);
		if (word.size() > longest)
		{
			longest = word.size();
		}
	}

	std::cout << str.size() << '\n';
	for (size_t i = 0; i < allWords.size(); i++)
	{
		if (allWords[i].size() == longest)
		{
			std::cout << allWords[i] << ' ';
		}
	}
}