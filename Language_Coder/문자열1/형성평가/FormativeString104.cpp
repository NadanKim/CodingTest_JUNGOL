#include "FormativeString104.h"

/// <summary>
/// ����
/// �ܾ�� ���� �� ���� �Է¹޾Ƽ� �ܾ�� �Է¹��� ���ڿ� ���� ���ڸ� ã�Ƽ� �� ��ġ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �ܾ�� ù ��° ������ ��ġ�� 0���� �ϰ� ã�� ���ڰ� ���� ���� ���� ó�� ������ ��ġ�� ����Ѵ�.
/// ���� ã�� ���ڰ� ���� ���� "No"��� ����Ѵ�.��ҹ��ڴ� �����Ǹ� �ܾ�� 100�� �����̴�.
/// 
/// �Է� ��
/// Jungol.co.kr o
/// 
/// ��� ��
/// 4
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=85&sca=10e0
/// </summary>
void FormativeString104::Code()
{
	string str;
	char ch;

	std::cin >> str >> ch;

	size_t pos{ str.find(ch, 0) };
	
	if (pos != ULLONG_MAX)
	{
		std::cout << pos;
	}
	else
	{
		std::cout << "No";
	}
}