#include "FormativeLoop202.h"

/// <summary>
/// ����
/// 100 ������ �� ���� ������ �Է¹޾� ���� ������ ū ������ ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 10 5
/// 
/// ��� ��
/// 5 6 7 8 9 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=31&sca=1070
/// </summary>
void FormativeLoop202::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	int small{ var1 < var2 ? var1 : var2 };
	int big{ var1 < var2 ? var2 : var1 };

	while (small <= big)
	{
		std::cout << small++ << ' ';
	}
}