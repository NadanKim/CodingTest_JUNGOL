#include "FormativeString105.h"

/// <summary>
/// ����
/// �� ���� �ܾ �Է¹޾Ƽ� ���̰� �� �ܾ��� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �ܾ��� ���̴� 100�� ���ϴ�.
/// 
/// �Է� ��
/// excel powerpoint
/// 
/// ��� ��
/// 10
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=86&sca=10e0
/// </summary>
void FormativeString105::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	size_t result{ str1.size() > str2.size() ? str1.size() : str2.size() };

	std::cout << result;
}