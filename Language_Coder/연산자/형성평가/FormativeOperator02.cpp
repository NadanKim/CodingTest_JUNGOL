#include "FormativeOperator02.h"

/// <summary>
/// ����
/// �� ������ �Է¹޾Ƽ� ���� ��� �������� ������ ���� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 35 10
/// 
/// ��� ��
/// 35 / 10 = 3...5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=12&sca=1030
/// </summary>
void FormativeOperator02::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << var1 << " / " << var2 << " = " << var1 / var2 << "..." << var1 % var2;
}