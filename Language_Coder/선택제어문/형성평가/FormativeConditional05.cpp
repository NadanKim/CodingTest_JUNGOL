#include "FormativeConditional05.h"

/// <summary>
/// ����
/// 1~12������ ������ �Է¹޾� �ش� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 2
/// 
/// ��� ��
/// 28
/// 
/// Hint!
/// ����� ��� 1������ 12������ �ϼ��� ���� 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31���̴�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=24&sca=1050
/// </summary>
void FormativeConditional05::Code()
{
	int var;

	std::cin >> var;

	switch (var)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		std::cout << 31;
		break;
	case 2:
		std::cout << 28;
		break;
	default:
		std::cout << 30;
		break;
	}
}