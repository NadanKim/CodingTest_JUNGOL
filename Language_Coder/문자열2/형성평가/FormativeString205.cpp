#include "FormativeString205.h"

/// <summary>
/// ����
/// 5���� �ܾ�(�� �ܾ�� 100�� ����)�� �Է¹��� �� ���ڿ� ���ڿ�(100�� ����)�� �� ���� �Է¹޾� ���߿� �Է¹��� ���ڳ� ���ڿ���
/// ���Ե� �ܾ ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ã�� �ܾ ������ ��none���̶�� ����Ѵ�.
/// 
/// �Է� ��
/// banana
/// apple
/// melon
/// tomato
/// pear
/// n
/// to
/// 
/// ��� ��
/// banana
/// melon
/// tomato
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=93&sca=10f0
/// </summary>
void FormativeString205::Code()
{
	string arr[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	char ch;
	string str;

	std::cin >> ch >> str;
	
	bool hasFound{ false };
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].find(ch) != SIZE_MAX || arr[i].find(str) != SIZE_MAX)
		{
			hasFound = true;

			std::cout << arr[i] << '\n';
		}
	}

	if (!hasFound)
	{
		std::cout << "none";
	}
}