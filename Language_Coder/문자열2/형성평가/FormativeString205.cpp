#include "FormativeString205.h"

/// <summary>
/// ����
/// 5���� �ܾ�(�� �ܾ�� 100�� ����)�� �Է¹��� �� ���ڿ� ���ڿ�(100�� ����)�� �� ���� �Է¹޾� ���߿� �Է¹��� ���ڳ� ���ڿ���
/// ���Ե� �ܾ ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// ã�� �ܾ ������ ��none���̶�� ����Ѵ�.
/// 
/// �Է� ��
/// banana
/// apple
/// melon
/// tomato
/// pear
/// n
/// to
/// 
/// ��� ��
/// banana
/// melon
/// tomato
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=93&sca=10f0
/// </summary>
void FormativeString205::Code()
{
	string str1, str2;

	std::cin >> str1 >> str2;

	size_t result{ str1.size() > str2.size() ? str1.size() : str2.size() };

	std::cout << result;
}