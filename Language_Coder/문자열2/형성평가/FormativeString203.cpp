#include "FormativeString203.h"

/// <summary>
/// ����
/// �ܾ �Է¹޴ٰ� "0"�� �Է¹����� �Է��� �����ϰ� �� ������ �Է¹��� �ܾ��� ������ ����ϰ� Ȧ�� ��° �Է¹��� �ܾ 
/// �� �ٿ� 1���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// �ܾ��� ������ 50���� ���� �ʰ�, �ܾ��� ���̴� 100�� �����̴�.
/// 
/// �Է� ��
/// keyboard
/// mouse
/// monitor
/// 0
/// 
/// ��� ��
/// 3
/// keyboard
/// monitor
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=91&sca=10f0
/// </summary>
void FormativeString203::Code()
{
	int count{ 0 };
	string arr[50];

	for (; count < 50; count++)
	{
		std::cin >> arr[count];

		if (arr[count] == "0")
		{
			break;
		}
	}

	std::cout << count << '\n';

	for (int i = 0; i < count; i += 2)
	{
		std::cout << arr[i] << '\n';
	}
}