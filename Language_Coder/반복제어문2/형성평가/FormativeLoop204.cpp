#include "FormativeLoop204.h"

/// <summary>
/// ����
/// 100 ������ �ڿ��� n�� �Է¹ް� n���� ������ �Է¹޾� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// (����� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� ����ϵ��� �Ѵ�.)
/// 
/// �Է� ��
/// 3
/// 99 65 30
/// 
/// ��� ��
/// 64.67
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=33&sca=1070
/// </summary>
void FormativeLoop204::Code()
{
	int n;
	int sum{ 0 };

	std::cin >> n;

	int var;
	for (int i = 0; i < n; i++)
	{
		std::cin >> var;

		sum += var;
	}

	float avg{ static_cast<float>(sum) / n };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << avg;
}