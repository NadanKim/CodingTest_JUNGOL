#include "FormativeFunction102.h"

/// <summary>
/// ����
/// 1���� ���޹��� �������� ���� ����ϴ� �Լ��� �ۼ��ϰ� 1000 ������ �ڿ����� �Է¹޾� �ۼ��� �Լ��� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 100
/// 
/// ��� ��
/// 1050
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=71&sca=10b0
/// </summary>
void FormativeFunction102::Code()
{
	int var;
	
	std::cin >> var;

	Function(var);
}

void FormativeFunction102::Function(int var)
{
	int sum{ 0 };

	while (var > 0)
	{
		sum += var--;
	}

	std::cout << sum;
}