#include "FormativeLoop203.h"

/// <summary>
/// ����
/// ������ �Է¹޾Ƽ� 1���� �Է¹��� ���������� 5�� ����� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 20
/// 
/// ��� ��
/// 50
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=32&sca=1070
/// </summary>
void FormativeLoop203::Code()
{
	int var;
	int sum{ 0 };

	std::cin >> var;

	for (int i = 5; i <= var; i += 5)
	{
		sum += i;
	}

	std::cout << sum;
}