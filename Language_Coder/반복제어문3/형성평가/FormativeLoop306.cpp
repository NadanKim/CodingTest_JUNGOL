#include "FormativeLoop306.h"

/// <summary>
/// ����
/// �ڿ��� n�� �Է¹޾� "��� ��"�� ���� �������� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// ����!���ڸ� �������� �����ϵ� �ٻ��̿� ������ ����.
/// 
/// �Է� ��
/// 3
/// 
/// ��� ��
///     1
///   1 2
/// 1 2 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=45&sca=1080
/// </summary>
void FormativeLoop306::Code()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << "  ";
		}

		for (int j = 1; j <= i; j++)
		{
			std::cout << j << ' ';
		}
		std::cout << '\n';
	}
}