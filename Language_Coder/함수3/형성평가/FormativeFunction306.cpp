#include "FormativeFunction306.h"

/// <summary>
/// ����
/// 3�ڸ��� �̷���� �ڿ��� 3���� �Է¹޾� �� ������ ���� ���� �� �� ������� �� �ڸ� ���ڵ��� 0�� ������ ��� ������
/// ���� ���Ͽ� ����ϴ� ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 100 123 111
/// 
/// ��� ��
/// 270
/// 
/// Hint!
/// �Է¿����� �� ���� ���� 1365300�̴�. �׷��Ƿ� 1 * 3 * 6 * 5 * 3 = 270 1�� �ڸ��� * 1�� �ڸ��� ������ ���� �ڸ����� ��
/// (�� 1�� �ڸ����� 0�̸� 1�� �ٲپ ���Ѵ�.)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=136&sca=10d0
/// </summary>
void FormativeFunction306::Code()
{
	int num1, num2, num3;

	std::cin >> num1 >> num2 >> num3;

	Function(num1 * num2 * num3, 1);
}

void FormativeFunction306::Function(int num, int result)
{
	if (num == 0)
	{
		std::cout << result;
		return;
	}

	int var{ num % 10 };
	var = (var != 0 ? var : 1);

	Function(num / 10, result * var);
}