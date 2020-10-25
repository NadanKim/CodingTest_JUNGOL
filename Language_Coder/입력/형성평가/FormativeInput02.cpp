#include "FormativeInput02.h"

/// <summary>
/// ����
/// �Ǽ��� ������ 2�� ������ �� ������ 80.5 22.34�� ������ �� �� ���� ���� ���Ͽ�
/// ������ ���ڸ� 10ĭ�� �����ʿ� ���߾� �Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// ��� ��
///      80.50     22.34    102.84
/// 
/// Hint!
/// ������ ���� ��� 1ĭ�� �����Ѵ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=7&sca=1020
/// </summary>
void FormativeInput02::Code()
{
	float var1{ 80.5f }, var2{ 22.34f };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed | std::ios::right);
	
	std::cout << std::setw(10) << var1 << std::setw(10) << var2 << std::setw(10) << var1 + var2;
}