#include "FormativeInput04.h"

/// <summary>
/// ����
/// �� ���� ������ �Է¹޾� �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// (�� ����� �Ҽ� ���ϸ� �����Ͽ� ���� �κи� ����Ѵ�.)
/// 
/// �Է� ��
/// 20 50 100
/// 
/// ��� ��
/// sum = 170
/// avg = 56
/// 
/// Hint!
/// ������ ������ ���� ���� �Ҽ� ���ϸ� ���� ������ �ȴ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=9&sca=1020
/// </summary>
void FormativeInput04::Code()
{
	int var1, var2, var3;

	std::cin >> var1 >> var2 >> var3;

	int sum = var1 + var2 + var3;
	std::cout << "sum = " << sum << '\n';

	int avg = sum / 3;
	std::cout << "avg = " << avg;
}