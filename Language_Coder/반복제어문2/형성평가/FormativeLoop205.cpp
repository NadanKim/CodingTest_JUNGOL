#include "FormativeLoop205.h"

/// <summary>
/// ����
/// 10���� ������ �Է¹޾� �Է¹��� ���� �� ¦���� ������ Ȧ���� ������ ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 10 20 30 55 66 77 88 99 100 15
/// 
/// ��� ��
/// even : 6
/// odd: 4
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=34&sca=1070
/// </summary>
void FormativeLoop205::Code()
{
	int even{ 0 }, odd{ 0 };

	int var;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> var;

		if (var % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	std::cout << "even : " << even << '\n';
	std::cout << "odd : " << odd;
}