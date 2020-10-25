#include "FormativeInput03.h"

/// <summary>
/// ����
/// ������ ���� �� ���� �����Ͽ� 50�� �����ϰ� �Ǽ��� ���� �� ���� �����Ͽ� 100.12�� ������ ��
/// ������ ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�. (������� �Ҽ��� ���Ͽ��� �ݿø�)
/// 
/// ��� ��
/// 100.12 * 50 = 5006
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=8&sca=1020
/// </summary>
void FormativeInput03::Code()
{
	int var1{ 50 };
	float var2{ 100.12f };
	int result{ static_cast<int>(var1 * var2 + 0.5f) };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);

	std::cout << var2 << " * " << var1 << " = " << result;
}