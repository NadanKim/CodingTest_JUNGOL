#include "FormativeArray204.h"

/// <summary>
/// ����
/// 4�� 3���� �迭�� �����ϰ� �Ʒ��� ������ �ʱ�ȭ �� �� ���ʴ�� ����� �� �迭�� ��� ���� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// { {3, 5, 9}, { 2, 11, 5 }, { 8, 30, 10 }, { 22, 5, 1 }}
/// 
/// ��� ��
/// 3 5 9
/// 2 11 5
/// 8 30 10
/// 22 5 1
/// 111
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=63&sca=10a0
/// </summary>
void FormativeArray204::Code()
{
	int arr[4][3]{
		3, 5, 9,
		2, 11, 5,
		8, 30, 10,
		22, 5, 1
	};

	int sum{ 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];

			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	std::cout << sum;
}