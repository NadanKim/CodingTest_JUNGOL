#include "FormativeFileProcess09.h"

/// <summary>
/// ����
/// ������ ������ �� ������ �Է¹޾Ƽ� ��ü ���̿� ���� �� �ܾ ����Ͻÿ�.
/// ��, ������ ���̴� �ִ� 100�� �̳��̰�, ���̰� ���� �� �ܾ ���� ���� ��� �������� �и��Ͽ� �� �ٿ� �Է� ����
/// ������� ��� ����Ͻÿ�.
/// 
/// �� ���������� �ܾ�� ? �������� �и��ϴ� ���ڿ��� ���Ѵ�.
/// "i am a boy." ���ڿ��� ��� "i", "am", "a", "boy."�� ���� �ܾ��̴�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// The largest organ in the body is the liver.
/// 
/// ��� ��
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