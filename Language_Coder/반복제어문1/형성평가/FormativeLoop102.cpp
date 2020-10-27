#include "FormativeLoop102.h"

/// <summary>
/// ����
/// 0 �̻��� �������� �������� ���еǾ� �ݺ������� �־�����.
/// 0�� �ԷµǸ� �ݺ����� ���߰� �� ������ �Է¹��� ���鿡 ���Ͽ�
/// Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 9 7 10 5 33 65 0
/// 
/// ��� ��
/// odd : 5
/// even : 1
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=26&sca=1060
/// </summary>
void FormativeLoop102::Code()
{
	int var;
	int odd{ 0 }, even{ 0 };

	while (true)
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		if (var % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	std::cout << "odd : " << odd << '\n';
	std::cout << "even : " << even;
}