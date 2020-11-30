#include "FormativeFunction202.h"

/// <summary>
/// ����
/// �� ���� �Ǽ��� �Է¹޾� ������ �������� ���ϰ� �� ������ ���̿� �����ϴ� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ��, �Է¹޴� �� �Ǽ��� ����̸� �� ������ ���̶�� ���� �� �������� �����Ѵ�.
/// 
/// �Է� ��
/// 12.0 34.789
/// 
/// ��� ��
/// 2
/// 
/// Hint!
/// �� ���� �������� ���Ͽ� ������ ����ȯ�� �� �� �����غ���.
/// �� �� ������ ������ ��� ������ �Ǹ� ���� ���� ��� ��ȯ�ϱ� �� ������ �����ٰ� ���ٸ� ������ ������ ���Ѿ� �Ѵ�.
/// ū ���� ������ ������ �۰ų� �����Ƿ� ������ ������ �ȴ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=76&sca=10c0
/// </summary>
void FormativeFunction202::Code()
{
	float var1, var2;
	
	std::cin >> var1 >> var2;

	Function(var1, var2);
}

void FormativeFunction202::Function(float var1, float var2)
{
	int num1{ static_cast<int>(ceil(sqrt(var1 < var2 ? var1 : var2))) };
	int num2{ static_cast<int>(floor(sqrt(var1 > var2 ? var1 : var2))) };

	std::cout << num2 - num1 + 1;
}