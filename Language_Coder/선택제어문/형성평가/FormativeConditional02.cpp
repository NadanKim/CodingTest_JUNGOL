#include "FormativeConditional02.h"

/// <summary>
/// ����
/// ������ �Է¹޾� 0 �̸� "zero" ����̸� "plus" �����̸� "minus" ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 0
/// 
/// ��� ��
/// zero
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=21&sca=1050
/// </summary>
void FormativeConditional02::Code()
{
	int var;

	std::cin >> var;

	if (var > 0)
	{
		std::cout << "plus";
	}
	else if (var < 0)
	{
		std::cout << "minus";
	}
	else
	{
		std::cout << "zero";
	}
}