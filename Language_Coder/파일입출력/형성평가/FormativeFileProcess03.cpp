#include "FormativeFileProcess03.h"

/// <summary>
/// ����
/// �� ������ �� ���� ������(+, -, *, /, %)�� �Է� �޾� �Է� ������� ����ϴ� ������ ����Ͻÿ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// 82 51 +
/// 
/// ��� ��
/// 82 + 51 = 133
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=107&sca=10i0
/// </summary>
void FormativeFileProcess03::Code()
{
	int var1, var2;
	char ch;

	std::cin >> var1 >> var2 >> ch;
	std::cout << var1 << ' ' << ch << ' ' << var2 << " = ";

	switch (ch)
	{
	case '+':
		std::cout << var1 + var2;
		break;
	case '-':
		std::cout << var1 - var2;
		break;
	case '*':
		std::cout << var1 * var2;
		break;
	case '/':
		std::cout << var1 / var2;
		break;
	case '%':
		std::cout << var1 % var2;
		break;
	}
}