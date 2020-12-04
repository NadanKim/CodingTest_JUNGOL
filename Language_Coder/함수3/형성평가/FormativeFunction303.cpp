#include "FormativeFunction303.h"

/// <summary>
/// ����
/// �ڿ��� N�� M�� �Է¹޾Ƽ� �ֻ����� N�� ������ ���� ���� ���� M�� ���� �� �ִ� ��� ��츦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ��, N�� 10 ������ �����̴�.
/// 
/// �Է� ��
/// 3 10
/// 
/// ��� ��
/// 1 3 6
/// 1 4 5
/// 1 5 4
/// 1 6 3
/// 2 2 6
/// 2 3 5
/// ��
/// 6 2 2
/// 6 3 1
/// 
/// Hint!
/// ����Լ��� ����(level)�� �հ�(sum) �� ���� �μ��� �����Ͽ� sum�� M�� ���� ��쿡�� ����ϵ��� �Ѵ�.
/// (���� : void dice(int level int sum) ȣ�� : dice(level+1 sum+i))
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=133&sca=10d0
/// </summary>
void FormativeFunction303::Code()
{
	int arr[10];
	int n, m;

	std::cin >> n >> m;

	std::fill_n(arr, n, 1);

	Function(arr, 0, 0, n, m);
}

void FormativeFunction303::Function(int arr[], int curIdx, int sum, int n, int m)
{
	if (curIdx == n)
	{
		if (sum == m)
		{
			for (int i = 0; i < n; i++)
			{
				std::cout << arr[i] << ' ';
			}
			std::cout << '\n';
		}
		return;
	}

	for (int i = 1; i <= 6; i++)
	{
		arr[curIdx] = i;
		Function(arr, curIdx + 1, sum + i, n, m);
	}
}