#include "FormativeArray103.h"

/// <summary>
/// ����
/// 10���� ������ �Է¹޾� Ȧ�� ��° �Է¹��� ������ �հ� ¦�� ��° �Է¹��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 10 20 25 66 83 7 22 90 1 100
/// 
/// ��� ��
/// odd : 141
/// even : 283
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=52&sca=1090
/// </summary>
void FormativeArray103::Code()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int odd{ 0 };
	for (int i = 0; i < 10; i += 2)
	{
		odd += arr[i];
	}

	int even{ 0 };
	for (int i = 1; i < 10; i += 2)
	{
		even += arr[i];
	}

	std::cout << "odd : " << odd << '\n';
	std::cout << "even : " << even;
}