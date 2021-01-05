#include "FormativeFileProcess08.h"

/// <summary>
/// ����
/// ù° �ٿ� ���� n(2��n��100)�� �Է¹ް� ���� �ٺ��� n�� �л��� 3���� ������ �Է¹޾� ����� ���Ͽ� ������ ���� ������
/// ����Ͻÿ�.��, ����� �Ҽ� ��° �ڸ����� �ݿø��Ͽ� �Ҽ� ù° �ڸ����� ����Ͻÿ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// 5
/// 85 48 68
/// 73 55 89
/// 90 73 86
/// 63 90 100
/// 95 76 23
/// 
/// ��� ��
/// 84.3
/// 83.0
/// 72.3
/// 67.0
/// 64.7
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=112&sca=10i0
/// </summary>
void FormativeFileProcess08::Code()
{
	int n;

	std::cin >> n;

	double* arr = new double[n];

	double var1, var2, var3;
	for (int i = 0; i < n; i++)
	{
		std::cin >> var1 >> var2 >> var3;
		arr[i] = (var1 + var2 + var3) / 3;
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				double temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}