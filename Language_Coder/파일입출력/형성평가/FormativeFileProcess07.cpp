#include "FormativeFileProcess07.h"

/// <summary>
/// ����
/// ���� �⵵�� �� �⵵�� �Է¹޾Ƽ� ������ �� �� �ִ����� ���Ͽ� ����Ͻÿ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// 2000 2008
/// 
/// ��� ��
/// 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=111&sca=10i0
/// </summary>
void FormativeFileProcess07::Code()
{
	int beg, end;

	std::cin >> beg >> end;

	int count{ 0 };
	while (beg <= end)
	{
		if (beg % 400 == 0)
		{
			count++;
		}
		else if (beg % 4 == 0 && beg % 100 != 0)
		{
			count++;
		}

		beg++;
	}

	std::cout << count;
}