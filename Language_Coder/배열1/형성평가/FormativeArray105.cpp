#include "FormativeArray105.h"

/// <summary>
/// ����
/// 6���� �����Ը� �Է¹޾� �������� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// ����� �ݿø��Ͽ� �Ҽ� ù°�ڸ������� �Ѵ�.
/// 
/// �Է� ��
/// 23.2 39.6 66.4 50.0 45.6 48.0
/// 
/// ��� ��
/// 45.5
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=54&sca=1090
/// </summary>
void FormativeArray105::Code()
{
	float weight[6];

	for (int i = 0; i < 6; i++)
	{
		std::cin >> weight[i];
	}

	float sum{ 0 };
	for (int i = 0; i < 6; i++)
	{
		sum += weight[i];
	}

	float avg{ sum / 6 };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << avg;
}