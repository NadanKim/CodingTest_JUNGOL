#include "FormativeFunction205.h"

/// <summary>
/// ����
/// �� ���� �Ǽ��� �Է¹޾� �հ�� ����� ���Ͽ� ����� �ݿø��� ������ ����ϰ�,
/// ������ �Է¹��� ���� ���� ���� �ݿø��� �� �հ�� ����� ���Ͽ� ����� �ݿø��� �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 153.74 34.59 109.5
/// 
/// ��� ��
/// 99
/// 100
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=79&sca=10c0
/// </summary>
void FormativeFunction205::Code()
{
	float arr[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	Function(arr);
}

void FormativeFunction205::Function(float arr[])
{
	std::cout << static_cast<int>(floor((arr[0] + arr[1] + arr[2]) / 3 + 0.5f)) << '\n';

	for (int i = 0; i < 3; i++)
	{
		arr[i] = floor(arr[i] + 0.5f);
	}
	std::cout << static_cast<int>(floor((arr[0] + arr[1] + arr[2]) / 3 + 0.5f)) << '\n';
}