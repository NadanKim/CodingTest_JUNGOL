#include "FormativeString204.h"

/// <summary>
/// ����
/// 10 ������ ���� n�� �Է¹ް� n���� ���ڿ��� �Է¹��� �� �� ũ�⸦ ���Ͽ� ���� ���� ���ڿ����� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ���ڿ��� ���̴� 100�� ���ϴ�.������(�ƽ�Ű�ڵ��)���� �ڿ� ������ ���� ū ������ �Ѵ�.
/// 
/// �Է� ��
/// 3
/// notebook
/// pencil
/// eraser
/// 
/// ��� ��
/// eraser
/// notebook
/// pencil
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=92&sca=10f0
/// </summary>
void FormativeString204::Code()
{
	int n;

	std::cin >> n;

	string* arr = new string[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				string temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << '\n';
	}

	delete[] arr;
}