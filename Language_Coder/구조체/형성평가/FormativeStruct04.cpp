#include "FormativeStruct04.h"

/// <summary>
/// ����
/// � �л��� Ű�� �ƹ����� ��Ӵ��� Ű�� ��պ��� 5cm ũ�� �����Դ� �ƹ����� ��Ӵ��� �������� ��պ��� 4.5kg �����ٰ� �Ѵ�.
/// 
/// Ű�� �����Ը� ��������� ���� ����ü�� �����ϰ� �ƹ����� ��Ӵ��� Ű�� �����Ը� �Է¹޾� �л��� Ű�� �����Ը� ����ϴ� ���α׷���
/// �ۼ��Ͻÿ�.
/// 
/// Ű�� �����̸� �����ϰ� �����Դ� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ��Ÿ����.
/// 
/// �Է� ��
/// 175 68.8
/// 166 56.4
/// 
/// ��� ��
/// height : 175cm
/// weight : 58.1kg
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=98&sca=10g0
/// </summary>
void FormativeStruct04::Code()
{
	Person father, mother;

	std::cin >> father.height >> father.weight;
	std::cin >> mother.height >> mother.weight;

	Person child;
	child.height = (father.height + mother.height) / 2 + 5;
	child.weight = (father.weight + mother.weight) / 2 - 4.5f;

	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	std::cout << "height : " << child.height << "cm\n";
	std::cout << "weight : " << child.weight << "kg";
}