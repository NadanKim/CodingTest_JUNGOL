#include "FormativeLoop103.h"

/// <summary>
/// ����
/// 0 ���� 100 ������ ������ ��� �Է¹޴ٰ� ������ ����� ���� �ԷµǸ� �� �������� �Էµ� �ڷ��� �հ�� �����
/// ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.)
/// 
/// �Է� ��
/// 55 100 48 36 0 101
/// 
/// ��� ��
/// sum : 239
/// avg : 47.8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=27&sca=1060
/// </summary>
void FormativeLoop103::Code()
{
	int var;
	int sum{ 0 }, count{ 0 };

	while (true)
	{
		std::cin >> var;
		
		if (var < 0 || 100 < var)
		{
			break;
		}

		sum += var;
		count++;
	}

	float avg{ static_cast<float>(sum) / count };

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "sum : " << sum << '\n';
	std::cout << "avg : " << avg;
}