#include "FormativePointer03.h"

/// <summary>
/// ����
/// �� ���� ������ ������ �����ϰ� �޸� ������ Ȯ���Ͽ� �� ���� �Է¹޾� �� ���� ���� ���밪��
/// ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 15 25
/// 
/// ��� ��
/// 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=102&sca=10h0
/// </summary>
void FormativePointer03::Code()
{
	int* var1 = new int;
	int* var2 = new int;

	std::cin >> *var1 >> *var2;

	int* result = new int{ std::abs(*var1 - *var2) };

	std::cout << *result;

	delete var1, var2;
	delete result;
}