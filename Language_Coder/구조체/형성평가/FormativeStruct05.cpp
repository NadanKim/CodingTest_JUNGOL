#include "FormativeStruct05.h"

/// <summary>
/// ����
/// 10 ������ ���� n�� �Է¹��� �� n���� �̸�(������ 20�� ����)�� �� ������ ������ �Է¹޾� ������ ���� ������ �����Ͽ� ����ϴ�
/// ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 3
/// Chung 50 65 89
/// Nolbu 100 38 99
/// Hungbu 85 95 77
/// 
/// ��� ��
/// Hungbu 85 95 77 257
/// Nolbu 100 38 99 237
/// Chung 50 65 89 204
/// 
/// Hint!
/// �̸��� 3������ ���� �̿ܿ� �������� �����ϴ� ����ü�� �����ϸ� ���ϴ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=99&sca=10g0
/// </summary>
void FormativeStruct05::Code()
{
	int n;

	std::cin >> n;

	Person* arr = new Person[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i].m_name >> arr[i].m_score1 >> arr[i].m_score2 >> arr[i].m_score3;
		arr[i].m_sumOfScore = arr[i].m_score1 + arr[i].m_score2 + arr[i].m_score3;
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j].m_sumOfScore < arr[j + 1].m_sumOfScore)
			{
				Person temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i].m_name << ' ' << arr[i].m_score1 << ' ' << arr[i].m_score2 << ' '
			<< arr[i].m_score3 << ' ' << arr[i].m_sumOfScore << '\n';
	}

	delete[] arr;
}