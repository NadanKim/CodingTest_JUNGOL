#include "MessageDecoding.h"

/// <summary>
/// 문제
/// 최근 농부 창호에게서 메시지를 암호화(encryption)에 대해서 배운 소들은 너무나 신이 나있다.
/// 그들은 다른 농장의 소들과 미팅을 할 때 은밀한 메시지를 사용할 경우 이 방법을 사용할 수 있을 것이라고 생각했다.
/// 소들이 사용하는 암호화 방법은 복잡한 DES 혹은 BlowFish 와 같은 좋은 방법이 아니고 단순히 치환 하는 암호화 기법이다.
/// 
/// 소들의 경우 복호화(암호를 해독함)하는 시간이 오래 걸리기 때문에,
/// 소들과 대화를 할 수 있는 당신에게 복호화 키와 암호 문자를 입력으로 받아 원문을 구하는 프로그램을 구현 해주기를 요청했다.
/// 
/// 복호화 키는 26개의 소문자로 주어지며, a, b, c, d... 를 순서대로 복호화 키 문자로 대치한다는 것을 뜻한다.
/// 
/// 예를 들어, 복호화 키가 "eydbkmiqugjxlvtzpnwohracsf" 와 같이 주어진다고 하자,
/// 그러면 이는 다음과 같다 - a 문자는 e, b 문자는 y, ..., z 문자는 f로 바꿔 준다.
/// 암호화 된 문자는 대소문자 혹은 공백이 올수 있고 대문자는 대문자로 소문자는 소문자로 치환 규칙에 맞게 출력하고, 공백문자는 그대로 출력한다.
///
/// 입력 형식
/// 첫 줄에는 복호화 키가 26개의 소문자로 주어지고, 다음 줄에는 암호화 된 문자가 최대 80 문자로 입력된다.
/// 
/// 출력 형식
/// 암호화 된 문장을 복호화 시켜 원문을 출력한다.
///
/// 입력 예						/// 입력 예
/// eydbkmiqugjxlvtzpnwohracsf
/// Kifq oua zarxa suar bti yaagrj fa xtfgrj
///
/// 출력 예						/// 출력 예
/// Jump the fence when you seeing me coming
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1153&sca=2050
/// </summary>
void MessageDecoding::Code()
{
	string decodeKey;

	std::cin >> decodeKey;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	string str;
	std::getline(std::cin, str);

	string result;
	for (int count{ static_cast<int>(str.size()) }, i = 0; i < count; i++)
	{
		if (!std::isalpha(str[i]))
		{
			std::cout << ' ';
			continue;
		}

		char c{ decodeKey[CharToIndex(str[i])] };
		if (std::isupper(str[i]))
		{
			c = std::toupper(c);
		}
		std::cout << c;
	}
}

int MessageDecoding::CharToIndex(char c)
{
	if (std::isupper(c))
	{
		return c - 'A';
	}
	return c - 'a';
}