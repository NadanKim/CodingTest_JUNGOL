#include "FormativeLoop303.h"

/// <summary>
/// ����
/// �ڿ��� n�� �Է¹޾� "��� ��"�� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// ����!'*'�� '*'���̿� ������ ���� �ٻ��̿��� ������ ����.
/// 
/// �Է� ��
/// 3
/// 
/// ��� ��
/// *
/// **
/// ***
/// **
/// *
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=42&sca=1080
/// </summary>
void FormativeLoop303::Code()
{
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}