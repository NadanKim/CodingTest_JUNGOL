#include "FormativeArray203.h"

/// <summary>
/// ����
/// 10 �̸��� �ڿ��� �� ���� �Է¹޾Ƽ�
/// ù ��° �װ� �� ��° ���� �Է¹��� ���� �ʱ�ȭ ��Ų ��
/// �� ��° �׺��ʹ� �����װ� ������ ���� ���Ͽ�
/// �� ���� 1�� �ڸ��� ä���� ���ʷ� 10���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 3 5
/// 
/// ��� ��
/// 3 5 8 3 1 4 5 9 4 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=62&sca=10a0
/// </summary>
void FormativeArray203::Code()
{
	int num1, num2;

	std::cin >> num1 >> num2;

	int arr[10]{ num1, num2 };

	for (int i = 2; i < 10; i++)
	{
		arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
}