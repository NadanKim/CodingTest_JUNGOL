#include "FormativeString106.h"

/// <summary>
/// ����
/// ���ڿ�(100�� ����)�� �Է¹��� �� ������ �Է¹޾� �ش���ġ�� ���ڸ� �����ϰ� ����ϴ� �۾��� �ݺ��ϴٰ�
/// ���� 1���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// ù ��° ������ ��ġ�� 1�̸� ���� �Է¹��� ��ȣ�� ���ڿ��� ���� �̻��̸� ������ ���ڸ� �����Ѵ�.
/// 
/// * ����¿����� ���ѱ۾��� ���
/// 
/// �ԡ���� ��
/// word
/// 3
/// wod
/// 1
/// od
/// 10
/// o
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=87&sca=10e0
/// </summary>
void FormativeString106::Code()
{
	string str;

	std::cin >> str;

	size_t n;

	do
	{
		std::cin >> n;

		if (n <= 0)
		{
			n = 1;
		}
		else if (n > str.size())
		{
			n = str.size();
		}

		str.replace(n - 1, 1, "");

		std::cout << str << '\n';
	} while (str.size() > 1);
}