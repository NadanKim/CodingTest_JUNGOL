#include "FormativeFileProcess06.h"

/// <summary>
/// ����
/// 100 ������ ������ �Է¹޾� ���� ���� ����Ͻÿ�. ��*���� �����θ� 1ĭ�� �������� �и��Ѵ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// 3
/// 
/// ��� ��
///     *
///   * * *
/// * * * * *
///   * * *
///     *
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=110&sca=10i0
/// </summary>
void FormativeFileProcess06::Code()
{
	int var;

	std::cin >> var;

	for (int i = 1; i <= var; i++)
	{
		for (int j = 0; j < var - i; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << "* ";
		}

		std::cout << '\n';
	}

	for (int i = var - 1; i >= 1; i--)
	{
		for (int j = 0; j < var - i; j++)
		{
			std::cout << "  ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			std::cout << "* ";
		}

		std::cout << '\n';
	}
}