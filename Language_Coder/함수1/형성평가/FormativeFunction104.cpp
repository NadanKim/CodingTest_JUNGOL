#include "FormativeFunction104.h"

/// <summary>
/// ����
/// �� ���� ���� �ƴ� ������ �Է¹޾� ū ���� �������� ���� ���� ������ �� �������
/// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// (�� ������ ���޹޾� ������ ���� �����ϴ� �Լ��� �̿��� ��)
/// 
/// �Է� ��
/// 8 10
/// 
/// ��� ��
/// 36
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=73&sca=10b0
/// </summary>
void FormativeFunction104::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << Function(var1, var2);
}

int FormativeFunction104::Function(int var1, int var2)
{
	var1 *= var1;
	var2 *= var2;

	int big{ var1 > var2 ? var1 : var2 };
	int small{ var1 < var2 ? var1 : var2 };
	
	return big - small;
}