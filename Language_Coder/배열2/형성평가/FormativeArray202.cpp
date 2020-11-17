#include "FormativeArray202.h"

/// <summary>
/// ����
/// �л����� ������ �Է��� �޴ٰ� 0�� �ԷµǸ� �� ������ �Է¹��� ������ 10�� ������ �����Ͽ� �����뺰 �л� ���� ����ϴ�
/// ���α׷��� �ۼ��Ͻÿ�. (1�� ���� ������ ������� �ʴ´�.)
/// 
/// �л��� �ִ� 100�������̴�.
/// 
/// �Է� ��
/// 63 80 95 100 46 64 88 0
/// 
/// ��� ��
/// 100 : 1 person
/// 90 : 1 person
/// 80 : 2 person
/// 60 : 2 person
/// 40 : 1 person
/// 
/// Hint!
/// 10���� ���� ���� �������� �迭�� ���� �� ����Ѵ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=61&sca=10a0
/// </summary>
void FormativeArray202::Code()
{
	int score[11]{};

	int var;
	while(true)
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		score[var / 10]++;
	}

	for (int i = 10; i >= 0; i--)
	{
		if (score[i] > 0)
		{
			std::cout << i * 10 << " : " << score[i] << " person\n";
		}
	}
}