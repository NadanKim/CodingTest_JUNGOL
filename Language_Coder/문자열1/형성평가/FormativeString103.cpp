#include "FormativeString103.h"

/// <summary>
/// ����
/// 100�� ������ ���ڿ��� �Է¹޾Ƽ� �����ڿ� ���ڸ� ����ϵ� �����ڴ� ��� �ҹ��ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// Hancom1234@cqclass.com
/// 
/// ��� ��
/// hancom1234cqclasscom
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=84&sca=10e0
/// </summary>
void FormativeString103::Code()
{
	string str;

	std::cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			std::cout << static_cast<char>(tolower(str[i]));
		}
		else if (isdigit(str[i]))
		{
			std::cout << str[i];
		}
	}
}