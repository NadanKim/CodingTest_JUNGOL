#include "FormativeFunction302.h"

/// <summary>
/// ����
/// �ڿ��� N�� �Է¹޾� N�� Ȧ���� ��쿡�� 1���� N������ Ȧ���� ¦���� ���� 2���� N������ ¦���� ��� ����ϴ�
/// ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 15
/// 
/// ��� ��
/// 1 3 5 7 9 11 13 15
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=132&sca=10d0
/// </summary>
void FormativeFunction302::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void FormativeFunction302::Function(int n)
{
	if (n <= 0)
	{
		return;
	}

	Function(n - 2);
	std::cout << n << ' ';
}