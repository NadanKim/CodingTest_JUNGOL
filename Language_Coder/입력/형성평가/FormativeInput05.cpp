#include "FormativeInput05.h"

/// <summary>
/// ����
/// �Ǽ��� yard(�ߵ�)�� �Է¹޾� cm(��Ƽ����)�� ȯ���Ͽ� �Է°��� ȯ���� ���� ��� ���� ���� �Ҽ� ��°�ڸ����� �ݿø��Ͽ� ù°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�� 1�ߵ� = 91.44cm�� �Ѵ�.)
/// �Է��� "yard? "��� ���� ����ϰ�, �Ǽ��� �Է¹޴´�.�Ǽ��� "double"�� �Ѵ�.
/// 
/// �Է� ��
/// yard? 10.1
/// 
/// ��� ��
/// 10.1yard = 923.5cm
/// 
/// Hint!
/// �Է��� �ޱ� ���� ���� �ڿ��� ��! ������ �־���Ѵ�. printf("yard? ");
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=10&sca=1020
/// </summary>
void FormativeInput05::Code()
{
	double var;

	std::cout << "yard? ";
	std::cin >> var;

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << var << "yard = " << var * 91.44 << "cm";
}