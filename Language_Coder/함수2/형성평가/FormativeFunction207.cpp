#include "FormativeFunction207.h"

/// <summary>
/// ����
/// �������� 3.141592�� ��ũ�� ����� �����ϰ� ���� ���̸� ���ϴ� ��ũ�� �Լ��� �ۼ��Ͽ� �������� �Է¹޾� ���� ���̸�
/// ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�Ҽ� ��°�ڸ����� �ݿø�)
/// 
/// �Է� ��
/// radius : 1.5
/// 
/// ��� ��
/// area = 7.069
/// 
/// Hint!
/// ���� ���� : ������ �� ������ �� ������(��)
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=81&sca=10c0
/// </summary>
void FormativeFunction207::Code()
{
	double radius;

	std::cout << "radius : ";
	std::cin >> radius;

	std::cout.precision(3);
	std::cout.setf(std::ios::fixed);
	
	std::cout << "area = " << AREA(radius);
}