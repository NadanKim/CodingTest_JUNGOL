#include "FormativePointer05.h"

/// <summary>
/// ����
/// ���� n�� �Է¹޾� n���� ������ �����迭�� �����ϰ� n���� ������ �Է¹޾� �ִ밪�� �ּҰ���
/// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 5
/// 15 90 8 36 25
/// 
/// ��� ��
/// max : 90
/// min : 8
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=104&sca=10h0
/// </summary>
void FormativePointer05::Code()
{
	int n;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int max{ arr[0] }, min{ arr[0] };
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	std::cout << "max : " << max << '\n';
	std::cout << "min : " << min;

	delete[] arr;
}