#include "FormativeFunction206.h"

/// <summary>
/// ����
/// �ڷ��� ���� 7�� ��ũ�� ����� �����Ͽ� �ڷ��� ������ŭ ������ �Է¹޾� �Է¹��� ������� �տ������� ���������� ���鼭
/// �ٷ� ���� ���ڿ� ���Ͽ� ũ�� ��ȯ�Ѵ�.�̷��� �۾��� �� �� �ݺ��� �� �� ����� �ϳ��� �࿡ �������� �����Ͽ� ����ϴ�
/// ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 15 20 41 8 26 33 19
/// 
/// ��� ��
/// 8 15 20 19 26 33 41
/// 
/// Hint!
/// �������Ŀ��� i�� N-1���� N-3���� 3�� �����ϸ� �ȴ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=80&sca=10c0
/// </summary>
void FormativeFunction206::Code()
{
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}

	Function(arr);
}

void FormativeFunction206::Function(int arr[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp{ arr[j] };
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		std::cout << arr[i] << ' ';
	}
}