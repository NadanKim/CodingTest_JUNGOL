#include "FormativeString204.h"

/// <summary>
/// ����
/// 10 ������ ���� n�� �Է¹ް� n���� ���ڿ��� �Է¹��� �� �� ũ�⸦ ���Ͽ� ���� ���� ���ڿ����� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ���ڿ��� ���̴� 100�� ���ϴ�.������(�ƽ�Ű�ڵ��)���� �ڿ� ������ ���� ū ������ �Ѵ�.
/// 
/// �Է� ��
/// 3
/// notebook
/// pencil
/// eraser
/// 
/// ��� ��
/// eraser
/// notebook
/// pencil
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=92&sca=10f0
/// </summary>
void FormativeString204::Code()
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