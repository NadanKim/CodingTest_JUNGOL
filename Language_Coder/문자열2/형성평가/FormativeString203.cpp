#include "FormativeString203.h"

/// <summary>
/// ����
/// �ܾ �Է¹޴ٰ� "0"�� �Է¹����� �Է��� �����ϰ� �� ������ �Է¹��� �ܾ��� ������ ����ϰ� Ȧ�� ��° �Է¹��� �ܾ 
/// �� �ٿ� 1���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// �ܾ��� ������ 50���� ���� �ʰ�, �ܾ��� ���̴� 100�� �����̴�.
/// 
/// �Է� ��
/// keyboard
/// mouse
/// monitor
/// 0
/// 
/// ��� ��
/// 3
/// keyboard
/// monitor
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=91&sca=10f0
/// </summary>
void FormativeString203::Code()
{
	string str;

	std::cin >> str;

	for (size_t i = 0; i < str.size(); i++)
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