#include "FormativeOperator05.h"

/// <summary>
/// ����
/// �μ��� �⿵���� Ű�� �����Ը� �Է¹޾� �μ��� Ű�� ũ�� �����Ե� ũ�� 1 �׷��� ������ 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// (JAVA�� 1 �̸� true, 0 �̸� false�� ����Ѵ�.)
/// 
/// �Է� ��
/// 150 35
/// 145 35
/// 
/// ��� ��
/// 0
/// 
/// Hint!
/// ���� �����ڿ� �� �����ڸ� �Բ� �̿��Ѵ�.
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=15&sca=1030
/// </summary>
void FormativeOperator05::Code()
{
	int minsuHeight, minsuWeight;
	int giyeongHeight, giyeongWeight;

	std::cin >> minsuHeight >> minsuWeight
		>> giyeongHeight >> giyeongWeight;

	bool result = (minsuHeight > giyeongHeight) && (minsuWeight > giyeongWeight);
	std::cout << result;
}