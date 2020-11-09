#include "FormativeArray106.h"

/// <summary>
/// ����
/// 6���� ���ڹ迭�� ����� {'J' 'U' 'N' 'G' 'O' 'L'} ���� �ʱ�ȭ �� �� ���� �� ���� �Է¹޾� �迭������
/// ��ġ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// ù ��° ��ġ�� 0���̸� �迭�� ���� ���ڰ� �ԷµǸ� "none" ��� �޽����� ����ϰ� ������ ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��	/// �Է� ��
/// L		/// B
///			///
/// ��� ��	/// ��� ��
/// 5		/// none
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=55&sca=1090
/// </summary>
void FormativeArray106::Code()
{
	const char arr[6]{ 'J', 'U', 'N', 'G', 'O', 'L' };

	char ch;

	std::cin >> ch;

	int idx{ -1 };
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == ch)
		{
			idx = i;
			break;
		}
	}

	if (idx != -1)
	{
		std::cout << idx;
	}
	else
	{
		std::cout << "none";
	}
}