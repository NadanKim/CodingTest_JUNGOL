#include "FormativeString102.h"

/// <summary>
/// ����
/// 5�� �̻� 100�� ������ ���ڷ� �� �ܾ �Է¹��� �� �տ������� 5�ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// 
/// �Է� ��
/// AbCdEFG
/// 
/// ��� ��
/// AbCdE
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=83&sca=10e0
/// </summary>
void FormativeString102::Code()
{
	string str;

	std::cin >> str;

	std::cout << str.substr(0, 5);
}