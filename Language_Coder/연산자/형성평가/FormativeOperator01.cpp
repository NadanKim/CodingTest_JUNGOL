#include "FormativeOperator01.h"

/// <summary>
/// ����
/// ���� ���� ���� ��ǻ�� ������ ������ ������ �Է¹޾Ƽ� ������ ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// (�� ����� �Ҽ��� ���ϴ� ���� �Ѵ�.)
/// 
/// �Է� ��
/// 70 95 63 100
/// 
/// ��� ��
/// sum 328
/// avg 82
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=11&sca=1030
/// </summary>
void FormativeOperator01::Code()
{
	int kor, eng, math, com;

	std::cin >> kor >> eng >> math >> com;

	int sum{ kor + eng + math + com };
	int avg{ sum / 4 };

	std::cout << "sum " << sum << '\n';
	std::cout << "avg " << avg;
}