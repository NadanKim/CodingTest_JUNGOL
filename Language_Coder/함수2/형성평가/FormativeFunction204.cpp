#include "FormativeFunction204.h"

/// <summary>
/// ����
/// ���� n�� �Է¹޾� 2n�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (1 �� n �� 20)
/// 
/// �Է� ��
/// 10
/// 
/// ��� ��
/// 1024
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=78&sca=10c0
/// </summary>
void FormativeFunction204::Code()
{
	int n;

	std::cin >> n;

	Function(n);
}

void FormativeFunction204::Function(int n)
{
	int result{ 1 };

	for (int i = 0; i < n; i++)
	{
		result *= 2;
	}

	std::cout << result;
}