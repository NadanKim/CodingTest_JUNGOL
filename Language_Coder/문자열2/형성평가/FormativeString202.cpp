#include "FormativeString202.h"

/// <summary>
/// ����
/// "flower" "rose" "lily" "daffodil" "azalea" 5���� �ܾ �ʱ�ȭ�� �� �� ���� ���ڸ� �Է¹޾Ƽ� �Է¹��� ���ڰ� �� ��°��
/// �� ��°�� ���Ե� �ܾ ��� ����ϰ� ������ �ٿ� ����� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
///
/// �ش�Ǵ� �ܾ ������ "0"�� ù �ٿ� ����Ѵ�.
/// 
/// �Է� ��
/// l
/// 
/// ��� ��
/// flower
/// lily
/// 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=90&sca=10f0
/// </summary>
void FormativeString202::Code()
{
	string str;

	std::cin >> str;

	std::cout << str.substr(0, 5);
}