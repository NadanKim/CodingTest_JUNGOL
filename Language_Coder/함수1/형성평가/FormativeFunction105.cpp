#include "FormativeFunction105.h"

/// <summary>
/// ����
/// 3�� �л��� 3���� ������ �Է¹޾� �� ���� �л��� ������ ����ϴ� ����ȭ�� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 50 80 100
/// 96 88 66
/// 100 85 90
/// 
/// ��� ��
/// 50 80 100 230
/// 96 88 66 250
/// 100 85 90 275
/// 246 253 256 755
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=74&sca=10b0
/// </summary>
void FormativeFunction105::Code()
{
	int score[3][3]{};

	for (int i = -0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> score[i][j];
		}
	}

	Function(score);
}

void FormativeFunction105::Function(int score[3][3])
{
	int sumScore[4][4]{};

	for (int i = -0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumScore[i][j] = score[i][j];
			sumScore[i][3] += score[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumScore[3][i] += sumScore[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << sumScore[i][j] << ' ';
		}
		std::cout << '\n';
	}
}