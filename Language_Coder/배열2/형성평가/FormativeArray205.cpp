#include "FormativeArray205.h"

/// <summary>
/// ����
/// ȣ���̳� �б��� 6�г��� �� ���� �ִµ� �� ���� ��ǥ�� �� �� �����Ͽ� �������� ������ �Ͽ���.
/// �ݺ��� �� ���� ���⸦ �� ������ �Է¹޾� �� �ݺ��� ���⸦ �� ������ �հ踦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/// (�ݵ�� �迭�� �̿��ϰ� �Է��Ŀ� ����ϴ� ������� �ϼ���.)
/// 
/// �Է� ��
/// 1class? 15 2 35
/// 2class? 33 1 6
/// 3class? 5 10 19
/// 4class? 1 8 55
/// 
/// ��� ��
/// 1class : 52
/// 2class : 40
/// 3class : 34
/// 4class : 64
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=64&sca=10a0
/// </summary>
void FormativeArray205::Code()
{
	int classScore[4][3];

	for (int i = 0; i < 4; i++)
	{
		std::cout << i + 1 << "class? ";
		std::cin >> classScore[i][0] >> classScore[i][1] >> classScore[i][2];
	}

	for (int i = 0; i < 4; i++)
	{
		int sum{ classScore[i][0] + classScore[i][1] + classScore[i][2] };

		std::cout << i + 1 << "class : " << sum << '\n';
	}
}