#include "FormativeString202.h"

/// <summary>
/// ����
/// "flower" "rose" "lily" "daffodil" "azalea" 5���� �ܾ �ʱ�ȭ�� �� �� ���� ���ڸ� �Է¹޾Ƽ� �Է¹��� ���ڰ� �� ��°��
/// �� ��°�� ���Ե� �ܾ ��� ����ϰ� ������ �ٿ� ����� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// �ش�Ǵ� �ܾ ������ "0"�� ù �ٿ� ����Ѵ�.
/// 
/// �Է� ��
/// l
/// 
/// ��� ��
/// flower
/// lily
/// 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=90&sca=10f0
/// </summary>
void FormativeString202::Code()
{
	string arr[]{ "flower", "rose", "lily", "daffodil", "azalea" };
	
	char ch;

	std::cin >> ch;

	int count{ 0 };

	for (int i = 0; i < 5; i++)
	{
		if (arr[i][1] == ch || arr[i][2] == ch)
		{
			std::cout << arr[i] << '\n';

			count++;
		}
	}

	std::cout << count;
}