#include "FormativePointer02.h"

/// <summary>
/// ����
/// ������ ������ �����ϰ� ������ ������ ����Ͽ� 100 ������ ���� �Է¹��� �� �Է¹��� ����ŭ ��*����
/// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// 10
/// 
/// ��� ��
/// **********
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=101&sca=10h0
/// </summary>
void FormativePointer02::Code()
{
	int* var = new int;

	std::cin >> *var;

	for (int i = 0; i < *var; i++)
	{
		std::cout << '*';
	}

	delete var;
}