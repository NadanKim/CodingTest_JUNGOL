#include "CountWords.h"

/// <summary>
/// 문제
/// 임의의 문장을 입력받아 각 단어별로 나눈 후에 단어들의 중복되는 개수를 구하는 프로그램을 작성하시오.
/// 
/// <처리조건>
/// (1) 입력된 스트링은 글자의 제한은 없다.즉, 알파벳 대.소문자, 공백, ', ' 등도 입력으로 들어 올 수 있다.
/// (2) 입력된 문장에서 각 단어사이의 구분은 공백으로 한다.
/// (3) 단어에는 공백을 제외한 모든 문자들이 포함된다.​
///
/// 입력 형식
/// 임의의 문장을 입력받는다.(문장의 길이는 200 이하)
/// 하나의 결과가 나온 후에도 계속 새로운 입력을 받다가, "END"가 입력되면 프로그램을 종료한다. (문장의 개수를 30을 넘지 않는다.)
/// 
/// 출력 형식
/// 각 문장 단위로 단어들의 발생 빈도를 오름차순 크기(아스키코드)순으로 출력한다.
///
/// 입력 예
/// I AM DOG DOG DOG DOG A AM I
/// I AM OLYMPIAD JUNGOL JUNGOL OLYMPIAD
/// END
///
/// 출력 예
/// A: 1
/// AM : 2
/// DOG : 4
/// I : 2
/// AM : 1
/// I : 1
/// JUNGOL : 2
/// OLYMPIAD : 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=788&sca=2050
/// </summary>
void CountWords::Code()
{
	string input;
	unordered_map<string, int> mapData;
	vector<string> keyList;

	while (true)
	{
		std::getline(std::cin, input);

		if (input == "END")
		{
			break;
		}

		string word;
		for (stringstream ss{ input }; ss >> word;)
		{
			if (mapData.find(word) == mapData.end())
			{
				mapData[word] = 0;
				keyList.push_back(word);
			}
			mapData[word]++;
		}

		std::sort(keyList.begin(), keyList.end());

		for (int count{ static_cast<int>(keyList.size()) }, i = 0; i < count; i++)
		{
			std::cout << keyList[i] << " : " << mapData[keyList[i]] << '\n';
		}

		mapData.clear();
		keyList.clear();
	}
}