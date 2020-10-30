#include "FormativeLoop206.h"

/// <summary>
/// ����
/// �� ���� ������ �Է¹޾� �� ���� ����(�� ������ ����)�� 3�� ����̰ų� 5�� ����� ������ �հ� �����
/// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// (����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.)
/// 
/// �Է� ��
/// 10 15
/// 
/// ��� ��
/// sum : 37
/// avg: 12.3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=35&sca=1070
/// </summary>
void FormativeLoop206::Code()
{
	int var1, var2;

	std::cin >> var1 >> var2;

	int small{ var1 < var2 ? var1 : var2 };
	int big{ var1 < var2 ? var2 : var1 };

	int sum{ 0 }, count{ 0 };
	while (small <= big)
	{
		if (small % 3 == 0 || small % 5 == 0)
		{
			sum += small;
			count++;
		}
		small++;
	}

	float avg{ static_cast<float>(sum) / count };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "sum : " << sum << '\n';
	std::cout << "avg : " << avg;
}