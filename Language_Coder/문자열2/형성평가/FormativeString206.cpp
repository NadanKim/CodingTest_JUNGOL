#include "FormativeString206.h"

/// <summary>
/// ����
/// �� ���� ���ڿ� A�� B �� ���� ���� n�� �Է¹޾Ƽ� A�� B�� �����ϰ�, ����� ���ڿ� A���� n���� ���ڸ� B�� ������ ��
/// A�� B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (1��n,A,B��100)
/// 
/// �Է� ��
/// banana apple 3
/// 
/// ��� ��
/// bananaapple
/// banle
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=94&sca=10f0
/// </summary>
void FormativeString206::Code()
{
	string str1, str2;
	int n;

	std::cin >> str1 >> str2 >> n;

	str1 += str2;

	str2.replace(0, n, str1.substr(0, n));

	std::cout << str1 << '\n';
	std::cout << str2;
}