#include "FormativeOperator04.h"

/// <summary>
/// ����
/// �� ������ �Է¹޾� ù ��° ���� ��ġ���������ڸ� ����ϰ� �� ��° ���� ��ġ���ҿ����ڸ� ����Ͽ� ����ϰ�
/// �ٲ� ���� �ٽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 10 15
/// 
/// ��� ��
/// 11 15
/// 11 14
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=14&sca=1030
/// </summary>
void FormativeOperator04::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	std::cout << ++var1 << ' ' << var2-- << '\n';
	std::cout << var1 << ' ' << var2;
}