#include "FormativeLoop304.h"

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
/// *****
///  ***
///   *
///  ***
/// *****
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=43&sca=1080
/// </summary>
void FormativeLoop304::Code()
{
	int n;

	std::cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}