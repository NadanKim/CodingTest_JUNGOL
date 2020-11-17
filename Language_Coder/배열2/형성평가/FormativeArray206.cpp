#include "FormativeArray206.h"

/// <summary>
/// ����
/// ������ ���� ������ �迭�� ������ �� 1���� 1���� 3�� 5���� ���� 1�� �ʱ�ȭ�ϰ� �������� ��� 0���� �ʱ�ȭ �� ��
/// 2����ʹ� �ٷ� ������ ���ʰ� �������� ���� ���Ͽ� ä�� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// ��� ��
/// 1 0 1 0 1
/// 0 2 0 2 0
/// 2 0 4 0 2
/// 0 6 0 6 0
/// 6 0 12 0 6
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=65&sca=10a0
/// </summary>
void FormativeArray206::Code()
{
	int arr[5][5]{
		1, 0, 1, 0, 1,
	};

	for (int i = 1; i < 5; i++)
	{
		// ���� �� �� ����
		arr[i][0] = arr[i - 1][1];

		// ������ �� �� ����
		arr[i][4] = arr[i - 1][3];

		for (int j = 1; j < 4; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}