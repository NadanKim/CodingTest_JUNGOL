#include "FormativeString206.h"

/// <summary>
/// ����
/// �� ���� ���ڿ� A�� B �� ���� ���� n�� �Է¹޾Ƽ� A�� B�� �����ϰ�, ����� ���ڿ� A���� n���� ���ڸ� B�� ������ ��
/// A�� B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (1��n,A,B��100)
/// 
/// �Է� ��
/// banana apple 3
/// 
/// ��� ��
/// bananaapple
/// banle
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=94&sca=10f0
/// </summary>
void FormativeString206::Code()
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