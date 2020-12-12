#include "FormativeString206.h"

/// <summary>
/// 문제
/// 두 개의 문자열 A와 B 한 개의 정수 n을 입력받아서 A에 B를 연결하고, 변경된 문자열 A에서 n개의 문자를 B에 복사한 후
/// A와 B를 출력하는 프로그램을 작성하시오. (1≤n,A,B≤100)
/// 
/// 입력 예
/// banana apple 3
/// 
/// 출력 예
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