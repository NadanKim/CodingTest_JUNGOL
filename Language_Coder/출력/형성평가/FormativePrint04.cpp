#include "FormativePrint04.h"

/// <summary>
/// ����
/// ���� "��� ��"�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// �հ�� ����� ������ �̿��ϼ���. 
/// 
/// ��� ��
/// kor 90
/// mat 80
/// eng 100
/// sum 270
/// avg 90
/// 
/// Hint!
/// �հ�� ����� ���ϴ� ������ ������ ����.
/// sum 90 + 80 + 100
/// avg(90 + 80 + 100) / 3
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=4
/// </summary>
void FormativePrint04::Code()
{
	std::cout << "kor " << 90 << "\n";
	std::cout << "mat " << 80 << "\n";
	std::cout << "eng " << 100 << "\n";
	std::cout << "sum " << 90 + 80 + 100 << "\n";
	std::cout << "avg " << (90 + 80 + 100) / 3 << "\n";
}