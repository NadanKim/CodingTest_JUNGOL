#include "FormativeLoop302.h"

/// <summary>
/// ����
/// 1���� 100������ ���� �� �� ���� �Է¹޾� 100 ���� ���� ������� ���ʷ� ����ϴٰ�
/// 10 �� ����� ��µǸ� ���α׷��� �����ϵ��� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 7
/// 
/// ��� ��
/// 7 14 21 28 35 42 49 56 63 70
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=41&sca=1080
/// </summary>
void FormativeLoop302::Code()
{
	int var;

	std::cin >> var;

	int num{ var };
	do
	{
		std::cout << num << ' ';
		num += var;
	} while ((num - var) % 10 != 0 && num < 100);
}