#include "FormativeArray102.h"

/// <summary>
/// ����
/// 5���� ������ �Է¹��� �� ù ��° �� ��° �ټ� ��° �Է¹��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 15 20 33 10 9
/// 
/// ��� ��
/// 57
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=51&sca=1090
/// </summary>
void FormativeArray102::Code()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	int sum{ arr[0] + arr[2] + arr[4] };

	std::cout << sum;
}