#include "FormativeFunction103.h"

/// <summary>
/// ����
/// �ڿ����� �Է¹޾� �Ʒ��� ���� �簢���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// �־����� ���� 100������ �ڿ����̴�.
/// (�Լ��� �ۼ��Ͻÿ�.)
/// 
/// �Է� ��
/// 3
/// 
/// ��� ��
/// 1 2 3
/// 2 4 6
/// 3 6 9
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=72&sca=10b0
/// </summary>
void FormativeFunction103::Code()
{
	int var;

	std::cin >> var;

	Function(var);
}

void FormativeFunction103::Function(int var)
{
	for (int i = 1; i <= var; i++)
	{
		for (int j = 1; j <= var; j++)
		{
			std::cout << i * j << ' ';
		}
		std::cout << '\n';
	}
}