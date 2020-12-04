#include "FormativeFunction305.h"

/// <summary>
/// ����
/// 100�� ������ �ڿ��� N�� �Է¹޾� ¦���̸� 2�� Ȧ���̸� 3���� ������ �۾��� �ݺ��ϴٰ�
/// �� ���� 1�� �Ǹ� �׶����� �������� �۾��� Ƚ���� ����ϴ� ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 100
/// 
/// ��� ��
/// 6
/// 
/// Hint!
/// 100 �� 50 �� 25 �� 8 �� 4 �� 2 �� 1 Ƚ��(level)�� �Բ� �����ϰ� n�� 1�̸� level�� ����ϸ� �ȴ�. �Լ�(n/2 �Ǵ� n/3 level+1)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=135&sca=10d0
/// </summary>
void FormativeFunction305::Code()
{
	int n;

	std::cin >> n;

	Function(n, 0);
}

void FormativeFunction305::Function(int n, int count)
{
	if (n == 1)
	{
		std::cout << count;
		return;
	}
	
	if (n % 2 == 0)
	{
		Function(n / 2, count + 1);
	}
	else
	{
		Function(n / 3, count + 1);
	}
}