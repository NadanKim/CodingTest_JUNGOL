#include "FormativeConditional01.h"

/// <summary>
/// ����
/// �� ���� ������ �Է¹޾� ū ������ ���� ���� �� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 50 85
/// 
/// ��� ��
/// 35
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=20&sca=1050
/// </summary>
void FormativeConditional01::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	if (var1 > var2)
	{
		std::cout << var1 - var2;
	}
	else
	{
		std::cout << var2 - var1;
	}
}