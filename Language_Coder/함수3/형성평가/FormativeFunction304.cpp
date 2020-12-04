#include "FormativeFunction304.h"

/// <summary>
/// ����
/// ù ��°�� 1, �� ��°�� 2, �� ��°���ʹ� ���� �� ���� ���� 100���� ���� �������� �̷���� ������ �ִ�.
/// 
/// 100 ������ �ڿ��� N�� �Է¹޾� ����Լ��� �̿��Ͽ� N��° ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 8
/// 
/// ��� ��
/// 92
/// 
/// Hint!
/// 1 2 2 4 8 32 56 92 ...
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=134&sca=10d0
/// </summary>
void FormativeFunction304::Code()
{
	int n;

	std::cin >> n;

	Function(1, 2, n - 1);
}

void FormativeFunction304::Function(int num1, int num2, int n)
{
	if (n == 0)
	{
		std::cout << num1;
		return;
	}

	Function(num2, (num1 * num2) % 100, n - 1);
}