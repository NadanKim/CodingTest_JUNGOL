#include "FormativeFileProcess01.h"

/// <summary>
/// ����
/// �Ǽ� 2���� �Է� �޾� �հ踦 ���ϰ� ���� �Ҽ� ��° �ڸ����� �ݿø��Ͽ� ��° �ڸ����� �� �ٿ� ����Ͻÿ�.
/// 
/// * ǥ������¹������ �ۼ��ϼ���.
/// 
/// �Է� ��
/// 80.504 22.34
/// 
/// ��� ��
/// 80.50 22.34 102.84
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=105&sca=10i0
/// </summary>
void FormativeFileProcess01::Code()
{
	double var1, var2;

	std::cin >> var1 >> var2;

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << var1 << ' ' << var2 << ' ' << var1 + var2;
}