#include "FormativeLoop305.h"

/// <summary>
/// ����
/// �ڿ��� n�� �Է¹޾� "��� ��"�� ���� n�ٿ� ��ó ���������� ���ĵ� �ﰢ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// ����! '*'�� '*'���̿� ������ ���� �ٻ��̿��� ������ ����.
/// 
/// �Է� ��
/// 3
/// 
/// ��� ��
///     *
///   ***
/// *****
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=44&sca=1080
/// </summary>
void FormativeLoop305::Code()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
}