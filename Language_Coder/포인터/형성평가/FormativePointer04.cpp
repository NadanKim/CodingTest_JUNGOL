#include "FormativePointer04.h"

/// <summary>
/// ����
/// 10���� ���Ҹ� ������ �� �ִ� �迭�� ������ �� ������ ������ �̿��Ͽ� �ڷḦ �Է¹޾� Ȧ���� ������
/// ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 3 5 10 52 1 97 36 25 13 29
/// 
/// ��� ��
/// odd : 7
/// even : 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=103&sca=10h0
/// </summary>
void FormativePointer04::Code()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	int odd{ 0 }, even{ 0 };
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	std::cout << "odd : " << odd << '\n';
	std::cout << "even : " << even;

	delete[] arr;
}