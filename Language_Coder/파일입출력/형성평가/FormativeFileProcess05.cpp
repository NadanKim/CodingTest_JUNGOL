#include "FormativeFileProcess05.h"

/// <summary>
/// ����
/// 0 �� �Էµ� ������ ������ �Է¹޾� 3�� ����̸鼭 5�� ����� ������ ��� ����ϰ� ���� �ٿ� �� ������ ����Ͻÿ�.
/// ��, �Ѱ��� ���� ��쿡�� "0" �� ����Ѵ�.�ִ� 1, 000���� ������ �Էµȴ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��								/// �Է� ��
/// 10 20 30 55 66 77 88 99 100 15 0	/// 6 11 14 10 16 23 0
/// 
/// ��� ��								/// ��� ��
/// 30 15								/// 0
/// 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=109&sca=10i0
/// </summary>
void FormativeFileProcess05::Code()
{
	int var, count{ 0 };

	while (true)
	{
		std::cin >> var;

		if (var == 0)
		{
			break;
		}

		if (var % 3 == 0 && var % 5 == 0)
		{
			count++;

			std::cout << var << ' ';
		}
	}

	if (count > 0)
	{
		std::cout << '\n';
	}
	std::cout << count;
}