#include "FormativeOperator03.h"

/// <summary>
/// ����
/// ���簢���� ���ο� ������ ���̸� ������ ������ �Է¹��� �� ������ ���̴� 5 ������Ű�� ������ ���̴� 2���Ͽ� ������ �� ������ ���� ������ ���� ���̸� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 20 15
/// 
/// ��� ��
/// width = 25
/// length = 30
/// area = 750
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=13&sca=1030
/// </summary>
void FormativeOperator03::Code()
{
	int width, length;

	std::cin >> width >> length;

	width += 5;
	length *= 2;

	std::cout << "width = " << width << '\n';
	std::cout << "length = " << length << '\n';
	std::cout << "area = " << width * length;
}