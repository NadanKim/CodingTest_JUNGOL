#include "FormativeConditional03.h"

/// <summary>
/// ����
/// �⵵�� �Է¹޾� ����(leap year)���� ���(common year)���� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 2008
/// 
/// ��� ��
/// leap year
/// 
/// Hint!
/// 400���� ����������� �����̴�. �Ǵ� 4�� ����������� 100���� ����������� ������ �����̴�. �������� ��� ����̴�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=22&sca=1050
/// </summary>
void FormativeConditional03::Code()
{
	int year;

	std::cin >> year;

	bool isLeapYear{ (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) };
	if (isLeapYear)
	{
		std::cout << "leap year";
	}
	else
	{
		std::cout << "common year";
	}
}