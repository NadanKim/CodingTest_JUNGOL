#include "FormativeFileProcess02.h"

/// <summary>
/// ����
/// 3���� ������ �Է� �޾� �հ�� ����� ���Ͽ� ����ϵ� ����� �����κи� ����ϰ� �������� ���� ���� ����Ͻÿ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// 36 85 100
/// 
/// ��� ��
/// 221 73...2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=106&sca=10i0
/// </summary>
void FormativeFileProcess02::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int sum{ var1 + var2 + var3 };

	std::cout << sum << ' ' << sum / 3 << "..." << sum % 3;
}